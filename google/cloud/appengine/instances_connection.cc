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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/instances_connection.h"
#include "google/cloud/appengine/instances_options.h"
#include "google/cloud/appengine/internal/instances_option_defaults.h"
#include "google/cloud/appengine/internal/instances_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstancesConnection::~InstancesConnection() = default;

StreamRange<google::appengine::v1::Instance> InstancesConnection::ListInstances(
    google::appengine::v1::ListInstancesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::appengine::v1::Instance>>(
      std::move(request),
      [](google::appengine::v1::ListInstancesRequest const&) {
        return StatusOr<google::appengine::v1::ListInstancesResponse>{};
      },
      [](google::appengine::v1::ListInstancesResponse const&) {
        return std::vector<google::appengine::v1::Instance>();
      });
}

StatusOr<google::appengine::v1::Instance> InstancesConnection::GetInstance(
    google::appengine::v1::GetInstanceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
InstancesConnection::DeleteInstance(
    google::appengine::v1::DeleteInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::OperationMetadataV1>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::Instance>>
InstancesConnection::DebugInstance(
    google::appengine::v1::DebugInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

namespace {
class InstancesConnectionImpl : public InstancesConnection {
 public:
  InstancesConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<appengine_internal::InstancesStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<InstancesRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<InstancesBackoffPolicyOption>()->clone()),
        polling_policy_prototype_(
            options.get<InstancesPollingPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<InstancesConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~InstancesConnectionImpl() override = default;

  StreamRange<google::appengine::v1::Instance> ListInstances(
      google::appengine::v1::ListInstancesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<InstancesRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListInstances(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::appengine::v1::Instance>>(
        std::move(request),
        [stub, retry, backoff, idempotency,
         function_name](google::appengine::v1::ListInstancesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::appengine::v1::ListInstancesRequest const& request) {
                return stub->ListInstances(context, request);
              },
              r, function_name);
        },
        [](google::appengine::v1::ListInstancesResponse r) {
          std::vector<google::appengine::v1::Instance> result(
              r.instances().size());
          auto& messages = *r.mutable_instances();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::appengine::v1::Instance> GetInstance(
      google::appengine::v1::GetInstanceRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->GetInstance(request),
        [this](grpc::ClientContext& context,
               google::appengine::v1::GetInstanceRequest const& request) {
          return stub_->GetInstance(context, request);
        },
        request, __func__);
  }

  future<StatusOr<google::appengine::v1::OperationMetadataV1>> DeleteInstance(
      google::appengine::v1::DeleteInstanceRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::appengine::v1::OperationMetadataV1>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::appengine::v1::DeleteInstanceRequest const& request) {
          return stub->AsyncDeleteInstance(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultMetadata<
            google::appengine::v1::OperationMetadataV1>,
        retry_policy(), backoff_policy(),
        idempotency_policy()->DeleteInstance(request), polling_policy(),
        __func__);
  }

  future<StatusOr<google::appengine::v1::Instance>> DebugInstance(
      google::appengine::v1::DebugInstanceRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::appengine::v1::Instance>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::appengine::v1::DebugInstanceRequest const& request) {
          return stub->AsyncDebugInstance(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::appengine::v1::Instance>,
        retry_policy(), backoff_policy(),
        idempotency_policy()->DebugInstance(request), polling_policy(),
        __func__);
  }

 private:
  std::unique_ptr<InstancesRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<InstancesRetryPolicyOption>()) {
      return options.get<InstancesRetryPolicyOption>()->clone();
    }
    return retry_policy_prototype_->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<InstancesBackoffPolicyOption>()) {
      return options.get<InstancesBackoffPolicyOption>()->clone();
    }
    return backoff_policy_prototype_->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<InstancesPollingPolicyOption>()) {
      return options.get<InstancesPollingPolicyOption>()->clone();
    }
    return polling_policy_prototype_->clone();
  }

  std::unique_ptr<InstancesConnectionIdempotencyPolicy> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<InstancesConnectionIdempotencyPolicyOption>()) {
      return options.get<InstancesConnectionIdempotencyPolicyOption>()->clone();
    }
    return idempotency_policy_->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<appengine_internal::InstancesStub> stub_;
  std::unique_ptr<InstancesRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<InstancesConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<InstancesConnection> MakeInstancesConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 InstancesPolicyOptionList>(options, __func__);
  options = appengine_internal::InstancesDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      appengine_internal::CreateDefaultInstancesStub(background->cq(), options);
  return std::make_shared<InstancesConnectionImpl>(std::move(background),
                                                   std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<appengine::InstancesConnection> MakeInstancesConnection(
    std::shared_ptr<InstancesStub> stub, Options options) {
  options = InstancesDefaultOptions(std::move(options));
  return std::make_shared<appengine::InstancesConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google
