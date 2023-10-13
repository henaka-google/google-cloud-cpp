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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_BENCHMARKS_CACHE_TEST_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_BENCHMARKS_CACHE_TEST_OPTIONS_H

#include "google/cloud/storage/benchmarks/benchmark_utils.h"
#include <cstdint>
#include <string>
#include <vector>

namespace google {
namespace cloud {
namespace storage_benchmarks {

// Shared settings between workload generation and read tests
struct CommonCacheTestOptions {
  std::string bucket_name;
  std::string object_prefix;
  int object_start_index = 1;
  int object_end_index = 1000;
  std::int64_t object_size = 64 * kMiB;
  // Shorter names will be padded with zeros
  int object_name_min_length = 10;
  int object_count() const { return object_end_index - object_start_index; }
};

std::string GetFileNameFromIndex(int index,
                                 CommonCacheTestOptions const& options);

google::cloud::StatusOr<CommonCacheTestOptions> ParseCommonCacheTestOptions(
    std::vector<std::string> const& argv, std::string const& description);

}  // namespace storage_benchmarks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_BENCHMARKS_CACHE_TEST_OPTIONS_H
