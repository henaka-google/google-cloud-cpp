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
// source: google/cloud/retail/v2/control_service.proto

#include "google/cloud/retail/v2/internal/control_auth_decorator.h"
#include <google/cloud/retail/v2/control_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ControlServiceAuth::ControlServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ControlServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::retail::v2::Control> ControlServiceAuth::CreateControl(
    grpc::ClientContext& context,
    google::cloud::retail::v2::CreateControlRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateControl(context, request);
}

Status ControlServiceAuth::DeleteControl(
    grpc::ClientContext& context,
    google::cloud::retail::v2::DeleteControlRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteControl(context, request);
}

StatusOr<google::cloud::retail::v2::Control> ControlServiceAuth::UpdateControl(
    grpc::ClientContext& context,
    google::cloud::retail::v2::UpdateControlRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateControl(context, request);
}

StatusOr<google::cloud::retail::v2::Control> ControlServiceAuth::GetControl(
    grpc::ClientContext& context,
    google::cloud::retail::v2::GetControlRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetControl(context, request);
}

StatusOr<google::cloud::retail::v2::ListControlsResponse>
ControlServiceAuth::ListControls(
    grpc::ClientContext& context,
    google::cloud::retail::v2::ListControlsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListControls(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
