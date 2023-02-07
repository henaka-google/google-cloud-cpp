// Copyright 2020 Google LLC
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
// source: google/iam/credentials/v1/iamcredentials.proto

#include "google/cloud/iam/iam_credentials_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

IAMCredentialsConnectionIdempotencyPolicy::
    ~IAMCredentialsConnectionIdempotencyPolicy() = default;

std::unique_ptr<IAMCredentialsConnectionIdempotencyPolicy>
IAMCredentialsConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<IAMCredentialsConnectionIdempotencyPolicy>(*this);
}

Idempotency IAMCredentialsConnectionIdempotencyPolicy::GenerateAccessToken(
    google::iam::credentials::v1::GenerateAccessTokenRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMCredentialsConnectionIdempotencyPolicy::GenerateIdToken(
    google::iam::credentials::v1::GenerateIdTokenRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMCredentialsConnectionIdempotencyPolicy::SignBlob(
    google::iam::credentials::v1::SignBlobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMCredentialsConnectionIdempotencyPolicy::SignJwt(
    google::iam::credentials::v1::SignJwtRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<IAMCredentialsConnectionIdempotencyPolicy>
MakeDefaultIAMCredentialsConnectionIdempotencyPolicy() {
  return absl::make_unique<IAMCredentialsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam
}  // namespace cloud
}  // namespace google
