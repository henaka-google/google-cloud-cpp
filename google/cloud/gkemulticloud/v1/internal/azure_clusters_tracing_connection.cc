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
// source: google/cloud/gkemulticloud/v1/azure_service.proto

#include "google/cloud/gkemulticloud/v1/internal/azure_clusters_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AzureClustersTracingConnection::AzureClustersTracingConnection(
    std::shared_ptr<gkemulticloud_v1::AzureClustersConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureClient>>
AzureClustersTracingConnection::CreateAzureClient(
    google::cloud::gkemulticloud::v1::CreateAzureClientRequest const& request) {
  return child_->CreateAzureClient(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureClient>
AzureClustersTracingConnection::GetAzureClient(
    google::cloud::gkemulticloud::v1::GetAzureClientRequest const& request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AzureClustersConnection::GetAzureClient");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAzureClient(request));
}

StreamRange<google::cloud::gkemulticloud::v1::AzureClient>
AzureClustersTracingConnection::ListAzureClients(
    google::cloud::gkemulticloud::v1::ListAzureClientsRequest request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AzureClustersConnection::ListAzureClients");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListAzureClients(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::gkemulticloud::v1::AzureClient>(
      std::move(span), std::move(scope), std::move(sr));
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersTracingConnection::DeleteAzureClient(
    google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const& request) {
  return child_->DeleteAzureClient(request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
AzureClustersTracingConnection::CreateAzureCluster(
    google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&
        request) {
  return child_->CreateAzureCluster(request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
AzureClustersTracingConnection::UpdateAzureCluster(
    google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&
        request) {
  return child_->UpdateAzureCluster(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>
AzureClustersTracingConnection::GetAzureCluster(
    google::cloud::gkemulticloud::v1::GetAzureClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AzureClustersConnection::GetAzureCluster");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAzureCluster(request));
}

StreamRange<google::cloud::gkemulticloud::v1::AzureCluster>
AzureClustersTracingConnection::ListAzureClusters(
    google::cloud::gkemulticloud::v1::ListAzureClustersRequest request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AzureClustersConnection::ListAzureClusters");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListAzureClusters(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::gkemulticloud::v1::AzureCluster>(
      std::move(span), std::move(scope), std::move(sr));
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersTracingConnection::DeleteAzureCluster(
    google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&
        request) {
  return child_->DeleteAzureCluster(request);
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenResponse>
AzureClustersTracingConnection::GenerateAzureAccessToken(
    google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenRequest const&
        request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AzureClustersConnection::GenerateAzureAccessToken");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateAzureAccessToken(request));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
AzureClustersTracingConnection::CreateAzureNodePool(
    google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&
        request) {
  return child_->CreateAzureNodePool(request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
AzureClustersTracingConnection::UpdateAzureNodePool(
    google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&
        request) {
  return child_->UpdateAzureNodePool(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>
AzureClustersTracingConnection::GetAzureNodePool(
    google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const& request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AzureClustersConnection::GetAzureNodePool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAzureNodePool(request));
}

StreamRange<google::cloud::gkemulticloud::v1::AzureNodePool>
AzureClustersTracingConnection::ListAzureNodePools(
    google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AzureClustersConnection::ListAzureNodePools");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListAzureNodePools(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::gkemulticloud::v1::AzureNodePool>(
      std::move(span), std::move(scope), std::move(sr));
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersTracingConnection::DeleteAzureNodePool(
    google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&
        request) {
  return child_->DeleteAzureNodePool(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureServerConfig>
AzureClustersTracingConnection::GetAzureServerConfig(
    google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "gkemulticloud_v1::AzureClustersConnection::GetAzureServerConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAzureServerConfig(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google
