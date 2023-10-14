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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_BENCHMARKS_CACHE_READ_TEST_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_BENCHMARKS_CACHE_READ_TEST_OPTIONS_H

#include "google/cloud/storage/benchmarks/benchmark_utils.h"
#include "google/cloud/storage/benchmarks/cache_test_options.h"
#include <cstdint>
#include <string>
#include <vector>

namespace google {
namespace cloud {
namespace storage_benchmarks {

struct CacheReadTestOptions {
  std::string labels;
  int thread_count = 1;
  int iteration_count = 1;
  int repeats_per_iteration = 1;
  bool random_read_order = true;
  std::int64_t read_size = 0;  // 0 means "read the whole file"
  std::size_t read_buffer_size = 4 * kMiB;
  std::string api = "JSON";
  bool client_per_thread = false;
  Options client_options;
  bool exit_after_parse = false;
  CommonCacheTestOptions common_options;
};

google::cloud::StatusOr<CacheReadTestOptions>
ParseCacheReadTestOptions(std::vector<std::string> const& argv,
                                        std::string const& description);

}  // namespace storage_benchmarks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_BENCHMARKS_CACHE_READ_TEST_OPTIONS_H
