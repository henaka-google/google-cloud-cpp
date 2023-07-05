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
// source: generator/integration_tests/test.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_GOLDEN_KITCHEN_SINK_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_GOLDEN_KITCHEN_SINK_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <generator/integration_tests/test.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GoldenKitchenSinkConnectionIdempotencyPolicy {
 public:
  virtual ~GoldenKitchenSinkConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<GoldenKitchenSinkConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency
  GenerateAccessToken(google::test::admin::database::v1::GenerateAccessTokenRequest const& request);

  virtual google::cloud::Idempotency
  GenerateIdToken(google::test::admin::database::v1::GenerateIdTokenRequest const& request);

  virtual google::cloud::Idempotency
  WriteLogEntries(google::test::admin::database::v1::WriteLogEntriesRequest const& request);

  virtual google::cloud::Idempotency
  ListLogs(google::test::admin::database::v1::ListLogsRequest request);

  virtual google::cloud::Idempotency
  ListServiceAccountKeys(google::test::admin::database::v1::ListServiceAccountKeysRequest const& request);

  virtual google::cloud::Idempotency
  DoNothing(google::protobuf::Empty const& request);

  virtual google::cloud::Idempotency
  Deprecated2(google::test::admin::database::v1::GenerateAccessTokenRequest const& request);

  virtual google::cloud::Idempotency
  ExplicitRouting1(google::test::admin::database::v1::ExplicitRoutingRequest const& request);

  virtual google::cloud::Idempotency
  ExplicitRouting2(google::test::admin::database::v1::ExplicitRoutingRequest const& request);
};

std::unique_ptr<GoldenKitchenSinkConnectionIdempotencyPolicy>
    MakeDefaultGoldenKitchenSinkConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_GOLDEN_KITCHEN_SINK_CONNECTION_IDEMPOTENCY_POLICY_H
