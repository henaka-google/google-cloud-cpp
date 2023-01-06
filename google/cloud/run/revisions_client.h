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
// source: google/cloud/run/v2/revision.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_REVISIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_REVISIONS_CLIENT_H

#include "google/cloud/run/revisions_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace run {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Cloud Run Revision Control Plane API.
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
class RevisionsClient {
 public:
  explicit RevisionsClient(std::shared_ptr<RevisionsConnection> connection,
                           Options opts = {});
  ~RevisionsClient();

  ///@{
  /// @name Copy and move support
  RevisionsClient(RevisionsClient const&) = default;
  RevisionsClient& operator=(RevisionsClient const&) = default;
  RevisionsClient(RevisionsClient&&) = default;
  RevisionsClient& operator=(RevisionsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RevisionsClient const& a, RevisionsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RevisionsClient const& a, RevisionsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Gets information about a Revision.
  ///
  /// @param name  Required. The full name of the Revision.
  ///  Format:
  ///  projects/{project}/locations/{location}/services/{service}/revisions/{revision}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Revision,google/cloud/run/v2/revision.proto#L162}
  ///
  /// [google.cloud.run.v2.GetRevisionRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/revision.proto#L90}
  /// [google.cloud.run.v2.Revision]:
  /// @googleapis_reference_link{google/cloud/run/v2/revision.proto#L162}
  ///
  StatusOr<google::cloud::run::v2::Revision> GetRevision(
      std::string const& name, Options opts = {});

  ///
  /// Gets information about a Revision.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::run::v2::GetRevisionRequest,google/cloud/run/v2/revision.proto#L90}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Revision,google/cloud/run/v2/revision.proto#L162}
  ///
  /// [google.cloud.run.v2.GetRevisionRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/revision.proto#L90}
  /// [google.cloud.run.v2.Revision]:
  /// @googleapis_reference_link{google/cloud/run/v2/revision.proto#L162}
  ///
  StatusOr<google::cloud::run::v2::Revision> GetRevision(
      google::cloud::run::v2::GetRevisionRequest const& request,
      Options opts = {});

  ///
  /// Lists Revisions from a given Service, or from a given location.
  ///
  /// @param parent  Required. The Service from which the Revisions should be
  /// listed.
  ///  To list all Revisions across Services, use "-" instead of Service name.
  ///  Format:
  ///  projects/{project}/locations/{location}/services/{service}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Revision,google/cloud/run/v2/revision.proto#L162}
  ///
  /// [google.cloud.run.v2.ListRevisionsRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/revision.proto#L103}
  /// [google.cloud.run.v2.Revision]:
  /// @googleapis_reference_link{google/cloud/run/v2/revision.proto#L162}
  ///
  StreamRange<google::cloud::run::v2::Revision> ListRevisions(
      std::string const& parent, Options opts = {});

  ///
  /// Lists Revisions from a given Service, or from a given location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::run::v2::ListRevisionsRequest,google/cloud/run/v2/revision.proto#L103}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Revision,google/cloud/run/v2/revision.proto#L162}
  ///
  /// [google.cloud.run.v2.ListRevisionsRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/revision.proto#L103}
  /// [google.cloud.run.v2.Revision]:
  /// @googleapis_reference_link{google/cloud/run/v2/revision.proto#L162}
  ///
  StreamRange<google::cloud::run::v2::Revision> ListRevisions(
      google::cloud::run::v2::ListRevisionsRequest request, Options opts = {});

  ///
  /// Deletes a Revision.
  ///
  /// @param name  Required. The name of the Revision to delete.
  ///  Format:
  ///  projects/{project}/locations/{location}/services/{service}/revisions/{revision}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Revision,google/cloud/run/v2/revision.proto#L162}
  ///
  /// [google.cloud.run.v2.DeleteRevisionRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/revision.proto#L139}
  /// [google.cloud.run.v2.Revision]:
  /// @googleapis_reference_link{google/cloud/run/v2/revision.proto#L162}
  ///
  future<StatusOr<google::cloud::run::v2::Revision>> DeleteRevision(
      std::string const& name, Options opts = {});

  ///
  /// Deletes a Revision.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::run::v2::DeleteRevisionRequest,google/cloud/run/v2/revision.proto#L139}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Revision,google/cloud/run/v2/revision.proto#L162}
  ///
  /// [google.cloud.run.v2.DeleteRevisionRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/revision.proto#L139}
  /// [google.cloud.run.v2.Revision]:
  /// @googleapis_reference_link{google/cloud/run/v2/revision.proto#L162}
  ///
  future<StatusOr<google::cloud::run::v2::Revision>> DeleteRevision(
      google::cloud::run::v2::DeleteRevisionRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<RevisionsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_REVISIONS_CLIENT_H
