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
// source: google/cloud/dataproc/v1/jobs.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_JOB_CONTROLLER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_JOB_CONTROLLER_CLIENT_H

#include "google/cloud/dataproc/job_controller_connection.h"
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
namespace dataproc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The JobController provides methods to manage jobs.
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
class JobControllerClient {
 public:
  explicit JobControllerClient(
      std::shared_ptr<JobControllerConnection> connection, Options opts = {});
  ~JobControllerClient();

  ///@{
  /// @name Copy and move support
  JobControllerClient(JobControllerClient const&) = default;
  JobControllerClient& operator=(JobControllerClient const&) = default;
  JobControllerClient(JobControllerClient&&) = default;
  JobControllerClient& operator=(JobControllerClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(JobControllerClient const& a,
                         JobControllerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(JobControllerClient const& a,
                         JobControllerClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Submits a job to a cluster.
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the job
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param job  Required. The job resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Job,google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  /// [google.cloud.dataproc.v1.SubmitJobRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L779}
  /// [google.cloud.dataproc.v1.Job]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  StatusOr<google::cloud::dataproc::v1::Job> SubmitJob(
      std::string const& project_id, std::string const& region,
      google::cloud::dataproc::v1::Job const& job, Options opts = {});

  ///
  /// Submits a job to a cluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::SubmitJobRequest,google/cloud/dataproc/v1/jobs.proto#L779}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Job,google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  /// [google.cloud.dataproc.v1.SubmitJobRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L779}
  /// [google.cloud.dataproc.v1.Job]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  StatusOr<google::cloud::dataproc::v1::Job> SubmitJob(
      google::cloud::dataproc::v1::SubmitJobRequest const& request,
      Options opts = {});

  ///
  /// Submits job to a cluster.
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the job
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param job  Required. The job resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Job,google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  /// [google.cloud.dataproc.v1.SubmitJobRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L779}
  /// [google.cloud.dataproc.v1.Job]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  future<StatusOr<google::cloud::dataproc::v1::Job>> SubmitJobAsOperation(
      std::string const& project_id, std::string const& region,
      google::cloud::dataproc::v1::Job const& job, Options opts = {});

