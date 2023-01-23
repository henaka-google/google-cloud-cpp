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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#include "google/cloud/tpu/internal/tpu_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace tpu_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TpuTracingConnection::TpuTracingConnection(
    std::shared_ptr<tpu::TpuConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::tpu::v1::Node> TpuTracingConnection::ListNodes(
    google::cloud::tpu::v1::ListNodesRequest request) {
  auto span = internal::MakeSpan("tpu::TpuConnection::ListNodes");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListNodes(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::tpu::v1::Node>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::tpu::v1::Node> TpuTracingConnection::GetNode(
    google::cloud::tpu::v1::GetNodeRequest const& request) {
  auto span = internal::MakeSpan("tpu::TpuConnection::GetNode");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNode(request));
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuTracingConnection::CreateNode(
    google::cloud::tpu::v1::CreateNodeRequest const& request) {
  return child_->CreateNode(request);
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuTracingConnection::DeleteNode(
    google::cloud::tpu::v1::DeleteNodeRequest const& request) {
  return child_->DeleteNode(request);
}

future<StatusOr<google::cloud::tpu::v1::Node>>
TpuTracingConnection::ReimageNode(
    google::cloud::tpu::v1::ReimageNodeRequest const& request) {
  return child_->ReimageNode(request);
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuTracingConnection::StopNode(
    google::cloud::tpu::v1::StopNodeRequest const& request) {
  return child_->StopNode(request);
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuTracingConnection::StartNode(
    google::cloud::tpu::v1::StartNodeRequest const& request) {
  return child_->StartNode(request);
}

StreamRange<google::cloud::tpu::v1::TensorFlowVersion>
TpuTracingConnection::ListTensorFlowVersions(
    google::cloud::tpu::v1::ListTensorFlowVersionsRequest request) {
  auto span = internal::MakeSpan("tpu::TpuConnection::ListTensorFlowVersions");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListTensorFlowVersions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::tpu::v1::TensorFlowVersion>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::tpu::v1::TensorFlowVersion>
TpuTracingConnection::GetTensorFlowVersion(
    google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request) {
  auto span = internal::MakeSpan("tpu::TpuConnection::GetTensorFlowVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTensorFlowVersion(request));
}

StreamRange<google::cloud::tpu::v1::AcceleratorType>
TpuTracingConnection::ListAcceleratorTypes(
    google::cloud::tpu::v1::ListAcceleratorTypesRequest request) {
  auto span = internal::MakeSpan("tpu::TpuConnection::ListAcceleratorTypes");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListAcceleratorTypes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::tpu::v1::AcceleratorType>(std::move(span),
                                               std::move(scope), std::move(sr));
}

StatusOr<google::cloud::tpu::v1::AcceleratorType>
TpuTracingConnection::GetAcceleratorType(
    google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request) {
  auto span = internal::MakeSpan("tpu::TpuConnection::GetAcceleratorType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAcceleratorType(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_internal
}  // namespace cloud
}  // namespace google
