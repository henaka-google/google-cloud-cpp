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
// source: google/cloud/video/livestream/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_V1_LIVESTREAM_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_V1_LIVESTREAM_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/video/livestream/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace video_livestream_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LivestreamServiceConnectionIdempotencyPolicy {
 public:
  virtual ~LivestreamServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<LivestreamServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateChannel(
      google::cloud::video::livestream::v1::CreateChannelRequest const&
          request);

  virtual google::cloud::Idempotency ListChannels(
      google::cloud::video::livestream::v1::ListChannelsRequest request);

  virtual google::cloud::Idempotency GetChannel(
      google::cloud::video::livestream::v1::GetChannelRequest const& request);

  virtual google::cloud::Idempotency DeleteChannel(
      google::cloud::video::livestream::v1::DeleteChannelRequest const&
          request);

  virtual google::cloud::Idempotency UpdateChannel(
      google::cloud::video::livestream::v1::UpdateChannelRequest const&
          request);

  virtual google::cloud::Idempotency StartChannel(
      google::cloud::video::livestream::v1::StartChannelRequest const& request);

  virtual google::cloud::Idempotency StopChannel(
      google::cloud::video::livestream::v1::StopChannelRequest const& request);

  virtual google::cloud::Idempotency CreateInput(
      google::cloud::video::livestream::v1::CreateInputRequest const& request);

  virtual google::cloud::Idempotency ListInputs(
      google::cloud::video::livestream::v1::ListInputsRequest request);

  virtual google::cloud::Idempotency GetInput(
      google::cloud::video::livestream::v1::GetInputRequest const& request);

  virtual google::cloud::Idempotency DeleteInput(
      google::cloud::video::livestream::v1::DeleteInputRequest const& request);

  virtual google::cloud::Idempotency UpdateInput(
      google::cloud::video::livestream::v1::UpdateInputRequest const& request);

  virtual google::cloud::Idempotency CreateEvent(
      google::cloud::video::livestream::v1::CreateEventRequest const& request);

  virtual google::cloud::Idempotency ListEvents(
      google::cloud::video::livestream::v1::ListEventsRequest request);

  virtual google::cloud::Idempotency GetEvent(
      google::cloud::video::livestream::v1::GetEventRequest const& request);

  virtual google::cloud::Idempotency DeleteEvent(
      google::cloud::video::livestream::v1::DeleteEventRequest const& request);
};

std::unique_ptr<LivestreamServiceConnectionIdempotencyPolicy>
MakeDefaultLivestreamServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_livestream_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_V1_LIVESTREAM_CONNECTION_IDEMPOTENCY_POLICY_H
