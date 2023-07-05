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
// source: google/cloud/alloydb/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_ALLOY_DB_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_ALLOY_DB_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/alloydb/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace alloydb_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AlloyDBAdminConnectionIdempotencyPolicy {
 public:
  virtual ~AlloyDBAdminConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<AlloyDBAdminConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListClusters(
      google::cloud::alloydb::v1::ListClustersRequest request);

  virtual google::cloud::Idempotency GetCluster(
      google::cloud::alloydb::v1::GetClusterRequest const& request);

  virtual google::cloud::Idempotency CreateCluster(
      google::cloud::alloydb::v1::CreateClusterRequest const& request);

  virtual google::cloud::Idempotency UpdateCluster(
      google::cloud::alloydb::v1::UpdateClusterRequest const& request);

  virtual google::cloud::Idempotency DeleteCluster(
      google::cloud::alloydb::v1::DeleteClusterRequest const& request);

  virtual google::cloud::Idempotency PromoteCluster(
      google::cloud::alloydb::v1::PromoteClusterRequest const& request);

  virtual google::cloud::Idempotency RestoreCluster(
      google::cloud::alloydb::v1::RestoreClusterRequest const& request);

  virtual google::cloud::Idempotency CreateSecondaryCluster(
      google::cloud::alloydb::v1::CreateSecondaryClusterRequest const& request);

  virtual google::cloud::Idempotency ListInstances(
      google::cloud::alloydb::v1::ListInstancesRequest request);

  virtual google::cloud::Idempotency GetInstance(
      google::cloud::alloydb::v1::GetInstanceRequest const& request);

  virtual google::cloud::Idempotency CreateInstance(
      google::cloud::alloydb::v1::CreateInstanceRequest const& request);

  virtual google::cloud::Idempotency CreateSecondaryInstance(
      google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const&
          request);

  virtual google::cloud::Idempotency BatchCreateInstances(
      google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request);

  virtual google::cloud::Idempotency UpdateInstance(
      google::cloud::alloydb::v1::UpdateInstanceRequest const& request);

  virtual google::cloud::Idempotency DeleteInstance(
      google::cloud::alloydb::v1::DeleteInstanceRequest const& request);

  virtual google::cloud::Idempotency FailoverInstance(
      google::cloud::alloydb::v1::FailoverInstanceRequest const& request);

  virtual google::cloud::Idempotency InjectFault(
      google::cloud::alloydb::v1::InjectFaultRequest const& request);

  virtual google::cloud::Idempotency RestartInstance(
      google::cloud::alloydb::v1::RestartInstanceRequest const& request);

  virtual google::cloud::Idempotency ListBackups(
      google::cloud::alloydb::v1::ListBackupsRequest request);

  virtual google::cloud::Idempotency GetBackup(
      google::cloud::alloydb::v1::GetBackupRequest const& request);

  virtual google::cloud::Idempotency CreateBackup(
      google::cloud::alloydb::v1::CreateBackupRequest const& request);

  virtual google::cloud::Idempotency UpdateBackup(
      google::cloud::alloydb::v1::UpdateBackupRequest const& request);

  virtual google::cloud::Idempotency DeleteBackup(
      google::cloud::alloydb::v1::DeleteBackupRequest const& request);

  virtual google::cloud::Idempotency ListSupportedDatabaseFlags(
      google::cloud::alloydb::v1::ListSupportedDatabaseFlagsRequest request);

  virtual google::cloud::Idempotency ListUsers(
      google::cloud::alloydb::v1::ListUsersRequest request);

  virtual google::cloud::Idempotency GetUser(
      google::cloud::alloydb::v1::GetUserRequest const& request);

  virtual google::cloud::Idempotency CreateUser(
      google::cloud::alloydb::v1::CreateUserRequest const& request);

  virtual google::cloud::Idempotency UpdateUser(
      google::cloud::alloydb::v1::UpdateUserRequest const& request);

  virtual google::cloud::Idempotency DeleteUser(
      google::cloud::alloydb::v1::DeleteUserRequest const& request);
};

std::unique_ptr<AlloyDBAdminConnectionIdempotencyPolicy>
MakeDefaultAlloyDBAdminConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace alloydb_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_ALLOY_DB_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H
