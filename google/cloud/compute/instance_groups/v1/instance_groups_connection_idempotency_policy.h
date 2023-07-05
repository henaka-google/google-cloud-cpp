// Copyright 2023 Google LLC
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
// source: google/cloud/compute/instance_groups/v1/instance_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_INSTANCE_GROUPS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_INSTANCE_GROUPS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/instance_groups/v1/instance_groups.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceGroupsConnectionIdempotencyPolicy {
 public:
  virtual ~InstanceGroupsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<InstanceGroupsConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AddInstances(
      google::cloud::cpp::compute::instance_groups::v1::
          AddInstancesRequest const& request);

  virtual google::cloud::Idempotency AggregatedListInstanceGroups(
      google::cloud::cpp::compute::instance_groups::v1::
          AggregatedListInstanceGroupsRequest const& request);

  virtual google::cloud::Idempotency DeleteInstanceGroups(
      google::cloud::cpp::compute::instance_groups::v1::
          DeleteInstanceGroupsRequest const& request);

  virtual google::cloud::Idempotency GetInstanceGroups(
      google::cloud::cpp::compute::instance_groups::v1::
          GetInstanceGroupsRequest const& request);

  virtual google::cloud::Idempotency InsertInstanceGroups(
      google::cloud::cpp::compute::instance_groups::v1::
          InsertInstanceGroupsRequest const& request);

  virtual google::cloud::Idempotency ListInstanceGroups(
      google::cloud::cpp::compute::instance_groups::v1::
          ListInstanceGroupsRequest request);

  virtual google::cloud::Idempotency ListInstances(
      google::cloud::cpp::compute::instance_groups::v1::ListInstancesRequest
          request);

  virtual google::cloud::Idempotency RemoveInstances(
      google::cloud::cpp::compute::instance_groups::v1::
          RemoveInstancesRequest const& request);

  virtual google::cloud::Idempotency SetNamedPorts(
      google::cloud::cpp::compute::instance_groups::v1::
          SetNamedPortsRequest const& request);
};

std::unique_ptr<InstanceGroupsConnectionIdempotencyPolicy>
MakeDefaultInstanceGroupsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_groups_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_INSTANCE_GROUPS_CONNECTION_IDEMPOTENCY_POLICY_H
