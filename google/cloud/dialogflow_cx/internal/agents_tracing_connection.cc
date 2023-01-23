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
// source: google/cloud/dialogflow/cx/v3/agent.proto

#include "google/cloud/dialogflow_cx/internal/agents_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AgentsTracingConnection::AgentsTracingConnection(
    std::shared_ptr<dialogflow_cx::AgentsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::cx::v3::Agent>
AgentsTracingConnection::ListAgents(
    google::cloud::dialogflow::cx::v3::ListAgentsRequest request) {
  auto span = internal::MakeSpan("dialogflow_cx::AgentsConnection::ListAgents");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListAgents(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::cx::v3::Agent>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent>
AgentsTracingConnection::GetAgent(
    google::cloud::dialogflow::cx::v3::GetAgentRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_cx::AgentsConnection::GetAgent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAgent(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent>
AgentsTracingConnection::CreateAgent(
    google::cloud::dialogflow::cx::v3::CreateAgentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::AgentsConnection::CreateAgent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateAgent(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent>
AgentsTracingConnection::UpdateAgent(
    google::cloud::dialogflow::cx::v3::UpdateAgentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::AgentsConnection::UpdateAgent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateAgent(request));
}

Status AgentsTracingConnection::DeleteAgent(
    google::cloud::dialogflow::cx::v3::DeleteAgentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::AgentsConnection::DeleteAgent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteAgent(request));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ExportAgentResponse>>
AgentsTracingConnection::ExportAgent(
    google::cloud::dialogflow::cx::v3::ExportAgentRequest const& request) {
  return child_->ExportAgent(request);
}

future<StatusOr<google::protobuf::Struct>>
AgentsTracingConnection::RestoreAgent(
    google::cloud::dialogflow::cx::v3::RestoreAgentRequest const& request) {
  return child_->RestoreAgent(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
AgentsTracingConnection::ValidateAgent(
    google::cloud::dialogflow::cx::v3::ValidateAgentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::AgentsConnection::ValidateAgent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ValidateAgent(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
AgentsTracingConnection::GetAgentValidationResult(
    google::cloud::dialogflow::cx::v3::GetAgentValidationResultRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::AgentsConnection::GetAgentValidationResult");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAgentValidationResult(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
