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
// source: google/cloud/dialogflow/v2/conversation.proto

#include "google/cloud/dialogflow_es/internal/conversations_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConversationsTracingConnection::ConversationsTracingConnection(
    std::shared_ptr<dialogflow_es::ConversationsConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsTracingConnection::CreateConversation(
    google::cloud::dialogflow::v2::CreateConversationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationsConnection::CreateConversation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateConversation(request));
}

StreamRange<google::cloud::dialogflow::v2::Conversation>
ConversationsTracingConnection::ListConversations(
    google::cloud::dialogflow::v2::ListConversationsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationsConnection::ListConversations");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListConversations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::v2::Conversation>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsTracingConnection::GetConversation(
    google::cloud::dialogflow::v2::GetConversationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationsConnection::GetConversation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConversation(request));
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsTracingConnection::CompleteConversation(
    google::cloud::dialogflow::v2::CompleteConversationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationsConnection::CompleteConversation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CompleteConversation(request));
}

StreamRange<google::cloud::dialogflow::v2::Message>
ConversationsTracingConnection::ListMessages(
    google::cloud::dialogflow::v2::ListMessagesRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationsConnection::ListMessages");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListMessages(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::v2::Message>(std::move(span), std::move(scope),
                                              std::move(sr));
}

StatusOr<google::cloud::dialogflow::v2::SuggestConversationSummaryResponse>
ConversationsTracingConnection::SuggestConversationSummary(
    google::cloud::dialogflow::v2::SuggestConversationSummaryRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationsConnection::SuggestConversationSummary");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SuggestConversationSummary(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
