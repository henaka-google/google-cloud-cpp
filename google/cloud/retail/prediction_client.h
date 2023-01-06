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
// source: google/cloud/retail/v2/prediction_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_PREDICTION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_PREDICTION_CLIENT_H

#include "google/cloud/retail/prediction_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace retail {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for making recommendation prediction.
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
class PredictionServiceClient {
 public:
  explicit PredictionServiceClient(
      std::shared_ptr<PredictionServiceConnection> connection,
      Options opts = {});
  ~PredictionServiceClient();

  ///@{
  /// @name Copy and move support
  PredictionServiceClient(PredictionServiceClient const&) = default;
  PredictionServiceClient& operator=(PredictionServiceClient const&) = default;
  PredictionServiceClient(PredictionServiceClient&&) = default;
  PredictionServiceClient& operator=(PredictionServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(PredictionServiceClient const& a,
                         PredictionServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(PredictionServiceClient const& a,
                         PredictionServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Makes a recommendation prediction.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::retail::v2::PredictRequest,google/cloud/retail/v2/prediction_service.proto#L55}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::retail::v2::PredictResponse,google/cloud/retail/v2/prediction_service.proto#L191}
  ///
  /// [google.cloud.retail.v2.PredictRequest]:
  /// @googleapis_reference_link{google/cloud/retail/v2/prediction_service.proto#L55}
  /// [google.cloud.retail.v2.PredictResponse]:
  /// @googleapis_reference_link{google/cloud/retail/v2/prediction_service.proto#L191}
  ///
  StatusOr<google::cloud::retail::v2::PredictResponse> Predict(
      google::cloud::retail::v2::PredictRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<PredictionServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_PREDICTION_CLIENT_H
