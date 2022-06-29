// Copyright 2021 Google LLC
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
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_TABLE_ADMIN_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_TABLE_ADMIN_CONNECTION_IMPL_H

#include "google/cloud/bigtable/admin/bigtable_table_admin_connection.h"
#include "google/cloud/bigtable/admin/bigtable_table_admin_connection_idempotency_policy.h"
#include "google/cloud/bigtable/admin/bigtable_table_admin_options.h"
#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_retry_traits.h"
#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BigtableTableAdminConnectionImpl
    : public bigtable_admin::BigtableTableAdminConnection {
 public:
  ~BigtableTableAdminConnectionImpl() override = default;

  BigtableTableAdminConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<bigtable_admin_internal::BigtableTableAdminStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::bigtable::admin::v2::Table> CreateTable(
      google::bigtable::admin::v2::CreateTableRequest const& request) override;

  StreamRange<google::bigtable::admin::v2::Table> ListTables(
      google::bigtable::admin::v2::ListTablesRequest request) override;

  StatusOr<google::bigtable::admin::v2::Table> GetTable(
      google::bigtable::admin::v2::GetTableRequest const& request) override;

  Status DeleteTable(
      google::bigtable::admin::v2::DeleteTableRequest const& request) override;

  future<StatusOr<google::bigtable::admin::v2::Table>> UndeleteTable(
      google::bigtable::admin::v2::UndeleteTableRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::Table> ModifyColumnFamilies(
      google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request)
      override;

  Status DropRowRange(
      google::bigtable::admin::v2::DropRowRangeRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
  GenerateConsistencyToken(
      google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
          request) override;

  StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
  CheckConsistency(google::bigtable::admin::v2::CheckConsistencyRequest const&
                       request) override;

  future<StatusOr<google::bigtable::admin::v2::Backup>> CreateBackup(
      google::bigtable::admin::v2::CreateBackupRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::Backup> GetBackup(
      google::bigtable::admin::v2::GetBackupRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::Backup> UpdateBackup(
      google::bigtable::admin::v2::UpdateBackupRequest const& request) override;

  Status DeleteBackup(
      google::bigtable::admin::v2::DeleteBackupRequest const& request) override;

  StreamRange<google::bigtable::admin::v2::Backup> ListBackups(
      google::bigtable::admin::v2::ListBackupsRequest request) override;

  future<StatusOr<google::bigtable::admin::v2::Table>> RestoreTable(
      google::bigtable::admin::v2::RestoreTableRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
  AsyncCheckConsistency(
      google::bigtable::admin::v2::CheckConsistencyRequest const& request)
      override;

 private:
  std::unique_ptr<bigtable_admin::BigtableTableAdminRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<bigtable_admin::BigtableTableAdminRetryPolicyOption>()) {
      return options.get<bigtable_admin::BigtableTableAdminRetryPolicyOption>()
          ->clone();
    }
    return options_.get<bigtable_admin::BigtableTableAdminRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<bigtable_admin::BigtableTableAdminBackoffPolicyOption>()) {
      return options
          .get<bigtable_admin::BigtableTableAdminBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<bigtable_admin::BigtableTableAdminBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<bigtable_admin::BigtableTableAdminConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<bigtable_admin::
                     BigtableTableAdminConnectionIdempotencyPolicyOption>()) {
      return options
          .get<bigtable_admin::
                   BigtableTableAdminConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<bigtable_admin::
                 BigtableTableAdminConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<bigtable_admin::BigtableTableAdminPollingPolicyOption>()) {
      return options
          .get<bigtable_admin::BigtableTableAdminPollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<bigtable_admin::BigtableTableAdminPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<bigtable_admin_internal::BigtableTableAdminStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_TABLE_ADMIN_CONNECTION_IMPL_H
