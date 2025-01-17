// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_INTERNAL_TRACING_MESSAGE_BATCH_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_INTERNAL_TRACING_MESSAGE_BATCH_H

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

#include "google/cloud/pubsub/internal/message_batch.h"
#include "google/cloud/pubsub/internal/publisher_stub.h"
#include "google/cloud/pubsub/version.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TracingMessageBatchPeer;

/**
 * Records spans related to a batch messages across calls and
 * callbacks in the `BatchingPublisherConnection`.
 */
class TracingMessageBatch : public MessageBatch {
 public:
  explicit TracingMessageBatch(std::unique_ptr<MessageBatch> child)
      : child_(std::move(child)) {}
  // For testing only.
  TracingMessageBatch(
      std::unique_ptr<MessageBatch> child,
      std::vector<opentelemetry::nostd::shared_ptr<opentelemetry::trace::Span>>
          message_spans)
      : child_(std::move(child)), message_spans_(std::move(message_spans)) {}
  // For testing only.
  TracingMessageBatch(
      std::unique_ptr<MessageBatch> child,
      std::vector<opentelemetry::nostd::shared_ptr<opentelemetry::trace::Span>>
          message_spans,
      std::vector<opentelemetry::nostd::shared_ptr<opentelemetry::trace::Span>>
          batch_sink_spans)
      : child_(std::move(child)),
        message_spans_(std::move(message_spans)),
        batch_sink_spans_(std::move(batch_sink_spans)) {}
  ~TracingMessageBatch() override = default;

  void SaveMessage(pubsub::Message m) override;

  void Flush() override;

  void FlushCallback() override;

  // For testing only.
  std::vector<opentelemetry::nostd::shared_ptr<opentelemetry::trace::Span>>
  GetSpans() const;

  // For testing only.
  std::vector<opentelemetry::nostd::shared_ptr<opentelemetry::trace::Span>>
  GetBatchSinkSpans() const;

 private:
  std::unique_ptr<MessageBatch> child_;
  std::vector<opentelemetry::nostd::shared_ptr<opentelemetry::trace::Span>>
      message_spans_;
  std::vector<opentelemetry::nostd::shared_ptr<opentelemetry::trace::Span>>
      batch_sink_spans_;
  std::mutex mu_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_INTERNAL_TRACING_MESSAGE_BATCH_H
