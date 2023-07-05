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
// source: google/cloud/bigquery/datapolicies/v1/datapolicy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATAPOLICIES_V1_DATA_POLICY_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATAPOLICIES_V1_DATA_POLICY_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/datapolicies/v1/datapolicy.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_datapolicies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataPolicyServiceConnectionIdempotencyPolicy {
 public:
  virtual ~DataPolicyServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DataPolicyServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateDataPolicy(
      google::cloud::bigquery::datapolicies::v1::CreateDataPolicyRequest const&
          request);

  virtual google::cloud::Idempotency UpdateDataPolicy(
      google::cloud::bigquery::datapolicies::v1::UpdateDataPolicyRequest const&
          request);

  virtual google::cloud::Idempotency RenameDataPolicy(
      google::cloud::bigquery::datapolicies::v1::RenameDataPolicyRequest const&
          request);

  virtual google::cloud::Idempotency DeleteDataPolicy(
      google::cloud::bigquery::datapolicies::v1::DeleteDataPolicyRequest const&
          request);

  virtual google::cloud::Idempotency GetDataPolicy(
      google::cloud::bigquery::datapolicies::v1::GetDataPolicyRequest const&
          request);

  virtual google::cloud::Idempotency ListDataPolicies(
      google::cloud::bigquery::datapolicies::v1::ListDataPoliciesRequest
          request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);
};

std::unique_ptr<DataPolicyServiceConnectionIdempotencyPolicy>
MakeDefaultDataPolicyServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datapolicies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATAPOLICIES_V1_DATA_POLICY_CONNECTION_IDEMPOTENCY_POLICY_H
