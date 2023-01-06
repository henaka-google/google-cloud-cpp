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
// source: google/cloud/osconfig/v1/osconfig_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_OS_CONFIG_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_OS_CONFIG_CLIENT_H

#include "google/cloud/osconfig/os_config_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace osconfig {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// OS Config API
///
/// The OS Config service is a server-side component that you can use to
/// manage package installations and patch jobs for virtual machine instances.
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
class OsConfigServiceClient {
 public:
  explicit OsConfigServiceClient(
      std::shared_ptr<OsConfigServiceConnection> connection, Options opts = {});
  ~OsConfigServiceClient();

  ///@{
  /// @name Copy and move support
  OsConfigServiceClient(OsConfigServiceClient const&) = default;
  OsConfigServiceClient& operator=(OsConfigServiceClient const&) = default;
  OsConfigServiceClient(OsConfigServiceClient&&) = default;
  OsConfigServiceClient& operator=(OsConfigServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(OsConfigServiceClient const& a,
                         OsConfigServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(OsConfigServiceClient const& a,
                         OsConfigServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Patch VM instances by creating and running a patch job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::osconfig::v1::ExecutePatchJobRequest,google/cloud/osconfig/v1/patch_jobs.proto#L34}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchJob,google/cloud/osconfig/v1/patch_jobs.proto#L180}
  ///
  /// [google.cloud.osconfig.v1.ExecutePatchJobRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L34}
  /// [google.cloud.osconfig.v1.PatchJob]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L180}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchJob> ExecutePatchJob(
      google::cloud::osconfig::v1::ExecutePatchJobRequest const& request,
      Options opts = {});

  ///
  /// Get the patch job. This can be used to track the progress of an
  /// ongoing patch job or review the details of completed jobs.
  ///
  /// @param name  Required. Name of the patch in the form
  /// `projects/*/patchJobs/*`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchJob,google/cloud/osconfig/v1/patch_jobs.proto#L180}
  ///
  /// [google.cloud.osconfig.v1.GetPatchJobRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L72}
  /// [google.cloud.osconfig.v1.PatchJob]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L180}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchJob> GetPatchJob(
      std::string const& name, Options opts = {});

  ///
  /// Get the patch job. This can be used to track the progress of an
  /// ongoing patch job or review the details of completed jobs.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::osconfig::v1::GetPatchJobRequest,google/cloud/osconfig/v1/patch_jobs.proto#L72}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchJob,google/cloud/osconfig/v1/patch_jobs.proto#L180}
  ///
  /// [google.cloud.osconfig.v1.GetPatchJobRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L72}
  /// [google.cloud.osconfig.v1.PatchJob]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L180}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchJob> GetPatchJob(
      google::cloud::osconfig::v1::GetPatchJobRequest const& request,
      Options opts = {});

