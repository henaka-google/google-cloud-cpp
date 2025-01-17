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
// source: google/cloud/resourcemanager/v3/tag_keys.proto

#include "google/cloud/resourcemanager/v3/tag_keys_client.h"
#include "google/cloud/resourcemanager/v3/tag_keys_options.h"
#include <memory>
#include <thread>

namespace google {
namespace cloud {
namespace resourcemanager_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TagKeysClient::TagKeysClient(std::shared_ptr<TagKeysConnection> connection,
                             Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TagKeysClient::~TagKeysClient() = default;

StreamRange<google::cloud::resourcemanager::v3::TagKey>
TagKeysClient::ListTagKeys(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::ListTagKeysRequest request;
  request.set_parent(parent);
  return connection_->ListTagKeys(request);
}

StreamRange<google::cloud::resourcemanager::v3::TagKey>
TagKeysClient::ListTagKeys(
    google::cloud::resourcemanager::v3::ListTagKeysRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTagKeys(std::move(request));
}

StatusOr<google::cloud::resourcemanager::v3::TagKey> TagKeysClient::GetTagKey(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::GetTagKeyRequest request;
  request.set_name(name);
  return connection_->GetTagKey(request);
}

StatusOr<google::cloud::resourcemanager::v3::TagKey> TagKeysClient::GetTagKey(
    google::cloud::resourcemanager::v3::GetTagKeyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTagKey(request);
}

StatusOr<google::cloud::resourcemanager::v3::TagKey>
TagKeysClient::GetNamespacedTagKey(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::GetNamespacedTagKeyRequest request;
  request.set_name(name);
  return connection_->GetNamespacedTagKey(request);
}

StatusOr<google::cloud::resourcemanager::v3::TagKey>
TagKeysClient::GetNamespacedTagKey(
    google::cloud::resourcemanager::v3::GetNamespacedTagKeyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNamespacedTagKey(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::TagKey>>
TagKeysClient::CreateTagKey(
    google::cloud::resourcemanager::v3::TagKey const& tag_key, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::CreateTagKeyRequest request;
  *request.mutable_tag_key() = tag_key;
  return connection_->CreateTagKey(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::TagKey>>
TagKeysClient::CreateTagKey(
    google::cloud::resourcemanager::v3::CreateTagKeyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTagKey(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::TagKey>>
TagKeysClient::UpdateTagKey(
    google::cloud::resourcemanager::v3::TagKey const& tag_key,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::UpdateTagKeyRequest request;
  *request.mutable_tag_key() = tag_key;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateTagKey(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::TagKey>>
TagKeysClient::UpdateTagKey(
    google::cloud::resourcemanager::v3::UpdateTagKeyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateTagKey(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::TagKey>>
TagKeysClient::DeleteTagKey(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::DeleteTagKeyRequest request;
  request.set_name(name);
  return connection_->DeleteTagKey(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::TagKey>>
TagKeysClient::DeleteTagKey(
    google::cloud::resourcemanager::v3::DeleteTagKeyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTagKey(request);
}

StatusOr<google::iam::v1::Policy> TagKeysClient::GetIamPolicy(
    std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest request;
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> TagKeysClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> TagKeysClient::SetIamPolicy(
    std::string const& resource, google::iam::v1::Policy const& policy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::SetIamPolicyRequest request;
  request.set_resource(resource);
  *request.mutable_policy() = policy;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> TagKeysClient::SetIamPolicy(
    std::string const& resource, IamUpdater const& updater, Options opts) {
  internal::CheckExpectedOptions<TagKeysBackoffPolicyOption>(opts, __func__);
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest get_request;
  get_request.set_resource(resource);
  google::iam::v1::SetIamPolicyRequest set_request;
  set_request.set_resource(resource);
  auto backoff_policy =
      internal::CurrentOptions().get<TagKeysBackoffPolicyOption>();
  if (backoff_policy != nullptr) {
    backoff_policy = backoff_policy->clone();
  }
  for (;;) {
    auto recent = connection_->GetIamPolicy(get_request);
    if (!recent) {
      return recent.status();
    }
    auto policy = updater(*std::move(recent));
    if (!policy) {
      return Status(StatusCode::kCancelled, "updater did not yield a policy");
    }
    *set_request.mutable_policy() = *std::move(policy);
    auto result = connection_->SetIamPolicy(set_request);
    if (result || result.status().code() != StatusCode::kAborted ||
        backoff_policy == nullptr) {
      return result;
    }
    std::this_thread::sleep_for(backoff_policy->OnCompletion());
  }
}

StatusOr<google::iam::v1::Policy> TagKeysClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
TagKeysClient::TestIamPermissions(std::string const& resource,
                                  std::vector<std::string> const& permissions,
                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::TestIamPermissionsRequest request;
  request.set_resource(resource);
  *request.mutable_permissions() = {permissions.begin(), permissions.end()};
  return connection_->TestIamPermissions(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
TagKeysClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3
}  // namespace cloud
}  // namespace google
