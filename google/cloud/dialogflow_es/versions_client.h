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
// source: google/cloud/dialogflow/v2/version.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_VERSIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_VERSIONS_CLIENT_H

#include "google/cloud/dialogflow_es/versions_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Versions][google.cloud.dialogflow.v2.Version].
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class VersionsClient {
 public:
  explicit VersionsClient(std::shared_ptr<VersionsConnection> connection,
                          Options opts = {});
  ~VersionsClient();

  ///@{
  /// @name Copy and move support
  VersionsClient(VersionsClient const&) = default;
  VersionsClient& operator=(VersionsClient const&) = default;
  VersionsClient(VersionsClient&&) = default;
  VersionsClient& operator=(VersionsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(VersionsClient const& a, VersionsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(VersionsClient const& a, VersionsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Returns the list of all versions of the specified agent.
  ///
  /// @param parent  Required. The agent to list all versions from.
  ///  Supported formats:
  ///  - `projects/<Project ID>/agent`
  ///  - `projects/<Project ID>/locations/<Location ID>/agent`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Version,google/cloud/dialogflow/v2/version.proto#L126}
  ///
  /// [google.cloud.dialogflow.v2.ListVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L173}
  /// [google.cloud.dialogflow.v2.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L126}
  ///
  StreamRange<google::cloud::dialogflow::v2::Version> ListVersions(
      std::string const& parent, Options opts = {});

  ///
  /// Returns the list of all versions of the specified agent.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::ListVersionsRequest,google/cloud/dialogflow/v2/version.proto#L173}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Version,google/cloud/dialogflow/v2/version.proto#L126}
  ///
  /// [google.cloud.dialogflow.v2.ListVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L173}
  /// [google.cloud.dialogflow.v2.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L126}
  ///
  StreamRange<google::cloud::dialogflow::v2::Version> ListVersions(
      google::cloud::dialogflow::v2::ListVersionsRequest request,
      Options opts = {});

  ///
  /// Retrieves the specified agent version.
  ///
  /// @param name  Required. The name of the version.
  ///  Supported formats:
  ///  - `projects/<Project ID>/agent/versions/<Version ID>`
  ///  - `projects/<Project ID>/locations/<Location ID>/agent/versions/<Version
  ///    ID>`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Version,google/cloud/dialogflow/v2/version.proto#L126}
  ///
  /// [google.cloud.dialogflow.v2.GetVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L206}
  /// [google.cloud.dialogflow.v2.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L126}
  ///
  StatusOr<google::cloud::dialogflow::v2::Version> GetVersion(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves the specified agent version.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::GetVersionRequest,google/cloud/dialogflow/v2/version.proto#L206}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Version,google/cloud/dialogflow/v2/version.proto#L126}
  ///
  /// [google.cloud.dialogflow.v2.GetVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L206}
  /// [google.cloud.dialogflow.v2.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L126}
  ///
  StatusOr<google::cloud::dialogflow::v2::Version> GetVersion(
      google::cloud::dialogflow::v2::GetVersionRequest const& request,
      Options opts = {});

  ///
  /// Creates an agent version.
  ///
  /// The new version points to the agent instance in the "default" environment.
  ///
  /// @param parent  Required. The agent to create a version for.
  ///  Supported formats:
  ///  - `projects/<Project ID>/agent`
  ///  - `projects/<Project ID>/locations/<Location ID>/agent`
  /// @param version  Required. The version to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Version,google/cloud/dialogflow/v2/version.proto#L126}
  ///
  /// [google.cloud.dialogflow.v2.CreateVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L222}
  /// [google.cloud.dialogflow.v2.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L126}
  ///
  StatusOr<google::cloud::dialogflow::v2::Version> CreateVersion(
      std::string const& parent,
      google::cloud::dialogflow::v2::Version const& version, Options opts = {});

  ///
  /// Creates an agent version.
  ///
  /// The new version points to the agent instance in the "default" environment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::CreateVersionRequest,google/cloud/dialogflow/v2/version.proto#L222}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Version,google/cloud/dialogflow/v2/version.proto#L126}
  ///
  /// [google.cloud.dialogflow.v2.CreateVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L222}
  /// [google.cloud.dialogflow.v2.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L126}
  ///
  StatusOr<google::cloud::dialogflow::v2::Version> CreateVersion(
      google::cloud::dialogflow::v2::CreateVersionRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified agent version.
  ///
  /// Note that this method does not allow you to update the state of the agent
  /// the given version points to. It allows you to update only mutable
  /// properties of the version resource.
  ///
  /// @param version  Required. The version to update.
  ///  Supported formats:
  ///  - `projects/<Project ID>/agent/versions/<Version ID>`
  ///  - `projects/<Project ID>/locations/<Location ID>/agent/versions/<Version
  ///    ID>`
  /// @param update_mask  Required. The mask to control which fields get
  /// updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Version,google/cloud/dialogflow/v2/version.proto#L126}
  ///
  /// [google.cloud.dialogflow.v2.UpdateVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L240}
  /// [google.cloud.dialogflow.v2.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L126}
  ///
  StatusOr<google::cloud::dialogflow::v2::Version> UpdateVersion(
      google::cloud::dialogflow::v2::Version const& version,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified agent version.
  ///
  /// Note that this method does not allow you to update the state of the agent
  /// the given version points to. It allows you to update only mutable
  /// properties of the version resource.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::UpdateVersionRequest,google/cloud/dialogflow/v2/version.proto#L240}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Version,google/cloud/dialogflow/v2/version.proto#L126}
  ///
  /// [google.cloud.dialogflow.v2.UpdateVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L240}
  /// [google.cloud.dialogflow.v2.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L126}
  ///
  StatusOr<google::cloud::dialogflow::v2::Version> UpdateVersion(
      google::cloud::dialogflow::v2::UpdateVersionRequest const& request,
      Options opts = {});

  ///
  /// Delete the specified agent version.
  ///
  /// @param name  Required. The name of the version to delete.
  ///  Supported formats:
  ///  - `projects/<Project ID>/agent/versions/<Version ID>`
  ///  - `projects/<Project ID>/locations/<Location ID>/agent/versions/<Version
  ///    ID>`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.v2.DeleteVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L254}
  ///
  Status DeleteVersion(std::string const& name, Options opts = {});

  ///
  /// Delete the specified agent version.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::DeleteVersionRequest,google/cloud/dialogflow/v2/version.proto#L254}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.v2.DeleteVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/version.proto#L254}
  ///
  Status DeleteVersion(
      google::cloud::dialogflow::v2::DeleteVersionRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<VersionsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_VERSIONS_CLIENT_H
