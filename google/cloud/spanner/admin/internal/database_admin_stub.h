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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto
#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_DATABASE_ADMIN_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_DATABASE_ADMIN_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <google/spanner/admin/database/v1/spanner_database_admin.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

class DatabaseAdminStub {
 public:
  virtual ~DatabaseAdminStub() = 0;

  virtual StatusOr<google::spanner::admin::database::v1::ListDatabasesResponse>
  ListDatabases(
      grpc::ClientContext& context,
      google::spanner::admin::database::v1::ListDatabasesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateDatabase(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::spanner::admin::database::v1::CreateDatabaseRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::Database> GetDatabase(
      grpc::ClientContext& context,
      google::spanner::admin::database::v1::GetDatabaseRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateDatabaseDdl(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
          request) = 0;

  virtual Status DropDatabase(
      grpc::ClientContext& context,
      google::spanner::admin::database::v1::DropDatabaseRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(
      grpc::ClientContext& context,
      google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
          request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::spanner::admin::database::v1::CreateBackupRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::Backup> GetBackup(
      grpc::ClientContext& context,
      google::spanner::admin::database::v1::GetBackupRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::Backup> UpdateBackup(
      grpc::ClientContext& context,
      google::spanner::admin::database::v1::UpdateBackupRequest const&
          request) = 0;

  virtual Status DeleteBackup(
      grpc::ClientContext& context,
      google::spanner::admin::database::v1::DeleteBackupRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::ListBackupsResponse>
  ListBackups(grpc::ClientContext& context,
              google::spanner::admin::database::v1::ListBackupsRequest const&
                  request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncRestoreDatabase(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&
          request) = 0;

  virtual StatusOr<
      google::spanner::admin::database::v1::ListDatabaseOperationsResponse>
  ListDatabaseOperations(
      grpc::ClientContext& context,
      google::spanner::admin::database::v1::ListDatabaseOperationsRequest const&
          request) = 0;

  virtual StatusOr<
      google::spanner::admin::database::v1::ListBackupOperationsResponse>
  ListBackupOperations(
      grpc::ClientContext& context,
      google::spanner::admin::database::v1::ListBackupOperationsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultDatabaseAdminStub : public DatabaseAdminStub {
 public:
  DefaultDatabaseAdminStub(
      std::unique_ptr<
          google::spanner::admin::database::v1::DatabaseAdmin::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::spanner::admin::database::v1::ListDatabasesResponse>
  ListDatabases(
      grpc::ClientContext& client_context,
      google::spanner::admin::database::v1::ListDatabasesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDatabase(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::spanner::admin::database::v1::CreateDatabaseRequest const&
          request) override;
  StatusOr<google::spanner::admin::database::v1::Database> GetDatabase(
      grpc::ClientContext& client_context,
      google::spanner::admin::database::v1::GetDatabaseRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDatabaseDdl(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
          request) override;
  Status DropDatabase(
      grpc::ClientContext& client_context,
      google::spanner::admin::database::v1::DropDatabaseRequest const& request)
      override;

  StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(
      grpc::ClientContext& client_context,
      google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& client_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::spanner::admin::database::v1::CreateBackupRequest const& request)
      override;
  StatusOr<google::spanner::admin::database::v1::Backup> GetBackup(
      grpc::ClientContext& client_context,
      google::spanner::admin::database::v1::GetBackupRequest const& request)
      override;

  StatusOr<google::spanner::admin::database::v1::Backup> UpdateBackup(
      grpc::ClientContext& client_context,
      google::spanner::admin::database::v1::UpdateBackupRequest const& request)
      override;

  Status DeleteBackup(
      grpc::ClientContext& client_context,
      google::spanner::admin::database::v1::DeleteBackupRequest const& request)
      override;

  StatusOr<google::spanner::admin::database::v1::ListBackupsResponse>
  ListBackups(grpc::ClientContext& client_context,
              google::spanner::admin::database::v1::ListBackupsRequest const&
                  request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestoreDatabase(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&
          request) override;
  StatusOr<google::spanner::admin::database::v1::ListDatabaseOperationsResponse>
  ListDatabaseOperations(
      grpc::ClientContext& client_context,
      google::spanner::admin::database::v1::ListDatabaseOperationsRequest const&
          request) override;

  StatusOr<google::spanner::admin::database::v1::ListBackupOperationsResponse>
  ListBackupOperations(
      grpc::ClientContext& client_context,
      google::spanner::admin::database::v1::ListBackupOperationsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<
      google::spanner::admin::database::v1::DatabaseAdmin::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_DATABASE_ADMIN_STUB_H
