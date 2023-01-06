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
// source: google/cloud/dialogflow/v2/session_entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_SESSION_ENTITY_TYPES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_SESSION_ENTITY_TYPES_CLIENT_H

#include "google/cloud/dialogflow_es/session_entity_types_connection.h"
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
/// Service for managing
/// [SessionEntityTypes][google.cloud.dialogflow.v2.SessionEntityType].
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
class SessionEntityTypesClient {
 public:
  explicit SessionEntityTypesClient(
      std::shared_ptr<SessionEntityTypesConnection> connection,
      Options opts = {});
  ~SessionEntityTypesClient();

  ///@{
  /// @name Copy and move support
  SessionEntityTypesClient(SessionEntityTypesClient const&) = default;
  SessionEntityTypesClient& operator=(SessionEntityTypesClient const&) =
      default;
  SessionEntityTypesClient(SessionEntityTypesClient&&) = default;
  SessionEntityTypesClient& operator=(SessionEntityTypesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SessionEntityTypesClient const& a,
                         SessionEntityTypesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SessionEntityTypesClient const& a,
                         SessionEntityTypesClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Returns the list of all session entity types in the specified session.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param parent  Required. The session to list all session entity types
  /// from.
  ///  Format: `projects/<Project ID>/agent/sessions/<Session ID>` or
  ///  `projects/<Project ID>/agent/environments/<Environment ID>/users/<User
  ///  ID>/ sessions/<Session ID>`. If `Environment ID` is not specified, we
  ///  assume default 'draft' environment. If `User ID` is not specified, we
  ///  assume default '-' user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::SessionEntityType,google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  /// [google.cloud.dialogflow.v2.ListSessionEntityTypesRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L220}
  /// [google.cloud.dialogflow.v2.SessionEntityType]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  StreamRange<google::cloud::dialogflow::v2::SessionEntityType>
  ListSessionEntityTypes(std::string const& parent, Options opts = {});

  ///
  /// Returns the list of all session entity types in the specified session.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::ListSessionEntityTypesRequest,google/cloud/dialogflow/v2/session_entity_type.proto#L220}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::SessionEntityType,google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  /// [google.cloud.dialogflow.v2.ListSessionEntityTypesRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L220}
  /// [google.cloud.dialogflow.v2.SessionEntityType]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  StreamRange<google::cloud::dialogflow::v2::SessionEntityType>
  ListSessionEntityTypes(
      google::cloud::dialogflow::v2::ListSessionEntityTypesRequest request,
      Options opts = {});

  ///
  /// Retrieves the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param name  Required. The name of the session entity type. Format:
  ///  @code
  ///  projects/<Project ID>/agent/sessions/<Session ID>/entityTypes/<Entity
  ///  Type Display Name>
  ///  @endcode
  ///  or
  ///  @code
  ///  projects/<Project ID>/agent/environments/<Environment ID>/users/<User
  ///  ID>/sessions/<Session ID>/entityTypes/<Entity Type Display Name>
  ///  @endcode
  ///  If `Environment ID` is not specified, we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::SessionEntityType,google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  /// [google.cloud.dialogflow.v2.GetSessionEntityTypeRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L254}
  /// [google.cloud.dialogflow.v2.SessionEntityType]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  GetSessionEntityType(std::string const& name, Options opts = {});

  ///
  /// Retrieves the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::GetSessionEntityTypeRequest,google/cloud/dialogflow/v2/session_entity_type.proto#L254}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::SessionEntityType,google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  /// [google.cloud.dialogflow.v2.GetSessionEntityTypeRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L254}
  /// [google.cloud.dialogflow.v2.SessionEntityType]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  GetSessionEntityType(
      google::cloud::dialogflow::v2::GetSessionEntityTypeRequest const& request,
      Options opts = {});