  ///
  /// Cancel a patch job. The patch job must be active. Canceled patch jobs
  /// cannot be restarted.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::osconfig::v1::CancelPatchJobRequest,google/cloud/osconfig/v1/patch_jobs.proto#L434}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchJob,google/cloud/osconfig/v1/patch_jobs.proto#L180}
  ///
  /// [google.cloud.osconfig.v1.CancelPatchJobRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L434}
  /// [google.cloud.osconfig.v1.PatchJob]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L180}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchJob> CancelPatchJob(
      google::cloud::osconfig::v1::CancelPatchJobRequest const& request,
      Options opts = {});

  ///
  /// Get a list of patch jobs.
  ///
  /// @param parent  Required. In the form of `projects/*`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchJob,google/cloud/osconfig/v1/patch_jobs.proto#L180}
  ///
  /// [google.cloud.osconfig.v1.ListPatchJobsRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L140}
  /// [google.cloud.osconfig.v1.PatchJob]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L180}
  ///
  StreamRange<google::cloud::osconfig::v1::PatchJob> ListPatchJobs(
      std::string const& parent, Options opts = {});

  ///
  /// Get a list of patch jobs.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::osconfig::v1::ListPatchJobsRequest,google/cloud/osconfig/v1/patch_jobs.proto#L140}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchJob,google/cloud/osconfig/v1/patch_jobs.proto#L180}
  ///
  /// [google.cloud.osconfig.v1.ListPatchJobsRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L140}
  /// [google.cloud.osconfig.v1.PatchJob]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L180}
  ///
  StreamRange<google::cloud::osconfig::v1::PatchJob> ListPatchJobs(
      google::cloud::osconfig::v1::ListPatchJobsRequest request,
      Options opts = {});

  ///
  /// Get a list of instance details for a given patch job.
  ///
  /// @param parent  Required. The parent for the instances are in the form of
  ///  `projects/*/patchJobs/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchJobInstanceDetails,google/cloud/osconfig/v1/patch_jobs.proto#L119}
  ///
  /// [google.cloud.osconfig.v1.ListPatchJobInstanceDetailsRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L83}
  /// [google.cloud.osconfig.v1.PatchJobInstanceDetails]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L119}
  ///
  StreamRange<google::cloud::osconfig::v1::PatchJobInstanceDetails>
  ListPatchJobInstanceDetails(std::string const& parent, Options opts = {});

  ///
  /// Get a list of instance details for a given patch job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest,google/cloud/osconfig/v1/patch_jobs.proto#L83}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchJobInstanceDetails,google/cloud/osconfig/v1/patch_jobs.proto#L119}
  ///
  /// [google.cloud.osconfig.v1.ListPatchJobInstanceDetailsRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L83}
  /// [google.cloud.osconfig.v1.PatchJobInstanceDetails]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_jobs.proto#L119}
  ///
  StreamRange<google::cloud::osconfig::v1::PatchJobInstanceDetails>
  ListPatchJobInstanceDetails(
      google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest request,
      Options opts = {});

  ///
  /// Create an OS Config patch deployment.
  ///
  /// @param parent  Required. The project to apply this patch deployment to in
  /// the form
  ///  `projects/*`.
  /// @param patch_deployment  Required. The patch deployment to create.
  /// @param patch_deployment_id  Required. A name for the patch deployment in
  /// the project. When creating a
  ///  name the following rules apply:
  ///  * Must contain only lowercase letters, numbers, and hyphens.
  ///  * Must start with a letter.
  ///  * Must be between 1-63 characters.
  ///  * Must end with a number or a letter.
  ///  * Must be unique within the project.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchDeployment,google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  /// [google.cloud.osconfig.v1.CreatePatchDeploymentRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L229}
  /// [google.cloud.osconfig.v1.PatchDeployment]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchDeployment> CreatePatchDeployment(
      std::string const& parent,
      google::cloud::osconfig::v1::PatchDeployment const& patch_deployment,
      std::string const& patch_deployment_id, Options opts = {});

  ///
  /// Create an OS Config patch deployment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::osconfig::v1::CreatePatchDeploymentRequest,google/cloud/osconfig/v1/patch_deployments.proto#L229}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchDeployment,google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  /// [google.cloud.osconfig.v1.CreatePatchDeploymentRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L229}
  /// [google.cloud.osconfig.v1.PatchDeployment]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchDeployment> CreatePatchDeployment(
      google::cloud::osconfig::v1::CreatePatchDeploymentRequest const& request,
      Options opts = {});

  ///
  /// Get an OS Config patch deployment.
  ///
  /// @param name  Required. The resource name of the patch deployment in the
  /// form
  ///  `projects/*/patchDeployments/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchDeployment,google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  /// [google.cloud.osconfig.v1.GetPatchDeploymentRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L253}
  /// [google.cloud.osconfig.v1.PatchDeployment]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchDeployment> GetPatchDeployment(
      std::string const& name, Options opts = {});

  ///
  /// Get an OS Config patch deployment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::osconfig::v1::GetPatchDeploymentRequest,google/cloud/osconfig/v1/patch_deployments.proto#L253}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchDeployment,google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  /// [google.cloud.osconfig.v1.GetPatchDeploymentRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L253}
  /// [google.cloud.osconfig.v1.PatchDeployment]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchDeployment> GetPatchDeployment(
      google::cloud::osconfig::v1::GetPatchDeploymentRequest const& request,
      Options opts = {});

  ///
  /// Get a page of OS Config patch deployments.
  ///
  /// @param parent  Required. The resource name of the parent in the form
  /// `projects/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchDeployment,google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  /// [google.cloud.osconfig.v1.ListPatchDeploymentsRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L265}
  /// [google.cloud.osconfig.v1.PatchDeployment]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  StreamRange<google::cloud::osconfig::v1::PatchDeployment>
  ListPatchDeployments(std::string const& parent, Options opts = {});

  ///
  /// Get a page of OS Config patch deployments.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::osconfig::v1::ListPatchDeploymentsRequest,google/cloud/osconfig/v1/patch_deployments.proto#L265}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchDeployment,google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  /// [google.cloud.osconfig.v1.ListPatchDeploymentsRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L265}
  /// [google.cloud.osconfig.v1.PatchDeployment]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  StreamRange<google::cloud::osconfig::v1::PatchDeployment>
  ListPatchDeployments(
      google::cloud::osconfig::v1::ListPatchDeploymentsRequest request,
      Options opts = {});

  ///
  /// Delete an OS Config patch deployment.
  ///
  /// @param name  Required. The resource name of the patch deployment in the
  /// form
  ///  `projects/*/patchDeployments/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.osconfig.v1.DeletePatchDeploymentRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L295}
  ///
  Status DeletePatchDeployment(std::string const& name, Options opts = {});

  ///
  /// Delete an OS Config patch deployment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::osconfig::v1::DeletePatchDeploymentRequest,google/cloud/osconfig/v1/patch_deployments.proto#L295}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.osconfig.v1.DeletePatchDeploymentRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L295}
  ///
  Status DeletePatchDeployment(
      google::cloud::osconfig::v1::DeletePatchDeploymentRequest const& request,
      Options opts = {});

  ///
  /// Update an OS Config patch deployment.
  ///
  /// @param patch_deployment  Required. The patch deployment to Update.
  /// @param update_mask  Optional. Field mask that controls which fields of the
  /// patch deployment
  ///  should be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchDeployment,google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  /// [google.cloud.osconfig.v1.UpdatePatchDeploymentRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L307}
  /// [google.cloud.osconfig.v1.PatchDeployment]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchDeployment> UpdatePatchDeployment(
      google::cloud::osconfig::v1::PatchDeployment const& patch_deployment,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Update an OS Config patch deployment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::osconfig::v1::UpdatePatchDeploymentRequest,google/cloud/osconfig/v1/patch_deployments.proto#L307}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchDeployment,google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  /// [google.cloud.osconfig.v1.UpdatePatchDeploymentRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L307}
  /// [google.cloud.osconfig.v1.PatchDeployment]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchDeployment> UpdatePatchDeployment(
      google::cloud::osconfig::v1::UpdatePatchDeploymentRequest const& request,
      Options opts = {});

  ///
  /// Change state of patch deployment to "PAUSED".
  /// Patch deployment in paused state doesn't generate patch jobs.
  ///
  /// @param name  Required. The resource name of the patch deployment in the
  /// form
  ///  `projects/*/patchDeployments/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchDeployment,google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  /// [google.cloud.osconfig.v1.PausePatchDeploymentRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L318}
  /// [google.cloud.osconfig.v1.PatchDeployment]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchDeployment> PausePatchDeployment(
      std::string const& name, Options opts = {});

  ///
  /// Change state of patch deployment to "PAUSED".
  /// Patch deployment in paused state doesn't generate patch jobs.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::osconfig::v1::PausePatchDeploymentRequest,google/cloud/osconfig/v1/patch_deployments.proto#L318}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchDeployment,google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  /// [google.cloud.osconfig.v1.PausePatchDeploymentRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L318}
  /// [google.cloud.osconfig.v1.PatchDeployment]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchDeployment> PausePatchDeployment(
      google::cloud::osconfig::v1::PausePatchDeploymentRequest const& request,
      Options opts = {});

  ///
  /// Change state of patch deployment back to "ACTIVE".
  /// Patch deployment in active state continues to generate patch jobs.
  ///
  /// @param name  Required. The resource name of the patch deployment in the
  /// form
  ///  `projects/*/patchDeployments/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchDeployment,google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  /// [google.cloud.osconfig.v1.ResumePatchDeploymentRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L330}
  /// [google.cloud.osconfig.v1.PatchDeployment]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchDeployment> ResumePatchDeployment(
      std::string const& name, Options opts = {});

  ///
  /// Change state of patch deployment back to "ACTIVE".
  /// Patch deployment in active state continues to generate patch jobs.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::osconfig::v1::ResumePatchDeploymentRequest,google/cloud/osconfig/v1/patch_deployments.proto#L330}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::osconfig::v1::PatchDeployment,google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  /// [google.cloud.osconfig.v1.ResumePatchDeploymentRequest]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L330}
  /// [google.cloud.osconfig.v1.PatchDeployment]:
  /// @googleapis_reference_link{google/cloud/osconfig/v1/patch_deployments.proto#L41}
  ///
  StatusOr<google::cloud::osconfig::v1::PatchDeployment> ResumePatchDeployment(
      google::cloud::osconfig::v1::ResumePatchDeploymentRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<OsConfigServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_OS_CONFIG_CLIENT_H
