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
// source: google/cloud/talent/v4/tenant_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_TENANT_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_TENANT_CLIENT_H

#include "google/cloud/talent/tenant_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A service that handles tenant management, including CRUD and enumeration.
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
class TenantServiceClient {
 public:
  explicit TenantServiceClient(
      std::shared_ptr<TenantServiceConnection> connection, Options opts = {});
  ~TenantServiceClient();

  ///@{
  /// @name Copy and move support
  TenantServiceClient(TenantServiceClient const&) = default;
  TenantServiceClient& operator=(TenantServiceClient const&) = default;
  TenantServiceClient(TenantServiceClient&&) = default;
  TenantServiceClient& operator=(TenantServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(TenantServiceClient const& a,
                         TenantServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TenantServiceClient const& a,
                         TenantServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates a new tenant entity.
  ///
  /// @param parent  Required. Resource name of the project under which the
  /// tenant is created.
  ///  The format is "projects/{project_id}", for example,
  ///  "projects/foo".
  /// @param tenant  Required. The tenant to be created.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Tenant,google/cloud/talent/v4/tenant.proto#L32}
  ///
  /// [google.cloud.talent.v4.CreateTenantRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant_service.proto#L85}
  /// [google.cloud.talent.v4.Tenant]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant.proto#L32}
  ///
  StatusOr<google::cloud::talent::v4::Tenant> CreateTenant(
      std::string const& parent,
      google::cloud::talent::v4::Tenant const& tenant, Options opts = {});

  ///
  /// Creates a new tenant entity.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::CreateTenantRequest,google/cloud/talent/v4/tenant_service.proto#L85}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Tenant,google/cloud/talent/v4/tenant.proto#L32}
  ///
  /// [google.cloud.talent.v4.CreateTenantRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant_service.proto#L85}
  /// [google.cloud.talent.v4.Tenant]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant.proto#L32}
  ///
  StatusOr<google::cloud::talent::v4::Tenant> CreateTenant(
      google::cloud::talent::v4::CreateTenantRequest const& request,
      Options opts = {});

  ///
  /// Retrieves specified tenant.
  ///
  /// @param name  Required. The resource name of the tenant to be retrieved.
  ///  The format is "projects/{project_id}/tenants/{tenant_id}", for example,
  ///  "projects/foo/tenants/bar".
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Tenant,google/cloud/talent/v4/tenant.proto#L32}
  ///
  /// [google.cloud.talent.v4.GetTenantRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant_service.proto#L102}
  /// [google.cloud.talent.v4.Tenant]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant.proto#L32}
  ///
  StatusOr<google::cloud::talent::v4::Tenant> GetTenant(std::string const& name,
                                                        Options opts = {});

  ///
  /// Retrieves specified tenant.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::GetTenantRequest,google/cloud/talent/v4/tenant_service.proto#L102}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Tenant,google/cloud/talent/v4/tenant.proto#L32}
  ///
  /// [google.cloud.talent.v4.GetTenantRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant_service.proto#L102}
  /// [google.cloud.talent.v4.Tenant]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant.proto#L32}
  ///
  StatusOr<google::cloud::talent::v4::Tenant> GetTenant(
      google::cloud::talent::v4::GetTenantRequest const& request,
      Options opts = {});

  ///
  /// Updates specified tenant.
  ///
  /// @param tenant  Required. The tenant resource to replace the current
  /// resource in the system.
  /// @param update_mask  Strongly recommended for the best service experience.
  ///  If [update_mask][google.cloud.talent.v4.UpdateTenantRequest.update_mask]
  ///  is provided, only the specified fields in
  ///  [tenant][google.cloud.talent.v4.UpdateTenantRequest.tenant] are updated.
  ///  Otherwise all the fields are updated. A field mask to specify the tenant
  ///  fields to be updated. Only top level fields of
  ///  [Tenant][google.cloud.talent.v4.Tenant] are supported.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Tenant,google/cloud/talent/v4/tenant.proto#L32}
  ///
  /// [google.cloud.talent.v4.UpdateTenantRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant_service.proto#L116}
  /// [google.cloud.talent.v4.Tenant]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant.proto#L32}
  ///
  StatusOr<google::cloud::talent::v4::Tenant> UpdateTenant(
      google::cloud::talent::v4::Tenant const& tenant,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates specified tenant.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::UpdateTenantRequest,google/cloud/talent/v4/tenant_service.proto#L116}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Tenant,google/cloud/talent/v4/tenant.proto#L32}
  ///
  /// [google.cloud.talent.v4.UpdateTenantRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant_service.proto#L116}
  /// [google.cloud.talent.v4.Tenant]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant.proto#L32}
  ///
  StatusOr<google::cloud::talent::v4::Tenant> UpdateTenant(
      google::cloud::talent::v4::UpdateTenantRequest const& request,
      Options opts = {});

  ///
  /// Deletes specified tenant.
  ///
  /// @param name  Required. The resource name of the tenant to be deleted.
  ///  The format is "projects/{project_id}/tenants/{tenant_id}", for example,
  ///  "projects/foo/tenants/bar".
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.talent.v4.DeleteTenantRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant_service.proto#L131}
  ///
  Status DeleteTenant(std::string const& name, Options opts = {});

  ///
  /// Deletes specified tenant.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::DeleteTenantRequest,google/cloud/talent/v4/tenant_service.proto#L131}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.talent.v4.DeleteTenantRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant_service.proto#L131}
  ///
  Status DeleteTenant(
      google::cloud::talent::v4::DeleteTenantRequest const& request,
      Options opts = {});

  ///
  /// Lists all tenants associated with the project.
  ///
  /// @param parent  Required. Resource name of the project under which the
  /// tenant is created.
  ///  The format is "projects/{project_id}", for example,
  ///  "projects/foo".
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Tenant,google/cloud/talent/v4/tenant.proto#L32}
  ///
  /// [google.cloud.talent.v4.ListTenantsRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant_service.proto#L145}
  /// [google.cloud.talent.v4.Tenant]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant.proto#L32}
  ///
  StreamRange<google::cloud::talent::v4::Tenant> ListTenants(
      std::string const& parent, Options opts = {});

  ///
  /// Lists all tenants associated with the project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::ListTenantsRequest,google/cloud/talent/v4/tenant_service.proto#L145}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Tenant,google/cloud/talent/v4/tenant.proto#L32}
  ///
  /// [google.cloud.talent.v4.ListTenantsRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant_service.proto#L145}
  /// [google.cloud.talent.v4.Tenant]:
  /// @googleapis_reference_link{google/cloud/talent/v4/tenant.proto#L32}
  ///
  StreamRange<google::cloud::talent::v4::Tenant> ListTenants(
      google::cloud::talent::v4::ListTenantsRequest request, Options opts = {});

 private:
  std::shared_ptr<TenantServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_TENANT_CLIENT_H
