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
// source: google/cloud/dialogflow/v2/participant.proto

#include "google/cloud/dialogflow_es/internal/participants_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ParticipantsTracingConnection::ParticipantsTracingConnection(
    std::shared_ptr<dialogflow_es::ParticipantsConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsTracingConnection::CreateParticipant(
    google::cloud::dialogflow::v2::CreateParticipantRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ParticipantsConnection::CreateParticipant");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateParticipant(request));
}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsTracingConnection::GetParticipant(
    google::cloud::dialogflow::v2::GetParticipantRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ParticipantsConnection::GetParticipant");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetParticipant(request));
}

StreamRange<google::cloud::dialogflow::v2::Participant>
ParticipantsTracingConnection::ListParticipants(
    google::cloud::dialogflow::v2::ListParticipantsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ParticipantsConnection::ListParticipants");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListParticipants(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::v2::Participant>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsTracingConnection::UpdateParticipant(
    google::cloud::dialogflow::v2::UpdateParticipantRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ParticipantsConnection::UpdateParticipant");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateParticipant(request));
}

StatusOr<google::cloud::dialogflow::v2::AnalyzeContentResponse>
ParticipantsTracingConnection::AnalyzeContent(
    google::cloud::dialogflow::v2::AnalyzeContentRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ParticipantsConnection::AnalyzeContent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AnalyzeContent(request));
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::dialogflow::v2::StreamingAnalyzeContentRequest,
    google::cloud::dialogflow::v2::StreamingAnalyzeContentResponse>>
ParticipantsTracingConnection::AsyncStreamingAnalyzeContent() {
  return child_->AsyncStreamingAnalyzeContent();
}

StatusOr<google::cloud::dialogflow::v2::SuggestArticlesResponse>
ParticipantsTracingConnection::SuggestArticles(
    google::cloud::dialogflow::v2::SuggestArticlesRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ParticipantsConnection::SuggestArticles");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SuggestArticles(request));
}

StatusOr<google::cloud::dialogflow::v2::SuggestFaqAnswersResponse>
ParticipantsTracingConnection::SuggestFaqAnswers(
    google::cloud::dialogflow::v2::SuggestFaqAnswersRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ParticipantsConnection::SuggestFaqAnswers");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SuggestFaqAnswers(request));
}

StatusOr<google::cloud::dialogflow::v2::SuggestSmartRepliesResponse>
ParticipantsTracingConnection::SuggestSmartReplies(
    google::cloud::dialogflow::v2::SuggestSmartRepliesRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ParticipantsConnection::SuggestSmartReplies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SuggestSmartReplies(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
