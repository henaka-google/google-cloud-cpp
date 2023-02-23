// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/retail/v2/completion_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_COMPLETION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_COMPLETION_CONNECTION_H

#include "google/cloud/retail/v2/completion_connection_idempotency_policy.h"
#include "google/cloud/retail/v2/internal/completion_retry_traits.h"
#include "google/cloud/retail/v2/internal/completion_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using CompletionServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        retail_v2_internal::CompletionServiceRetryTraits>;

using CompletionServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        retail_v2_internal::CompletionServiceRetryTraits>;

using CompletionServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        retail_v2_internal::CompletionServiceRetryTraits>;

/**
 * The `CompletionServiceConnection` object for `CompletionServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CompletionServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `CompletionServiceClient`.
 *
 * To create a concrete instance, see `MakeCompletionServiceConnection()`.
 *
 * For mocking, see `retail_v2_mocks::MockCompletionServiceConnection`.
 */
class CompletionServiceConnection {
 public:
  virtual ~CompletionServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::retail::v2::CompleteQueryResponse>
  CompleteQuery(google::cloud::retail::v2::CompleteQueryRequest const& request);

  virtual future<
      StatusOr<google::cloud::retail::v2::ImportCompletionDataResponse>>
  ImportCompletionData(
      google::cloud::retail::v2::ImportCompletionDataRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `CompletionServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * CompletionServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CompletionServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::retail_v2::CompletionServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CompletionServiceConnection` created
 * by this function.
 */
std::shared_ptr<CompletionServiceConnection> MakeCompletionServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_COMPLETION_CONNECTION_H
