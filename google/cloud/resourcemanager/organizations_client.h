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
// source: google/cloud/resourcemanager/v3/organizations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_ORGANIZATIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_ORGANIZATIONS_CLIENT_H

#include "google/cloud/resourcemanager/organizations_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Allows users to manage their organization resources.
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
class OrganizationsClient {
 public:
  explicit OrganizationsClient(
      std::shared_ptr<OrganizationsConnection> connection, Options opts = {});
  ~OrganizationsClient();

  ///@{
  /// @name Copy and move support
  OrganizationsClient(OrganizationsClient const&) = default;
  OrganizationsClient& operator=(OrganizationsClient const&) = default;
  OrganizationsClient(OrganizationsClient&&) = default;
  OrganizationsClient& operator=(OrganizationsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(OrganizationsClient const& a,
                         OrganizationsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(OrganizationsClient const& a,
                         OrganizationsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Fetches an organization resource identified by the specified resource
  /// name.
  ///
  /// @param name  Required. The resource name of the Organization to fetch.
  /// This is the organization's
  ///  relative path in the API, formatted as "organizations/[organizationId]".
  ///  For example, "organizations/1234".
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::resourcemanager::v3::Organization,google/cloud/resourcemanager/v3/organizations.proto#L108}
  ///
  /// [google.cloud.resourcemanager.v3.GetOrganizationRequest]:
  /// @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L169}
  /// [google.cloud.resourcemanager.v3.Organization]:
  /// @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L108}
  ///
  StatusOr<google::cloud::resourcemanager::v3::Organization> GetOrganization(
      std::string const& name, Options opts = {});

  ///
  /// Fetches an organization resource identified by the specified resource
  /// name.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::resourcemanager::v3::GetOrganizationRequest,google/cloud/resourcemanager/v3/organizations.proto#L169}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::resourcemanager::v3::Organization,google/cloud/resourcemanager/v3/organizations.proto#L108}
  ///
  /// [google.cloud.resourcemanager.v3.GetOrganizationRequest]:
  /// @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L169}
  /// [google.cloud.resourcemanager.v3.Organization]:
  /// @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L108}
  ///
  StatusOr<google::cloud::resourcemanager::v3::Organization> GetOrganization(
      google::cloud::resourcemanager::v3::GetOrganizationRequest const& request,
      Options opts = {});

  ///
  /// Searches organization resources that are visible to the user and satisfy
  /// the specified filter. This method returns organizations in an unspecified
  /// order. New organizations do not necessarily appear at the end of the
  /// results, and may take a small amount of time to appear.
  ///
  /// Search will only return organizations on which the user has the permission
  /// `resourcemanager.organizations.get`
  ///
  /// @param query  Optional. An optional query string used to filter the
  /// Organizations to return in
  ///  the response. Query rules are case-insensitive.
  ///  ```
  ///  | Field            | Description                                |
  ///  |------------------|--------------------------------------------|
  ///  | directoryCustomerId, owner.directoryCustomerId | Filters by directory
  ///  customer id. |
  ///  | domain           | Filters by domain.                         |
  ///  ```
  ///  Organizations may be queried by `directoryCustomerId` or by
  ///  `domain`, where the domain is a G Suite domain, for example:
  ///  * Query `directorycustomerid:123456789` returns Organization
  ///  resources with `owner.directory_customer_id` equal to `123456789`.
  ///  * Query `domain:google.com` returns Organization resources corresponding
  ///  to the domain `google.com`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::resourcemanager::v3::Organization,google/cloud/resourcemanager/v3/organizations.proto#L108}
  ///
  /// [google.cloud.resourcemanager.v3.SearchOrganizationsRequest]:
  /// @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L182}
  /// [google.cloud.resourcemanager.v3.Organization]:
  /// @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L108}
  ///
  StreamRange<google::cloud::resourcemanager::v3::Organization>
  SearchOrganizations(std::string const& query, Options opts = {});

  ///
  /// Searches organization resources that are visible to the user and satisfy
  /// the specified filter. This method returns organizations in an unspecified
  /// order. New organizations do not necessarily appear at the end of the
  /// results, and may take a small amount of time to appear.
  ///
  /// Search will only return organizations on which the user has the permission
  /// `resourcemanager.organizations.get`
  ///
  /// @param request
  /// @googleapis_link{google::cloud::resourcemanager::v3::SearchOrganizationsRequest,google/cloud/resourcemanager/v3/organizations.proto#L182}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::resourcemanager::v3::Organization,google/cloud/resourcemanager/v3/organizations.proto#L108}
  ///
  /// [google.cloud.resourcemanager.v3.SearchOrganizationsRequest]:
  /// @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L182}
  /// [google.cloud.resourcemanager.v3.Organization]:
  /// @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L108}
  ///
  StreamRange<google::cloud::resourcemanager::v3::Organization>
  SearchOrganizations(
      google::cloud::resourcemanager::v3::SearchOrganizationsRequest request,
      Options opts = {});

  ///
  /// Gets the access control policy for an organization resource. The policy
  /// may be empty if no such policy or resource exists. The `resource` field
  /// should be the organization's resource name, for example:
  /// "organizations/123".
  ///
  /// Authorization requires the IAM permission
  /// `resourcemanager.organizations.getIamPolicy` on the specified
  /// organization.
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being
  /// requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(std::string const& resource,
                                                 Options opts = {});

  ///
  /// Gets the access control policy for an organization resource. The policy
  /// may be empty if no such policy or resource exists. The `resource` field
  /// should be the organization's resource name, for example:
  /// "organizations/123".
  ///
  /// Authorization requires the IAM permission
  /// `resourcemanager.organizations.getIamPolicy` on the specified
  /// organization.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::GetIamPolicyRequest,google/iam/v1/iam_policy.proto#L123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Sets the access control policy on an organization resource. Replaces any
  /// existing policy. The `resource` field should be the organization's
  /// resource name, for example: "organizations/123".
  ///
  /// Authorization requires the IAM permission
  /// `resourcemanager.organizations.setIamPolicy` on the specified
  /// organization.
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being
  /// specified.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(std::string const& resource,
                                                 Options opts = {});

  ///
  /// Sets the access control policy on an organization resource. Replaces any
  /// existing policy. The `resource` field should be the organization's
  /// resource name, for example: "organizations/123".
  ///
  /// Authorization requires the IAM permission
  /// `resourcemanager.organizations.setIamPolicy` on the specified
  /// organization.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::SetIamPolicyRequest,google/iam/v1/iam_policy.proto#L101}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Returns the permissions that a caller has on the specified organization.
  /// The `resource` field should be the organization's resource name,
  /// for example: "organizations/123".
  ///
  /// There are no permissions required for making this API call.
  ///
  /// @param resource  REQUIRED: The resource for which the policy detail is
  /// being requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param permissions  The set of permissions to check for the `resource`.
  /// Permissions with
  ///  wildcards (such as '*' or 'storage.*') are not allowed. For more
  ///  information see
  ///  [IAM Overview](https://cloud.google.com/iam/docs/overview#permissions).
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      std::string const& resource, std::vector<std::string> const& permissions,
      Options opts = {});

  ///
  /// Returns the permissions that a caller has on the specified organization.
  /// The `resource` field should be the organization's resource name,
  /// for example: "organizations/123".
  ///
  /// There are no permissions required for making this API call.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::TestIamPermissionsRequest,google/iam/v1/iam_policy.proto#L136}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<OrganizationsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_ORGANIZATIONS_CLIENT_H
