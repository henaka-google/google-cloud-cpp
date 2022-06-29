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
// source: google/cloud/recommender/v1/recommender_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_RECOMMENDER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_RECOMMENDER_CLIENT_H

#include "google/cloud/recommender/recommender_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace recommender {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Provides insights and recommendations for cloud customers for various
/// categories like performance optimization, cost savings, reliability, feature
/// discovery, etc. Insights and recommendations are generated automatically
/// based on analysis of user resources, configuration and monitoring metrics.
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
class RecommenderClient {
 public:
  explicit RecommenderClient(std::shared_ptr<RecommenderConnection> connection,
                             Options opts = {});
  ~RecommenderClient();

  //@{
  // @name Copy and move support
  RecommenderClient(RecommenderClient const&) = default;
  RecommenderClient& operator=(RecommenderClient const&) = default;
  RecommenderClient(RecommenderClient&&) = default;
  RecommenderClient& operator=(RecommenderClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(RecommenderClient const& a,
                         RecommenderClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RecommenderClient const& a,
                         RecommenderClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Lists insights for the specified Cloud Resource. Requires the
  /// recommender.*.list IAM permission for the specified insight type.
  ///
  /// @param parent  Required. The container resource on which to execute the
  /// request.
  ///  Acceptable formats:
  ///  * `projects/[PROJECT_NUMBER]/locations/[LOCATION]/insightTypes/[INSIGHT_TYPE_ID]`
  ///  * `projects/[PROJECT_ID]/locations/[LOCATION]/insightTypes/[INSIGHT_TYPE_ID]`
  ///  * `billingAccounts/[BILLING_ACCOUNT_ID]/locations/[LOCATION]/insightTypes/[INSIGHT_TYPE_ID]`
  ///  * `folders/[FOLDER_ID]/locations/[LOCATION]/insightTypes/[INSIGHT_TYPE_ID]`
  ///  * `organizations/[ORGANIZATION_ID]/locations/[LOCATION]/insightTypes/[INSIGHT_TYPE_ID]`
  ///  LOCATION here refers to GCP Locations:
  ///  https://cloud.google.com/about/locations/
  ///  INSIGHT_TYPE_ID refers to supported insight types:
  ///  https://cloud.google.com/recommender/docs/insights/insight-types.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Insight,google/cloud/recommender/v1/insight.proto#L40}
  ///
  /// [google.cloud.recommender.v1.ListInsightsRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L298}
  /// [google.cloud.recommender.v1.Insight]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/insight.proto#L40}
  ///
  StreamRange<google::cloud::recommender::v1::Insight> ListInsights(
      std::string const& parent, Options opts = {});

  ///
  /// Lists insights for the specified Cloud Resource. Requires the
  /// recommender.*.list IAM permission for the specified insight type.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::recommender::v1::ListInsightsRequest,google/cloud/recommender/v1/recommender_service.proto#L298}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Insight,google/cloud/recommender/v1/insight.proto#L40}
  ///
  /// [google.cloud.recommender.v1.ListInsightsRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L298}
  /// [google.cloud.recommender.v1.Insight]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/insight.proto#L40}
  ///
  StreamRange<google::cloud::recommender::v1::Insight> ListInsights(
      google::cloud::recommender::v1::ListInsightsRequest request,
      Options opts = {});

  ///
  /// Gets the requested insight. Requires the recommender.*.get IAM permission
  /// for the specified insight type.
  ///
  /// @param name  Required. Name of the insight.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Insight,google/cloud/recommender/v1/insight.proto#L40}
  ///
  /// [google.cloud.recommender.v1.GetInsightRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L369}
  /// [google.cloud.recommender.v1.Insight]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/insight.proto#L40}
  ///
  StatusOr<google::cloud::recommender::v1::Insight> GetInsight(
      std::string const& name, Options opts = {});

  ///
  /// Gets the requested insight. Requires the recommender.*.get IAM permission
  /// for the specified insight type.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::recommender::v1::GetInsightRequest,google/cloud/recommender/v1/recommender_service.proto#L369}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Insight,google/cloud/recommender/v1/insight.proto#L40}
  ///
  /// [google.cloud.recommender.v1.GetInsightRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L369}
  /// [google.cloud.recommender.v1.Insight]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/insight.proto#L40}
  ///
  StatusOr<google::cloud::recommender::v1::Insight> GetInsight(
      google::cloud::recommender::v1::GetInsightRequest const& request,
      Options opts = {});

  ///
  /// Marks the Insight State as Accepted. Users can use this method to
  /// indicate to the Recommender API that they have applied some action based
  /// on the insight. This stops the insight content from being updated.
  ///
  /// MarkInsightAccepted can be applied to insights in ACTIVE state. Requires
  /// the recommender.*.update IAM permission for the specified insight.
  ///
  /// @param name  Required. Name of the insight.
  /// @param state_metadata  Optional. State properties user wish to include
  /// with this state.  Full
  ///  replace of the current state_metadata.
  /// @param etag  Required. Fingerprint of the Insight. Provides optimistic
  /// locking.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Insight,google/cloud/recommender/v1/insight.proto#L40}
  ///
  /// [google.cloud.recommender.v1.MarkInsightAcceptedRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L380}
  /// [google.cloud.recommender.v1.Insight]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/insight.proto#L40}
  ///
  StatusOr<google::cloud::recommender::v1::Insight> MarkInsightAccepted(
      std::string const& name,
      std::map<std::string, std::string> const& state_metadata,
      std::string const& etag, Options opts = {});

  ///
  /// Marks the Insight State as Accepted. Users can use this method to
  /// indicate to the Recommender API that they have applied some action based
  /// on the insight. This stops the insight content from being updated.
  ///
  /// MarkInsightAccepted can be applied to insights in ACTIVE state. Requires
  /// the recommender.*.update IAM permission for the specified insight.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::recommender::v1::MarkInsightAcceptedRequest,google/cloud/recommender/v1/recommender_service.proto#L380}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Insight,google/cloud/recommender/v1/insight.proto#L40}
  ///
  /// [google.cloud.recommender.v1.MarkInsightAcceptedRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L380}
  /// [google.cloud.recommender.v1.Insight]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/insight.proto#L40}
  ///
  StatusOr<google::cloud::recommender::v1::Insight> MarkInsightAccepted(
      google::cloud::recommender::v1::MarkInsightAcceptedRequest const& request,
      Options opts = {});

  ///
  /// Lists recommendations for the specified Cloud Resource. Requires the
  /// recommender.*.list IAM permission for the specified recommender.
  ///
  /// @param parent  Required. The container resource on which to execute the
  /// request.
  ///  Acceptable formats:
  ///  * `projects/[PROJECT_NUMBER]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]`
  ///  * `projects/[PROJECT_ID]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]`
  ///  * `billingAccounts/[BILLING_ACCOUNT_ID]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]`
  ///  * `folders/[FOLDER_ID]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]`
  ///  * `organizations/[ORGANIZATION_ID]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]`
  ///  LOCATION here refers to GCP Locations:
  ///  https://cloud.google.com/about/locations/
  ///  RECOMMENDER_ID refers to supported recommenders:
  ///  https://cloud.google.com/recommender/docs/recommenders.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Recommendation,google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  /// [google.cloud.recommender.v1.ListRecommendationsRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L399}
  /// [google.cloud.recommender.v1.Recommendation]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  StreamRange<google::cloud::recommender::v1::Recommendation>
  ListRecommendations(std::string const& parent, Options opts = {});

  ///
  /// Lists recommendations for the specified Cloud Resource. Requires the
  /// recommender.*.list IAM permission for the specified recommender.
  ///
  /// @param parent  Required. The container resource on which to execute the
  /// request.
  ///  Acceptable formats:
  ///  * `projects/[PROJECT_NUMBER]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]`
  ///  * `projects/[PROJECT_ID]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]`
  ///  * `billingAccounts/[BILLING_ACCOUNT_ID]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]`
  ///  * `folders/[FOLDER_ID]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]`
  ///  * `organizations/[ORGANIZATION_ID]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]`
  ///  LOCATION here refers to GCP Locations:
  ///  https://cloud.google.com/about/locations/
  ///  RECOMMENDER_ID refers to supported recommenders:
  ///  https://cloud.google.com/recommender/docs/recommenders.
  /// @param filter  Filter expression to restrict the recommendations returned.
  /// Supported
  ///  filter fields:
  ///  * `state_info.state`
  ///  * `recommenderSubtype`
  ///  * `priority`
  ///  Examples:
  ///  * `stateInfo.state = ACTIVE OR stateInfo.state = DISMISSED`
  ///  * `recommenderSubtype = REMOVE_ROLE OR recommenderSubtype = REPLACE_ROLE`
  ///  * `priority = P1 OR priority = P2`
  ///  * `stateInfo.state = ACTIVE AND (priority = P1 OR priority = P2)`
  ///  (These expressions are based on the filter language described at
  ///  https://google.aip.dev/160)
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Recommendation,google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  /// [google.cloud.recommender.v1.ListRecommendationsRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L399}
  /// [google.cloud.recommender.v1.Recommendation]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  StreamRange<google::cloud::recommender::v1::Recommendation>
  ListRecommendations(std::string const& parent, std::string const& filter,
                      Options opts = {});

  ///
  /// Lists recommendations for the specified Cloud Resource. Requires the
  /// recommender.*.list IAM permission for the specified recommender.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::recommender::v1::ListRecommendationsRequest,google/cloud/recommender/v1/recommender_service.proto#L399}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Recommendation,google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  /// [google.cloud.recommender.v1.ListRecommendationsRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L399}
  /// [google.cloud.recommender.v1.Recommendation]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  StreamRange<google::cloud::recommender::v1::Recommendation>
  ListRecommendations(
      google::cloud::recommender::v1::ListRecommendationsRequest request,
      Options opts = {});

  ///
  /// Gets the requested recommendation. Requires the recommender.*.get
  /// IAM permission for the specified recommender.
  ///
  /// @param name  Required. Name of the recommendation.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Recommendation,google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  /// [google.cloud.recommender.v1.GetRecommendationRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L470}
  /// [google.cloud.recommender.v1.Recommendation]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  StatusOr<google::cloud::recommender::v1::Recommendation> GetRecommendation(
      std::string const& name, Options opts = {});

  ///
  /// Gets the requested recommendation. Requires the recommender.*.get
  /// IAM permission for the specified recommender.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::recommender::v1::GetRecommendationRequest,google/cloud/recommender/v1/recommender_service.proto#L470}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Recommendation,google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  /// [google.cloud.recommender.v1.GetRecommendationRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L470}
  /// [google.cloud.recommender.v1.Recommendation]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  StatusOr<google::cloud::recommender::v1::Recommendation> GetRecommendation(
      google::cloud::recommender::v1::GetRecommendationRequest const& request,
      Options opts = {});

