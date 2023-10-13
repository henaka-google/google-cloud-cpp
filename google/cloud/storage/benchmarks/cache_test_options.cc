// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/benchmarks/cache_test_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include <iomanip>
#include <iterator>
#include <sstream>

namespace google {
namespace cloud {
namespace storage_benchmarks {

namespace gcs = ::google::cloud::storage;
namespace gcs_ex = ::google::cloud::storage_experimental;
using ::google::cloud::testing_util::OptionDescriptor;

StatusOr<CommonCacheTestOptions> ValidateOptions(
    std::string const& usage, CommonCacheTestOptions options) {
  auto make_status = [](std::ostringstream& os) {
    return Status{StatusCode::kInvalidArgument, std::move(os).str()};
  };

  if (options.bucket_name.empty()) {
    std::ostringstream os;
    os << "Missing --bucket-name option\n" << usage << "\n";
    return make_status(os);
  }

  return options;
}

std::string GetFileNameFromIndex(int index,
                                 CommonCacheTestOptions const& options) {
  std::stringstream ss;
  ss << std::setw(options.object_name_min_length) << std::setfill('0') << index;
  return ss.str();
}

google::cloud::StatusOr<CommonCacheTestOptions> ParseCommonCacheTestOptions(
    std::vector<std::string> const& argv, std::string const& description) {
  CommonCacheTestOptions options;

  std::vector<OptionDescriptor> desc{
      {"--bucket-name", "the bucket where the dataset is located",
       [&options](std::string const& val) { options.bucket_name = val; }},
      {"--object-prefix", "the dataset prefix",
       [&options](std::string const& val) { options.object_prefix = val; }},
      {"--object_start_index", "starting index for objects to read",
       [&options](std::string const& val) {
         options.object_start_index = std::stoi(val);
       }},
      {"--object_end_index", "number of objects to read",
       [&options](std::string const& val) {
         options.object_end_index = std::stoi(val);
       }},
      {"--object-size", "object size",
       [&options](std::string const& val) {
         options.object_size = ParseSize(val);
       }},
  };

  auto usage = BuildUsage(desc, argv[0]);
  OptionsParse(desc, argv);
  return ValidateOptions(usage, std::move(options));
}

}  // namespace storage_benchmarks
}  // namespace cloud
}  // namespace google
