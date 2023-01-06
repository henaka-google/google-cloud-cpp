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
// source: google/cloud/filestore/v1/cloud_filestore_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_CLOUD_FILESTORE_MANAGER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_CLOUD_FILESTORE_MANAGER_CLIENT_H

#include "google/cloud/filestore/cloud_filestore_manager_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace filestore {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Configures and manages Cloud Filestore resources.
///
/// Cloud Filestore Manager v1.
///
/// The `file.googleapis.com` service implements the Cloud Filestore API and
/// defines the following resource model for managing instances:
/// * The service works with a collection of cloud projects, named:
/// `/projects/*`
/// * Each project has a collection of available locations, named:
/// `/locations/*`
/// * Each location has a collection of instances and backups, named:
/// `/instances/*` and `/backups/*` respectively.
/// * As such, Cloud Filestore instances are resources of the form:
///   `/projects/{project_number}/locations/{location_id}/instances/{instance_id}`
///   and backups are resources of the form:
///   `/projects/{project_number}/locations/{location_id}/backup/{backup_id}`
///
/// Note that location_id must be a GCP `zone` for instances and but to a GCP
/// `region` for backups; for example:
/// * `projects/12345/locations/us-central1-c/instances/my-filestore`
/// * `projects/12345/locations/us-central1/backups/my-backup`
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class CloudFilestoreManagerClient {
 public:
  explicit CloudFilestoreManagerClient(
      std::shared_ptr<CloudFilestoreManagerConnection> connection,
      Options opts = {});
  ~CloudFilestoreManagerClient();

  ///@{
  /// @name Copy and move support
  CloudFilestoreManagerClient(CloudFilestoreManagerClient const&) = default;
  CloudFilestoreManagerClient& operator=(CloudFilestoreManagerClient const&) =
      default;
  CloudFilestoreManagerClient(CloudFilestoreManagerClient&&) = default;
  CloudFilestoreManagerClient& operator=(CloudFilestoreManagerClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(CloudFilestoreManagerClient const& a,
                         CloudFilestoreManagerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(CloudFilestoreManagerClient const& a,
                         CloudFilestoreManagerClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists all instances in a project for either a specified location
  /// or for all locations.
  ///
  /// @param parent  Required. The project and location for which to retrieve
  /// instance
  ///  information, in the format `projects/{project_id}/locations/{location}`.
  ///  In Cloud Filestore, locations map to GCP zones, for example
  ///  **us-west1-b**. To retrieve instance information for all locations, use
  ///  "-" for the
  ///  `{location}` value.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Instance,google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  /// [google.cloud.filestore.v1.ListInstancesRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L494}
  /// [google.cloud.filestore.v1.Instance]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  StreamRange<google::cloud::filestore::v1::Instance> ListInstances(
      std::string const& parent, Options opts = {});

  ///
  /// Lists all instances in a project for either a specified location
  /// or for all locations.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::filestore::v1::ListInstancesRequest,google/cloud/filestore/v1/cloud_filestore_service.proto#L494}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Instance,google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  /// [google.cloud.filestore.v1.ListInstancesRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L494}
  /// [google.cloud.filestore.v1.Instance]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  StreamRange<google::cloud::filestore::v1::Instance> ListInstances(
      google::cloud::filestore::v1::ListInstancesRequest request,
      Options opts = {});

  ///
  /// Gets the details of a specific instance.
  ///
  /// @param name  Required. The instance resource name, in the format
  ///  `projects/{project_id}/locations/{location}/instances/{instance_id}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Instance,google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  /// [google.cloud.filestore.v1.GetInstanceRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L436}
  /// [google.cloud.filestore.v1.Instance]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  StatusOr<google::cloud::filestore::v1::Instance> GetInstance(
      std::string const& name, Options opts = {});

  ///
  /// Gets the details of a specific instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::filestore::v1::GetInstanceRequest,google/cloud/filestore/v1/cloud_filestore_service.proto#L436}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Instance,google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  /// [google.cloud.filestore.v1.GetInstanceRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L436}
  /// [google.cloud.filestore.v1.Instance]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  StatusOr<google::cloud::filestore::v1::Instance> GetInstance(
      google::cloud::filestore::v1::GetInstanceRequest const& request,
      Options opts = {});

  ///
  /// Creates an instance.
  /// When creating from a backup, the capacity of the new instance needs to be
  /// equal to or larger than the capacity of the backup (and also equal to or
  /// larger than the minimum capacity of the tier).
  ///
  /// @param parent  Required. The instance's project and location, in the
  /// format
  ///  `projects/{project_id}/locations/{location}`. In Cloud Filestore,
  ///  locations map to GCP zones, for example **us-west1-b**.
  /// @param instance  Required. An [instance
  /// resource][google.cloud.filestore.v1.Instance]
  /// @param instance_id  Required. The name of the instance to create.
  ///  The name must be unique for the specified project and location.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Instance,google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  /// [google.cloud.filestore.v1.CreateInstanceRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L416}
  /// [google.cloud.filestore.v1.Instance]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  future<StatusOr<google::cloud::filestore::v1::Instance>> CreateInstance(
      std::string const& parent,
      google::cloud::filestore::v1::Instance const& instance,
      std::string const& instance_id, Options opts = {});

  ///
  /// Creates an instance.
  /// When creating from a backup, the capacity of the new instance needs to be
  /// equal to or larger than the capacity of the backup (and also equal to or
  /// larger than the minimum capacity of the tier).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::filestore::v1::CreateInstanceRequest,google/cloud/filestore/v1/cloud_filestore_service.proto#L416}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Instance,google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  /// [google.cloud.filestore.v1.CreateInstanceRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L416}
  /// [google.cloud.filestore.v1.Instance]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  future<StatusOr<google::cloud::filestore::v1::Instance>> CreateInstance(
      google::cloud::filestore::v1::CreateInstanceRequest const& request,
      Options opts = {});

  ///
  /// Updates the settings of a specific instance.
  ///
  /// @param instance  Only fields specified in update_mask are updated.
  /// @param update_mask  Mask of fields to update.  At least one path must be
  /// supplied in this
  ///  field.  The elements of the repeated paths field may only include these
  ///  fields:
  ///  * "description"
  ///  * "file_shares"
  ///  * "labels"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Instance,google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  /// [google.cloud.filestore.v1.UpdateInstanceRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L446}
  /// [google.cloud.filestore.v1.Instance]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  future<StatusOr<google::cloud::filestore::v1::Instance>> UpdateInstance(
      google::cloud::filestore::v1::Instance const& instance,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the settings of a specific instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::filestore::v1::UpdateInstanceRequest,google/cloud/filestore/v1/cloud_filestore_service.proto#L446}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Instance,google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  /// [google.cloud.filestore.v1.UpdateInstanceRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L446}
  /// [google.cloud.filestore.v1.Instance]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  future<StatusOr<google::cloud::filestore::v1::Instance>> UpdateInstance(
      google::cloud::filestore::v1::UpdateInstanceRequest const& request,
      Options opts = {});

  ///
  /// Restores an existing instance's file share from a backup.
  ///
  /// The capacity of the instance needs to be equal to or larger than the
  /// capacity of the backup (and also equal to or larger than the minimum
  /// capacity of the tier).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::filestore::v1::RestoreInstanceRequest,google/cloud/filestore/v1/cloud_filestore_service.proto#L462}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Instance,google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  /// [google.cloud.filestore.v1.RestoreInstanceRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L462}
  /// [google.cloud.filestore.v1.Instance]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L315}
  ///
  future<StatusOr<google::cloud::filestore::v1::Instance>> RestoreInstance(
      google::cloud::filestore::v1::RestoreInstanceRequest const& request,
      Options opts = {});

  ///
  /// Deletes an instance.
  ///
  /// @param name  Required. The instance resource name, in the format
  ///  `projects/{project_id}/locations/{location}/instances/{instance_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::common::OperationMetadata,google/cloud/common/operation_metadata.proto#L27}
  ///
  /// [google.cloud.filestore.v1.DeleteInstanceRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L484}
  /// [google.cloud.common.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/common/operation_metadata.proto#L27}
  ///
  future<StatusOr<google::cloud::common::OperationMetadata>> DeleteInstance(
      std::string const& name, Options opts = {});

  ///
  /// Deletes an instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::filestore::v1::DeleteInstanceRequest,google/cloud/filestore/v1/cloud_filestore_service.proto#L484}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::common::OperationMetadata,google/cloud/common/operation_metadata.proto#L27}
  ///
  /// [google.cloud.filestore.v1.DeleteInstanceRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L484}
  /// [google.cloud.common.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/common/operation_metadata.proto#L27}
  ///
  future<StatusOr<google::cloud::common::OperationMetadata>> DeleteInstance(
      google::cloud::filestore::v1::DeleteInstanceRequest const& request,
      Options opts = {});

  ///
  /// Lists all backups in a project for either a specified location or for all
  /// locations.
  ///
  /// @param parent  Required. The project and location for which to retrieve
  /// backup
  ///  information, in the format
  ///  `projects/{project_number}/locations/{location}`. In Cloud Filestore,
  ///  backup locations map to GCP regions, for example **us-west1**. To
  ///  retrieve backup information for all locations, use "-" for the
  ///  `{location}` value.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Backup,google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  /// [google.cloud.filestore.v1.ListBackupsRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L673}
  /// [google.cloud.filestore.v1.Backup]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  StreamRange<google::cloud::filestore::v1::Backup> ListBackups(
      std::string const& parent, Options opts = {});

  ///
  /// Lists all backups in a project for either a specified location or for all
  /// locations.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::filestore::v1::ListBackupsRequest,google/cloud/filestore/v1/cloud_filestore_service.proto#L673}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Backup,google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  /// [google.cloud.filestore.v1.ListBackupsRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L673}
  /// [google.cloud.filestore.v1.Backup]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  StreamRange<google::cloud::filestore::v1::Backup> ListBackups(
      google::cloud::filestore::v1::ListBackupsRequest request,
      Options opts = {});

  ///
  /// Gets the details of a specific backup.
  ///
  /// @param name  Required. The backup resource name, in the format
  ///  `projects/{project_number}/locations/{location}/backups/{backup_id}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Backup,google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  /// [google.cloud.filestore.v1.GetBackupRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L663}
  /// [google.cloud.filestore.v1.Backup]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  StatusOr<google::cloud::filestore::v1::Backup> GetBackup(
      std::string const& name, Options opts = {});

  ///
  /// Gets the details of a specific backup.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::filestore::v1::GetBackupRequest,google/cloud/filestore/v1/cloud_filestore_service.proto#L663}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Backup,google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  /// [google.cloud.filestore.v1.GetBackupRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L663}
  /// [google.cloud.filestore.v1.Backup]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  StatusOr<google::cloud::filestore::v1::Backup> GetBackup(
      google::cloud::filestore::v1::GetBackupRequest const& request,
      Options opts = {});

  ///
  /// Creates a backup.
  ///
  /// @param parent  Required. The backup's project and location, in the format
  ///  `projects/{project_number}/locations/{location}`. In Cloud Filestore,
  ///  backup locations map to GCP regions, for example **us-west1**.
  /// @param backup  Required. A [backup
  /// resource][google.cloud.filestore.v1.Backup]
  /// @param backup_id  Required. The ID to use for the backup.
  ///  The ID must be unique within the specified project and location.
  ///  This value must start with a lowercase letter followed by up to 62
  ///  lowercase letters, numbers, or hyphens, and cannot end with a hyphen.
  ///  Values that do not match this pattern will trigger an INVALID_ARGUMENT
  ///  error.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Backup,google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  /// [google.cloud.filestore.v1.CreateBackupRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L617}
  /// [google.cloud.filestore.v1.Backup]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  future<StatusOr<google::cloud::filestore::v1::Backup>> CreateBackup(
      std::string const& parent,
      google::cloud::filestore::v1::Backup const& backup,
      std::string const& backup_id, Options opts = {});

  ///
  /// Creates a backup.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::filestore::v1::CreateBackupRequest,google/cloud/filestore/v1/cloud_filestore_service.proto#L617}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Backup,google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  /// [google.cloud.filestore.v1.CreateBackupRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L617}
  /// [google.cloud.filestore.v1.Backup]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  future<StatusOr<google::cloud::filestore::v1::Backup>> CreateBackup(
      google::cloud::filestore::v1::CreateBackupRequest const& request,
      Options opts = {});

  ///
  /// Deletes a backup.
  ///
  /// @param name  Required. The backup resource name, in the format
  ///  `projects/{project_number}/locations/{location}/backups/{backup_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::common::OperationMetadata,google/cloud/common/operation_metadata.proto#L27}
  ///
  /// [google.cloud.filestore.v1.DeleteBackupRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L642}
  /// [google.cloud.common.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/common/operation_metadata.proto#L27}
  ///
  future<StatusOr<google::cloud::common::OperationMetadata>> DeleteBackup(
      std::string const& name, Options opts = {});

  ///
  /// Deletes a backup.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::filestore::v1::DeleteBackupRequest,google/cloud/filestore/v1/cloud_filestore_service.proto#L642}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::common::OperationMetadata,google/cloud/common/operation_metadata.proto#L27}
  ///
  /// [google.cloud.filestore.v1.DeleteBackupRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L642}
  /// [google.cloud.common.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/common/operation_metadata.proto#L27}
  ///
  future<StatusOr<google::cloud::common::OperationMetadata>> DeleteBackup(
      google::cloud::filestore::v1::DeleteBackupRequest const& request,
      Options opts = {});

  ///
  /// Updates the settings of a specific backup.
  ///
  /// @param backup  Required. A [backup
  /// resource][google.cloud.filestore.v1.Backup]
  /// @param update_mask  Required. Mask of fields to update.  At least one path
  /// must be supplied in
  ///  this field.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Backup,google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  /// [google.cloud.filestore.v1.UpdateBackupRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L652}
  /// [google.cloud.filestore.v1.Backup]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  future<StatusOr<google::cloud::filestore::v1::Backup>> UpdateBackup(
      google::cloud::filestore::v1::Backup const& backup,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the settings of a specific backup.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::filestore::v1::UpdateBackupRequest,google/cloud/filestore/v1/cloud_filestore_service.proto#L652}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::filestore::v1::Backup,google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  /// [google.cloud.filestore.v1.UpdateBackupRequest]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L652}
  /// [google.cloud.filestore.v1.Backup]:
  /// @googleapis_reference_link{google/cloud/filestore/v1/cloud_filestore_service.proto#L540}
  ///
  future<StatusOr<google::cloud::filestore::v1::Backup>> UpdateBackup(
      google::cloud::filestore::v1::UpdateBackupRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<CloudFilestoreManagerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_CLOUD_FILESTORE_MANAGER_CLIENT_H
