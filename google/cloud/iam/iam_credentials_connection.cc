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

#include "google/cloud/iam/iam_credentials_connection.h"
#include "google/cloud/iam/iam_credentials_options.h"
#include "google/cloud/iam/internal/iam_credentials_connection_impl.h"
#include "google/cloud/iam/internal/iam_credentials_option_defaults.h"
#include "google/cloud/iam/internal/iam_credentials_stub_factory.h"
#include "google/cloud/iam/internal/iam_credentials_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IAMCredentialsConnection::~IAMCredentialsConnection() = default;

StatusOr<google::iam::credentials::v1::GenerateAccessTokenResponse>
IAMCredentialsConnection::GenerateAccessToken(
    google::iam::credentials::v1::GenerateAccessTokenRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::credentials::v1::GenerateIdTokenResponse>
IAMCredentialsConnection::GenerateIdToken(
    google::iam::credentials::v1::GenerateIdTokenRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::credentials::v1::SignBlobResponse>
IAMCredentialsConnection::SignBlob(
    google::iam::credentials::v1::SignBlobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::credentials::v1::SignJwtResponse>
IAMCredentialsConnection::SignJwt(
    google::iam::credentials::v1::SignJwtRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<IAMCredentialsConnection> MakeIAMCredentialsConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 IAMCredentialsPolicyOptionList>(options,
                                                                 __func__);
  options = iam_internal::IAMCredentialsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      iam_internal::CreateDefaultIAMCredentialsStub(background->cq(), options);
  return iam_internal::MakeIAMCredentialsTracingConnection(
      std::make_shared<iam_internal::IAMCredentialsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam
}  // namespace cloud
}  // namespace google