  ///
  /// Creates a session entity type.
  ///
  /// If the specified session entity type already exists, overrides the session
  /// entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param parent  Required. The session to create a session entity type for.
  ///  Format: `projects/<Project ID>/agent/sessions/<Session ID>` or
  ///  `projects/<Project ID>/agent/environments/<Environment ID>/users/<User
  ///  ID>/ sessions/<Session ID>`. If `Environment ID` is not specified, we
  ///  assume default 'draft' environment. If `User ID` is not specified, we
  ///  assume default '-' user.
  /// @param session_entity_type  Required. The session entity type to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::SessionEntityType,google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  /// [google.cloud.dialogflow.v2.CreateSessionEntityTypeRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L271}
  /// [google.cloud.dialogflow.v2.SessionEntityType]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  CreateSessionEntityType(
      std::string const& parent,
      google::cloud::dialogflow::v2::SessionEntityType const&
          session_entity_type,
      Options opts = {});

  ///
  /// Creates a session entity type.
  ///
  /// If the specified session entity type already exists, overrides the session
  /// entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::CreateSessionEntityTypeRequest,google/cloud/dialogflow/v2/session_entity_type.proto#L271}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::SessionEntityType,google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  /// [google.cloud.dialogflow.v2.CreateSessionEntityTypeRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L271}
  /// [google.cloud.dialogflow.v2.SessionEntityType]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  CreateSessionEntityType(
      google::cloud::dialogflow::v2::CreateSessionEntityTypeRequest const&
          request,
      Options opts = {});

  ///
  /// Updates the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param session_entity_type  Required. The session entity type to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::SessionEntityType,google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  /// [google.cloud.dialogflow.v2.UpdateSessionEntityTypeRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L290}
  /// [google.cloud.dialogflow.v2.SessionEntityType]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  UpdateSessionEntityType(
      google::cloud::dialogflow::v2::SessionEntityType const&
          session_entity_type,
      Options opts = {});

  ///
  /// Updates the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param session_entity_type  Required. The session entity type to update.
  /// @param update_mask  Optional. The mask to control which fields get
  /// updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::SessionEntityType,google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  /// [google.cloud.dialogflow.v2.UpdateSessionEntityTypeRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L290}
  /// [google.cloud.dialogflow.v2.SessionEntityType]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  UpdateSessionEntityType(
      google::cloud::dialogflow::v2::SessionEntityType const&
          session_entity_type,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::UpdateSessionEntityTypeRequest,google/cloud/dialogflow/v2/session_entity_type.proto#L290}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::SessionEntityType,google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  /// [google.cloud.dialogflow.v2.UpdateSessionEntityTypeRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L290}
  /// [google.cloud.dialogflow.v2.SessionEntityType]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L168}
  ///
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  UpdateSessionEntityType(
      google::cloud::dialogflow::v2::UpdateSessionEntityTypeRequest const&
          request,
      Options opts = {});

  ///
  /// Deletes the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param name  Required. The name of the entity type to delete. Format:
  ///  @code
  ///  projects/<Project ID>/agent/sessions/<Session ID>/entityTypes/<Entity
  ///  Type Display Name>
  ///  @endcode
  ///  or
  ///  @code
  ///  projects/<Project ID>/agent/environments/<Environment ID>/users/<User
  ///  ID>/sessions/<Session ID>/entityTypes/<Entity Type Display Name>
  ///  @endcode
  ///  If `Environment ID` is not specified, we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.v2.DeleteSessionEntityTypeRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L299}
  ///
  Status DeleteSessionEntityType(std::string const& name, Options opts = {});

  ///
  /// Deletes the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::DeleteSessionEntityTypeRequest,google/cloud/dialogflow/v2/session_entity_type.proto#L299}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.v2.DeleteSessionEntityTypeRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L299}
  ///
  Status DeleteSessionEntityType(
      google::cloud::dialogflow::v2::DeleteSessionEntityTypeRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<SessionEntityTypesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_SESSION_ENTITY_TYPES_CLIENT_H