  ///
  /// Marks the Recommendation State as Claimed. Users can use this method to
  /// indicate to the Recommender API that they are starting to apply the
  /// recommendation themselves. This stops the recommendation content from
  /// being updated. Associated insights are frozen and placed in the ACCEPTED
  /// state.
  ///
  /// MarkRecommendationClaimed can be applied to recommendations in CLAIMED,
  /// SUCCEEDED, FAILED, or ACTIVE state.
  ///
  /// Requires the recommender.*.update IAM permission for the specified
  /// recommender.
  ///
  /// @param name  Required. Name of the recommendation.
  /// @param state_metadata  State properties to include with this state.
  /// Overwrites any existing
  ///  `state_metadata`.
  ///  Keys must match the regex `/^[a-z0-9][a-z0-9_.-]{0,62}$/`.
  ///  Values must match the regex `/^[a-zA-Z0-9_./-]{0,255}$/`.
  /// @param etag  Required. Fingerprint of the Recommendation. Provides
  /// optimistic locking.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Recommendation,google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  /// [google.cloud.recommender.v1.MarkRecommendationClaimedRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L481}
  /// [google.cloud.recommender.v1.Recommendation]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationClaimed(
      std::string const& name,
      std::map<std::string, std::string> const& state_metadata,
      std::string const& etag, Options opts = {});

  ///
  /// Marks the Recommendation State as Claimed. Users can use this method to
  /// indicate to the Recommender API that they are starting to apply the
  /// recommendation themselves. This stops the recommendation content from
  /// being updated. Associated insights are frozen and placed in the ACCEPTED
  /// state.
  ///
  /// MarkRecommendationClaimed can be applied to recommendations in CLAIMED,
  /// SUCCEEDED, FAILED, or ACTIVE state.
  ///
  /// Requires the recommender.*.update IAM permission for the specified
  /// recommender.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::recommender::v1::MarkRecommendationClaimedRequest,google/cloud/recommender/v1/recommender_service.proto#L481}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Recommendation,google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  /// [google.cloud.recommender.v1.MarkRecommendationClaimedRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L481}
  /// [google.cloud.recommender.v1.Recommendation]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationClaimed(
      google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&
          request,
      Options opts = {});

  ///
  /// Marks the Recommendation State as Succeeded. Users can use this method to
  /// indicate to the Recommender API that they have applied the recommendation
  /// themselves, and the operation was successful. This stops the
  /// recommendation content from being updated. Associated insights are frozen
  /// and placed in the ACCEPTED state.
  ///
  /// MarkRecommendationSucceeded can be applied to recommendations in ACTIVE,
  /// CLAIMED, SUCCEEDED, or FAILED state.
  ///
  /// Requires the recommender.*.update IAM permission for the specified
  /// recommender.
  ///
  /// @param name  Required. Name of the recommendation.
  /// @param state_metadata  State properties to include with this state.
  /// Overwrites any existing
  ///  `state_metadata`.
  ///  Keys must match the regex `/^[a-z0-9][a-z0-9_.-]{0,62}$/`.
  ///  Values must match the regex `/^[a-zA-Z0-9_./-]{0,255}$/`.
  /// @param etag  Required. Fingerprint of the Recommendation. Provides
  /// optimistic locking.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Recommendation,google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  /// [google.cloud.recommender.v1.MarkRecommendationSucceededRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L501}
  /// [google.cloud.recommender.v1.Recommendation]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationSucceeded(
      std::string const& name,
      std::map<std::string, std::string> const& state_metadata,
      std::string const& etag, Options opts = {});

  ///
  /// Marks the Recommendation State as Succeeded. Users can use this method to
  /// indicate to the Recommender API that they have applied the recommendation
  /// themselves, and the operation was successful. This stops the
  /// recommendation content from being updated. Associated insights are frozen
  /// and placed in the ACCEPTED state.
  ///
  /// MarkRecommendationSucceeded can be applied to recommendations in ACTIVE,
  /// CLAIMED, SUCCEEDED, or FAILED state.
  ///
  /// Requires the recommender.*.update IAM permission for the specified
  /// recommender.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::recommender::v1::MarkRecommendationSucceededRequest,google/cloud/recommender/v1/recommender_service.proto#L501}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Recommendation,google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  /// [google.cloud.recommender.v1.MarkRecommendationSucceededRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L501}
  /// [google.cloud.recommender.v1.Recommendation]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationSucceeded(
      google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&
          request,
      Options opts = {});

  ///
  /// Marks the Recommendation State as Failed. Users can use this method to
  /// indicate to the Recommender API that they have applied the recommendation
  /// themselves, and the operation failed. This stops the recommendation
  /// content from being updated. Associated insights are frozen and placed in
  /// the ACCEPTED state.
  ///
  /// MarkRecommendationFailed can be applied to recommendations in ACTIVE,
  /// CLAIMED, SUCCEEDED, or FAILED state.
  ///
  /// Requires the recommender.*.update IAM permission for the specified
  /// recommender.
  ///
  /// @param name  Required. Name of the recommendation.
  /// @param state_metadata  State properties to include with this state.
  /// Overwrites any existing
  ///  `state_metadata`.
  ///  Keys must match the regex `/^[a-z0-9][a-z0-9_.-]{0,62}$/`.
  ///  Values must match the regex `/^[a-zA-Z0-9_./-]{0,255}$/`.
  /// @param etag  Required. Fingerprint of the Recommendation. Provides
  /// optimistic locking.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Recommendation,google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  /// [google.cloud.recommender.v1.MarkRecommendationFailedRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L521}
  /// [google.cloud.recommender.v1.Recommendation]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationFailed(
      std::string const& name,
      std::map<std::string, std::string> const& state_metadata,
      std::string const& etag, Options opts = {});

  ///
  /// Marks the Recommendation State as Failed. Users can use this method to
  /// indicate to the Recommender API that they have applied the recommendation
  /// themselves, and the operation failed. This stops the recommendation
  /// content from being updated. Associated insights are frozen and placed in
  /// the ACCEPTED state.
  ///
  /// MarkRecommendationFailed can be applied to recommendations in ACTIVE,
  /// CLAIMED, SUCCEEDED, or FAILED state.
  ///
  /// Requires the recommender.*.update IAM permission for the specified
  /// recommender.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::recommender::v1::MarkRecommendationFailedRequest,google/cloud/recommender/v1/recommender_service.proto#L521}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::Recommendation,google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  /// [google.cloud.recommender.v1.MarkRecommendationFailedRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L521}
  /// [google.cloud.recommender.v1.Recommendation]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommendation.proto#L40}
  ///
  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationFailed(
      google::cloud::recommender::v1::MarkRecommendationFailedRequest const&
          request,
      Options opts = {});

  ///
  /// Gets the requested Recommender Config. There is only one instance of the
  /// config for each Recommender.
  ///
  /// @param name  Required. Name of the Recommendation Config to get.
  ///  Acceptable formats:
  ///  * `projects/[PROJECT_NUMBER]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]/config`
  ///  * `projects/[PROJECT_ID]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]/config`
  ///  * `organizations/[ORGANIZATION_ID]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]/config`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::RecommenderConfig,google/cloud/recommender/v1/recommender_config.proto#L32}
  ///
  /// [google.cloud.recommender.v1.GetRecommenderConfigRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L541}
  /// [google.cloud.recommender.v1.RecommenderConfig]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_config.proto#L32}
  ///
  StatusOr<google::cloud::recommender::v1::RecommenderConfig>
  GetRecommenderConfig(std::string const& name, Options opts = {});

  ///
  /// Gets the requested Recommender Config. There is only one instance of the
  /// config for each Recommender.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::recommender::v1::GetRecommenderConfigRequest,google/cloud/recommender/v1/recommender_service.proto#L541}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::RecommenderConfig,google/cloud/recommender/v1/recommender_config.proto#L32}
  ///
  /// [google.cloud.recommender.v1.GetRecommenderConfigRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L541}
  /// [google.cloud.recommender.v1.RecommenderConfig]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_config.proto#L32}
  ///
  StatusOr<google::cloud::recommender::v1::RecommenderConfig>
  GetRecommenderConfig(
      google::cloud::recommender::v1::GetRecommenderConfigRequest const&
          request,
      Options opts = {});

  ///
  /// Updates a Recommender Config. This will create a new revision of the
  /// config.
  ///
  /// @param recommender_config  Required. The RecommenderConfig to update.
  /// @param update_mask  The list of fields to be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::RecommenderConfig,google/cloud/recommender/v1/recommender_config.proto#L32}
  ///
  /// [google.cloud.recommender.v1.UpdateRecommenderConfigRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L560}
  /// [google.cloud.recommender.v1.RecommenderConfig]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_config.proto#L32}
  ///
  StatusOr<google::cloud::recommender::v1::RecommenderConfig>
  UpdateRecommenderConfig(
      google::cloud::recommender::v1::RecommenderConfig const&
          recommender_config,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates a Recommender Config. This will create a new revision of the
  /// config.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::recommender::v1::UpdateRecommenderConfigRequest,google/cloud/recommender/v1/recommender_service.proto#L560}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::RecommenderConfig,google/cloud/recommender/v1/recommender_config.proto#L32}
  ///
  /// [google.cloud.recommender.v1.UpdateRecommenderConfigRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L560}
  /// [google.cloud.recommender.v1.RecommenderConfig]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_config.proto#L32}
  ///
  StatusOr<google::cloud::recommender::v1::RecommenderConfig>
  UpdateRecommenderConfig(
      google::cloud::recommender::v1::UpdateRecommenderConfigRequest const&
          request,
      Options opts = {});

  ///
  /// Gets the requested InsightTypeConfig. There is only one instance of the
  /// config for each InsightType.
  ///
  /// @param name  Required. Name of the InsightTypeConfig to get.
  ///  Acceptable formats:
  ///  * `projects/[PROJECT_NUMBER]/locations/global/recommenders/[INSIGHT_TYPE_ID]/config`
  ///  * `projects/[PROJECT_ID]/locations/global/recommenders/[INSIGHT_TYPE_ID]/config`
  ///  * `organizations/[ORGANIZATION_ID]/locations/global/recommenders/[INSIGHT_TYPE_ID]/config`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::InsightTypeConfig,google/cloud/recommender/v1/insight_type_config.proto#L32}
  ///
  /// [google.cloud.recommender.v1.GetInsightTypeConfigRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L574}
  /// [google.cloud.recommender.v1.InsightTypeConfig]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/insight_type_config.proto#L32}
  ///
  StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
  GetInsightTypeConfig(std::string const& name, Options opts = {});

  ///
  /// Gets the requested InsightTypeConfig. There is only one instance of the
  /// config for each InsightType.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::recommender::v1::GetInsightTypeConfigRequest,google/cloud/recommender/v1/recommender_service.proto#L574}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::InsightTypeConfig,google/cloud/recommender/v1/insight_type_config.proto#L32}
  ///
  /// [google.cloud.recommender.v1.GetInsightTypeConfigRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L574}
  /// [google.cloud.recommender.v1.InsightTypeConfig]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/insight_type_config.proto#L32}
  ///
  StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
  GetInsightTypeConfig(
      google::cloud::recommender::v1::GetInsightTypeConfigRequest const&
          request,
      Options opts = {});

  ///
  /// Updates an InsightTypeConfig change. This will create a new revision of
  /// the config.
  ///
  /// @param insight_type_config  Required. The InsightTypeConfig to update.
  /// @param update_mask  The list of fields to be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::InsightTypeConfig,google/cloud/recommender/v1/insight_type_config.proto#L32}
  ///
  /// [google.cloud.recommender.v1.UpdateInsightTypeConfigRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L593}
  /// [google.cloud.recommender.v1.InsightTypeConfig]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/insight_type_config.proto#L32}
  ///
  StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
  UpdateInsightTypeConfig(
      google::cloud::recommender::v1::InsightTypeConfig const&
          insight_type_config,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates an InsightTypeConfig change. This will create a new revision of
  /// the config.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::recommender::v1::UpdateInsightTypeConfigRequest,google/cloud/recommender/v1/recommender_service.proto#L593}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::recommender::v1::InsightTypeConfig,google/cloud/recommender/v1/insight_type_config.proto#L32}
  ///
  /// [google.cloud.recommender.v1.UpdateInsightTypeConfigRequest]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/recommender_service.proto#L593}
  /// [google.cloud.recommender.v1.InsightTypeConfig]:
  /// @googleapis_reference_link{google/cloud/recommender/v1/insight_type_config.proto#L32}
  ///
  StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
  UpdateInsightTypeConfig(
      google::cloud::recommender::v1::UpdateInsightTypeConfigRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<RecommenderConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_RECOMMENDER_CLIENT_H
