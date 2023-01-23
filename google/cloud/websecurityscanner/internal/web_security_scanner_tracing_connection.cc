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
// source: google/cloud/websecurityscanner/v1/web_security_scanner.proto

#include "google/cloud/websecurityscanner/internal/web_security_scanner_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace websecurityscanner_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WebSecurityScannerTracingConnection::WebSecurityScannerTracingConnection(
    std::shared_ptr<websecurityscanner::WebSecurityScannerConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerTracingConnection::CreateScanConfig(
    google::cloud::websecurityscanner::v1::CreateScanConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::CreateScanConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateScanConfig(request));
}

Status WebSecurityScannerTracingConnection::DeleteScanConfig(
    google::cloud::websecurityscanner::v1::DeleteScanConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::DeleteScanConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteScanConfig(request));
}

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerTracingConnection::GetScanConfig(
    google::cloud::websecurityscanner::v1::GetScanConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::GetScanConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetScanConfig(request));
}

StreamRange<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerTracingConnection::ListScanConfigs(
    google::cloud::websecurityscanner::v1::ListScanConfigsRequest request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::ListScanConfigs");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListScanConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::websecurityscanner::v1::ScanConfig>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerTracingConnection::UpdateScanConfig(
    google::cloud::websecurityscanner::v1::UpdateScanConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::UpdateScanConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateScanConfig(request));
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerTracingConnection::StartScanRun(
    google::cloud::websecurityscanner::v1::StartScanRunRequest const& request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::StartScanRun");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->StartScanRun(request));
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerTracingConnection::GetScanRun(
    google::cloud::websecurityscanner::v1::GetScanRunRequest const& request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::GetScanRun");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetScanRun(request));
}

StreamRange<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerTracingConnection::ListScanRuns(
    google::cloud::websecurityscanner::v1::ListScanRunsRequest request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::ListScanRuns");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListScanRuns(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::websecurityscanner::v1::ScanRun>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerTracingConnection::StopScanRun(
    google::cloud::websecurityscanner::v1::StopScanRunRequest const& request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::StopScanRun");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->StopScanRun(request));
}

StreamRange<google::cloud::websecurityscanner::v1::CrawledUrl>
WebSecurityScannerTracingConnection::ListCrawledUrls(
    google::cloud::websecurityscanner::v1::ListCrawledUrlsRequest request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::ListCrawledUrls");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListCrawledUrls(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::websecurityscanner::v1::CrawledUrl>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::websecurityscanner::v1::Finding>
WebSecurityScannerTracingConnection::GetFinding(
    google::cloud::websecurityscanner::v1::GetFindingRequest const& request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::GetFinding");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFinding(request));
}

StreamRange<google::cloud::websecurityscanner::v1::Finding>
WebSecurityScannerTracingConnection::ListFindings(
    google::cloud::websecurityscanner::v1::ListFindingsRequest request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::ListFindings");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListFindings(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::websecurityscanner::v1::Finding>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::websecurityscanner::v1::ListFindingTypeStatsResponse>
WebSecurityScannerTracingConnection::ListFindingTypeStats(
    google::cloud::websecurityscanner::v1::ListFindingTypeStatsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "websecurityscanner::WebSecurityScannerConnection::ListFindingTypeStats");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListFindingTypeStats(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace websecurityscanner_internal
}  // namespace cloud
}  // namespace google
