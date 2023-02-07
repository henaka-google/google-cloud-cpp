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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/internal/instance_admin_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/spanner/admin/instance/v1/spanner_instance_admin.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceAdminLogging::InstanceAdminLogging(
    std::shared_ptr<InstanceAdminStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::spanner::admin::instance::v1::ListInstanceConfigsResponse>
InstanceAdminLogging::ListInstanceConfigs(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::ListInstanceConfigsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::spanner::admin::instance::v1::
                 ListInstanceConfigsRequest const& request) {
        return child_->ListInstanceConfigs(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminLogging::GetInstanceConfig(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
              request) { return child_->GetInstanceConfig(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminLogging::AsyncCreateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::spanner::admin::instance::v1::
                 CreateInstanceConfigRequest const& request) {
        return child_->AsyncCreateInstanceConfig(cq, std::move(context),
                                                 request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminLogging::AsyncUpdateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::spanner::admin::instance::v1::
                 UpdateInstanceConfigRequest const& request) {
        return child_->AsyncUpdateInstanceConfig(cq, std::move(context),
                                                 request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

Status InstanceAdminLogging::DeleteInstanceConfig(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::spanner::admin::instance::v1::
                 DeleteInstanceConfigRequest const& request) {
        return child_->DeleteInstanceConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<
    google::spanner::admin::instance::v1::ListInstanceConfigOperationsResponse>
InstanceAdminLogging::ListInstanceConfigOperations(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::
        ListInstanceConfigOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::spanner::admin::instance::v1::
                 ListInstanceConfigOperationsRequest const& request) {
        return child_->ListInstanceConfigOperations(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::spanner::admin::instance::v1::ListInstancesResponse>
InstanceAdminLogging::ListInstances(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::ListInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::spanner::admin::instance::v1::ListInstancesRequest const&
                 request) { return child_->ListInstances(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::spanner::admin::instance::v1::Instance>
InstanceAdminLogging::GetInstance(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::GetInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::spanner::admin::instance::v1::GetInstanceRequest const&
                 request) { return child_->GetInstance(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminLogging::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::spanner::admin::instance::v1::CreateInstanceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::spanner::admin::instance::v1::CreateInstanceRequest const&
                 request) {
        return child_->AsyncCreateInstance(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminLogging::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::spanner::admin::instance::v1::UpdateInstanceRequest const&
                 request) {
        return child_->AsyncUpdateInstance(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

Status InstanceAdminLogging::DeleteInstance(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::DeleteInstanceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::spanner::admin::instance::v1::DeleteInstanceRequest const&
                 request) { return child_->DeleteInstance(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> InstanceAdminLogging::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> InstanceAdminLogging::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
InstanceAdminLogging::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> InstanceAdminLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