  ///
  /// Submits job to a cluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::SubmitJobRequest,google/cloud/dataproc/v1/jobs.proto#L779}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Job,google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  /// [google.cloud.dataproc.v1.SubmitJobRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L779}
  /// [google.cloud.dataproc.v1.Job]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  future<StatusOr<google::cloud::dataproc::v1::Job>> SubmitJobAsOperation(
      google::cloud::dataproc::v1::SubmitJobRequest const& request,
      Options opts = {});

  ///
  /// Gets the resource representation for a job in a project.
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the job
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param job_id  Required. The job ID.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Job,google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  /// [google.cloud.dataproc.v1.GetJobRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L822}
  /// [google.cloud.dataproc.v1.Job]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  StatusOr<google::cloud::dataproc::v1::Job> GetJob(
      std::string const& project_id, std::string const& region,
      std::string const& job_id, Options opts = {});

  ///
  /// Gets the resource representation for a job in a project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::GetJobRequest,google/cloud/dataproc/v1/jobs.proto#L822}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Job,google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  /// [google.cloud.dataproc.v1.GetJobRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L822}
  /// [google.cloud.dataproc.v1.Job]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  StatusOr<google::cloud::dataproc::v1::Job> GetJob(
      google::cloud::dataproc::v1::GetJobRequest const& request,
      Options opts = {});

  ///
  /// Lists regions/{region}/jobs in a project.
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the job
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Job,google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  /// [google.cloud.dataproc.v1.ListJobsRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L835}
  /// [google.cloud.dataproc.v1.Job]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  StreamRange<google::cloud::dataproc::v1::Job> ListJobs(
      std::string const& project_id, std::string const& region,
      Options opts = {});

  ///
  /// Lists regions/{region}/jobs in a project.
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the job
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param filter  Optional. A filter constraining the jobs to list. Filters
  /// are
  ///  case-sensitive and have the following syntax:
  ///  [field = value] AND [field [= value]] ...
  ///  where **field** is `status.state` or `labels.[KEY]`, and `[KEY]` is a
  ///  label key. **value** can be `*` to match all values. `status.state` can
  ///  be either `ACTIVE` or `NON_ACTIVE`. Only the logical `AND` operator is
  ///  supported; space-separated items are treated as having an implicit `AND`
  ///  operator. Example filter: status.state = ACTIVE AND labels.env = staging
  ///  AND labels.starred = *
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Job,google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  /// [google.cloud.dataproc.v1.ListJobsRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L835}
  /// [google.cloud.dataproc.v1.Job]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  StreamRange<google::cloud::dataproc::v1::Job> ListJobs(
      std::string const& project_id, std::string const& region,
      std::string const& filter, Options opts = {});

  ///
  /// Lists regions/{region}/jobs in a project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::ListJobsRequest,google/cloud/dataproc/v1/jobs.proto#L835}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Job,google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  /// [google.cloud.dataproc.v1.ListJobsRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L835}
  /// [google.cloud.dataproc.v1.Job]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  StreamRange<google::cloud::dataproc::v1::Job> ListJobs(
      google::cloud::dataproc::v1::ListJobsRequest request, Options opts = {});

  ///
  /// Updates a job in a project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::UpdateJobRequest,google/cloud/dataproc/v1/jobs.proto#L892}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Job,google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  /// [google.cloud.dataproc.v1.UpdateJobRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L892}
  /// [google.cloud.dataproc.v1.Job]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  StatusOr<google::cloud::dataproc::v1::Job> UpdateJob(
      google::cloud::dataproc::v1::UpdateJobRequest const& request,
      Options opts = {});

  ///
  /// Starts a job cancellation request. To access the job resource
  /// after cancellation, call
  /// [regions/{region}/jobs.list](https://cloud.google.com/dataproc/docs/reference/rest/v1/projects.regions.jobs/list)
  /// or
  /// [regions/{region}/jobs.get](https://cloud.google.com/dataproc/docs/reference/rest/v1/projects.regions.jobs/get).
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the job
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param job_id  Required. The job ID.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Job,google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  /// [google.cloud.dataproc.v1.CancelJobRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L928}
  /// [google.cloud.dataproc.v1.Job]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  StatusOr<google::cloud::dataproc::v1::Job> CancelJob(
      std::string const& project_id, std::string const& region,
      std::string const& job_id, Options opts = {});

  ///
  /// Starts a job cancellation request. To access the job resource
  /// after cancellation, call
  /// [regions/{region}/jobs.list](https://cloud.google.com/dataproc/docs/reference/rest/v1/projects.regions.jobs/list)
  /// or
  /// [regions/{region}/jobs.get](https://cloud.google.com/dataproc/docs/reference/rest/v1/projects.regions.jobs/get).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::CancelJobRequest,google/cloud/dataproc/v1/jobs.proto#L928}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Job,google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  /// [google.cloud.dataproc.v1.CancelJobRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L928}
  /// [google.cloud.dataproc.v1.Job]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L647}
  ///
  StatusOr<google::cloud::dataproc::v1::Job> CancelJob(
      google::cloud::dataproc::v1::CancelJobRequest const& request,
      Options opts = {});

  ///
  /// Deletes the job from the project. If the job is active, the delete fails,
  /// and the response returns `FAILED_PRECONDITION`.
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the job
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param job_id  Required. The job ID.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dataproc.v1.DeleteJobRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L941}
  ///
  Status DeleteJob(std::string const& project_id, std::string const& region,
                   std::string const& job_id, Options opts = {});

  ///
  /// Deletes the job from the project. If the job is active, the delete fails,
  /// and the response returns `FAILED_PRECONDITION`.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::DeleteJobRequest,google/cloud/dataproc/v1/jobs.proto#L941}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dataproc.v1.DeleteJobRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/jobs.proto#L941}
  ///
  Status DeleteJob(google::cloud::dataproc::v1::DeleteJobRequest const& request,
                   Options opts = {});

 private:
  std::shared_ptr<JobControllerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_JOB_CONTROLLER_CLIENT_H
