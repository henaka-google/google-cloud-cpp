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
// source: google/cloud/talent/v4/job_service.proto

#include "google/cloud/talent/internal/job_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

JobServiceTracingConnection::JobServiceTracingConnection(
    std::shared_ptr<talent::JobServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::talent::v4::Job> JobServiceTracingConnection::CreateJob(
    google::cloud::talent::v4::CreateJobRequest const& request) {
  auto span = internal::MakeSpan("talent::JobServiceConnection::CreateJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateJob(request));
}

future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
JobServiceTracingConnection::BatchCreateJobs(
    google::cloud::talent::v4::BatchCreateJobsRequest const& request) {
  return child_->BatchCreateJobs(request);
}

StatusOr<google::cloud::talent::v4::Job> JobServiceTracingConnection::GetJob(
    google::cloud::talent::v4::GetJobRequest const& request) {
  auto span = internal::MakeSpan("talent::JobServiceConnection::GetJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetJob(request));
}

StatusOr<google::cloud::talent::v4::Job> JobServiceTracingConnection::UpdateJob(
    google::cloud::talent::v4::UpdateJobRequest const& request) {
  auto span = internal::MakeSpan("talent::JobServiceConnection::UpdateJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateJob(request));
}

future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
JobServiceTracingConnection::BatchUpdateJobs(
    google::cloud::talent::v4::BatchUpdateJobsRequest const& request) {
  return child_->BatchUpdateJobs(request);
}

Status JobServiceTracingConnection::DeleteJob(
    google::cloud::talent::v4::DeleteJobRequest const& request) {
  auto span = internal::MakeSpan("talent::JobServiceConnection::DeleteJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteJob(request));
}

future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
JobServiceTracingConnection::BatchDeleteJobs(
    google::cloud::talent::v4::BatchDeleteJobsRequest const& request) {
  return child_->BatchDeleteJobs(request);
}

StreamRange<google::cloud::talent::v4::Job>
JobServiceTracingConnection::ListJobs(
    google::cloud::talent::v4::ListJobsRequest request) {
  auto span = internal::MakeSpan("talent::JobServiceConnection::ListJobs");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListJobs(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::talent::v4::Job>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
JobServiceTracingConnection::SearchJobs(
    google::cloud::talent::v4::SearchJobsRequest const& request) {
  auto span = internal::MakeSpan("talent::JobServiceConnection::SearchJobs");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SearchJobs(request));
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
JobServiceTracingConnection::SearchJobsForAlert(
    google::cloud::talent::v4::SearchJobsRequest const& request) {
  auto span =
      internal::MakeSpan("talent::JobServiceConnection::SearchJobsForAlert");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SearchJobsForAlert(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_internal
}  // namespace cloud
}  // namespace google
