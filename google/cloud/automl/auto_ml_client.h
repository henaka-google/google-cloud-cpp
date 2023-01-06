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
// source: google/cloud/automl/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_AUTO_ML_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_AUTO_ML_CLIENT_H

#include "google/cloud/automl/auto_ml_connection.h"
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
namespace automl {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// AutoML Server API.
///
/// The resource names are assigned by the server.
/// The server never reuses names that it has created after the resources with
/// those names are deleted.
///
/// An ID of a resource is the last element of the item's resource name. For
/// `projects/{project_id}/locations/{location_id}/datasets/{dataset_id}`, then
/// the id for the item is `{dataset_id}`.
///
/// Currently the only supported `location_id` is "us-central1".
///
/// On any input that is documented to expect a string parameter in
/// snake_case or dash-case, either of those cases is accepted.
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
class AutoMlClient {
 public:
  explicit AutoMlClient(std::shared_ptr<AutoMlConnection> connection,
                        Options opts = {});
  ~AutoMlClient();

  ///@{
  /// @name Copy and move support
  AutoMlClient(AutoMlClient const&) = default;
  AutoMlClient& operator=(AutoMlClient const&) = default;
  AutoMlClient(AutoMlClient&&) = default;
  AutoMlClient& operator=(AutoMlClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AutoMlClient const& a, AutoMlClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AutoMlClient const& a, AutoMlClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates a dataset.
  ///
  /// @param parent  Required. The resource name of the project to create the
  /// dataset for.
  /// @param dataset  Required. The dataset to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Dataset,google/cloud/automl/v1/dataset.proto#L34}
  ///
  /// [google.cloud.automl.v1.CreateDatasetRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L294}
  /// [google.cloud.automl.v1.Dataset]:
  /// @googleapis_reference_link{google/cloud/automl/v1/dataset.proto#L34}
  ///
  future<StatusOr<google::cloud::automl::v1::Dataset>> CreateDataset(
      std::string const& parent,
      google::cloud::automl::v1::Dataset const& dataset, Options opts = {});

  ///
  /// Creates a dataset.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::CreateDatasetRequest,google/cloud/automl/v1/service.proto#L294}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Dataset,google/cloud/automl/v1/dataset.proto#L34}
  ///
  /// [google.cloud.automl.v1.CreateDatasetRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L294}
  /// [google.cloud.automl.v1.Dataset]:
  /// @googleapis_reference_link{google/cloud/automl/v1/dataset.proto#L34}
  ///
  future<StatusOr<google::cloud::automl::v1::Dataset>> CreateDataset(
      google::cloud::automl::v1::CreateDatasetRequest const& request,
      Options opts = {});

  ///
  /// Gets a dataset.
  ///
  /// @param name  Required. The resource name of the dataset to retrieve.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Dataset,google/cloud/automl/v1/dataset.proto#L34}
  ///
  /// [google.cloud.automl.v1.GetDatasetRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L308}
  /// [google.cloud.automl.v1.Dataset]:
  /// @googleapis_reference_link{google/cloud/automl/v1/dataset.proto#L34}
  ///
  StatusOr<google::cloud::automl::v1::Dataset> GetDataset(
      std::string const& name, Options opts = {});

  ///
  /// Gets a dataset.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::GetDatasetRequest,google/cloud/automl/v1/service.proto#L308}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Dataset,google/cloud/automl/v1/dataset.proto#L34}
  ///
  /// [google.cloud.automl.v1.GetDatasetRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L308}
  /// [google.cloud.automl.v1.Dataset]:
  /// @googleapis_reference_link{google/cloud/automl/v1/dataset.proto#L34}
  ///
  StatusOr<google::cloud::automl::v1::Dataset> GetDataset(
      google::cloud::automl::v1::GetDatasetRequest const& request,
      Options opts = {});

  ///
  /// Lists datasets in a project.
  ///
  /// @param parent  Required. The resource name of the project from which to
  /// list datasets.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Dataset,google/cloud/automl/v1/dataset.proto#L34}
  ///
  /// [google.cloud.automl.v1.ListDatasetsRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L319}
  /// [google.cloud.automl.v1.Dataset]:
  /// @googleapis_reference_link{google/cloud/automl/v1/dataset.proto#L34}
  ///
  StreamRange<google::cloud::automl::v1::Dataset> ListDatasets(
      std::string const& parent, Options opts = {});

  ///
  /// Lists datasets in a project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::ListDatasetsRequest,google/cloud/automl/v1/service.proto#L319}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Dataset,google/cloud/automl/v1/dataset.proto#L34}
  ///
  /// [google.cloud.automl.v1.ListDatasetsRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L319}
  /// [google.cloud.automl.v1.Dataset]:
  /// @googleapis_reference_link{google/cloud/automl/v1/dataset.proto#L34}
  ///
  StreamRange<google::cloud::automl::v1::Dataset> ListDatasets(
      google::cloud::automl::v1::ListDatasetsRequest request,
      Options opts = {});

  ///
  /// Updates a dataset.
  ///
  /// @param dataset  Required. The dataset which replaces the resource on the
  /// server.
  /// @param update_mask  Required. The update mask applies to the resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Dataset,google/cloud/automl/v1/dataset.proto#L34}
  ///
  /// [google.cloud.automl.v1.UpdateDatasetRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L359}
  /// [google.cloud.automl.v1.Dataset]:
  /// @googleapis_reference_link{google/cloud/automl/v1/dataset.proto#L34}
  ///
  StatusOr<google::cloud::automl::v1::Dataset> UpdateDataset(
      google::cloud::automl::v1::Dataset const& dataset,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates a dataset.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::UpdateDatasetRequest,google/cloud/automl/v1/service.proto#L359}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Dataset,google/cloud/automl/v1/dataset.proto#L34}
  ///
  /// [google.cloud.automl.v1.UpdateDatasetRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L359}
  /// [google.cloud.automl.v1.Dataset]:
  /// @googleapis_reference_link{google/cloud/automl/v1/dataset.proto#L34}
  ///
  StatusOr<google::cloud::automl::v1::Dataset> UpdateDataset(
      google::cloud::automl::v1::UpdateDatasetRequest const& request,
      Options opts = {});

  ///
  /// Deletes a dataset and all of its contents.
  /// Returns empty response in the
  /// [response][google.longrunning.Operation.response] field when it completes,
  /// and `delete_details` in the
  /// [metadata][google.longrunning.Operation.metadata] field.
  ///
  /// @param name  Required. The resource name of the dataset to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.DeleteDatasetRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L368}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeleteDataset(
      std::string const& name, Options opts = {});

  ///
  /// Deletes a dataset and all of its contents.
  /// Returns empty response in the
  /// [response][google.longrunning.Operation.response] field when it completes,
  /// and `delete_details` in the
  /// [metadata][google.longrunning.Operation.metadata] field.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::DeleteDatasetRequest,google/cloud/automl/v1/service.proto#L368}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.DeleteDatasetRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L368}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeleteDataset(
      google::cloud::automl::v1::DeleteDatasetRequest const& request,
      Options opts = {});

  ///
  /// Imports data into a dataset.
  /// For Tables this method can only be called on an empty Dataset.
  ///
  /// For Tables:
  /// *   A
  /// [schema_inference_version][google.cloud.automl.v1.InputConfig.params]
  ///     parameter must be explicitly set.
  /// Returns an empty response in the
  /// [response][google.longrunning.Operation.response] field when it completes.
  ///
  /// @param name  Required. Dataset name. Dataset must already exist. All
  /// imported
  ///  annotations and examples will be added.
  /// @param input_config  Required. The desired input location and its domain
  /// specific semantics,
  ///  if any.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.ImportDataRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L379}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ImportData(
      std::string const& name,
      google::cloud::automl::v1::InputConfig const& input_config,
      Options opts = {});

  ///
  /// Imports data into a dataset.
  /// For Tables this method can only be called on an empty Dataset.
  ///
  /// For Tables:
  /// *   A
  /// [schema_inference_version][google.cloud.automl.v1.InputConfig.params]
  ///     parameter must be explicitly set.
  /// Returns an empty response in the
  /// [response][google.longrunning.Operation.response] field when it completes.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::ImportDataRequest,google/cloud/automl/v1/service.proto#L379}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.ImportDataRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L379}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ImportData(
      google::cloud::automl::v1::ImportDataRequest const& request,
      Options opts = {});

  ///
  /// Exports dataset's data to the provided output location.
  /// Returns an empty response in the
  /// [response][google.longrunning.Operation.response] field when it completes.
  ///
  /// @param name  Required. The resource name of the dataset.
  /// @param output_config  Required. The desired output location.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.ExportDataRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L395}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ExportData(
      std::string const& name,
      google::cloud::automl::v1::OutputConfig const& output_config,
      Options opts = {});

  ///
  /// Exports dataset's data to the provided output location.
  /// Returns an empty response in the
  /// [response][google.longrunning.Operation.response] field when it completes.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::ExportDataRequest,google/cloud/automl/v1/service.proto#L395}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.ExportDataRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L395}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ExportData(
      google::cloud::automl::v1::ExportDataRequest const& request,
      Options opts = {});

  ///
  /// Gets an annotation spec.
  ///
  /// @param name  Required. The resource name of the annotation spec to
  /// retrieve.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::AnnotationSpec,google/cloud/automl/v1/annotation_spec.proto#L29}
  ///
  /// [google.cloud.automl.v1.GetAnnotationSpecRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L409}
  /// [google.cloud.automl.v1.AnnotationSpec]:
  /// @googleapis_reference_link{google/cloud/automl/v1/annotation_spec.proto#L29}
  ///
  StatusOr<google::cloud::automl::v1::AnnotationSpec> GetAnnotationSpec(
      std::string const& name, Options opts = {});

  ///
  /// Gets an annotation spec.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::GetAnnotationSpecRequest,google/cloud/automl/v1/service.proto#L409}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::AnnotationSpec,google/cloud/automl/v1/annotation_spec.proto#L29}
  ///
  /// [google.cloud.automl.v1.GetAnnotationSpecRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L409}
  /// [google.cloud.automl.v1.AnnotationSpec]:
  /// @googleapis_reference_link{google/cloud/automl/v1/annotation_spec.proto#L29}
  ///
  StatusOr<google::cloud::automl::v1::AnnotationSpec> GetAnnotationSpec(
      google::cloud::automl::v1::GetAnnotationSpecRequest const& request,
      Options opts = {});

  ///
  /// Creates a model.
  /// Returns a Model in the [response][google.longrunning.Operation.response]
  /// field when it completes.
  /// When you create a model, several model evaluations are created for it:
  /// a global evaluation, and one evaluation for each annotation spec.
  ///
  /// @param parent  Required. Resource name of the parent project where the
  /// model is being created.
  /// @param model  Required. The model to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Model,google/cloud/automl/v1/model.proto#L33}
  ///
  /// [google.cloud.automl.v1.CreateModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L420}
  /// [google.cloud.automl.v1.Model]:
  /// @googleapis_reference_link{google/cloud/automl/v1/model.proto#L33}
  ///
  future<StatusOr<google::cloud::automl::v1::Model>> CreateModel(
      std::string const& parent, google::cloud::automl::v1::Model const& model,
      Options opts = {});

  ///
  /// Creates a model.
  /// Returns a Model in the [response][google.longrunning.Operation.response]
  /// field when it completes.
  /// When you create a model, several model evaluations are created for it:
  /// a global evaluation, and one evaluation for each annotation spec.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::CreateModelRequest,google/cloud/automl/v1/service.proto#L420}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Model,google/cloud/automl/v1/model.proto#L33}
  ///
  /// [google.cloud.automl.v1.CreateModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L420}
  /// [google.cloud.automl.v1.Model]:
  /// @googleapis_reference_link{google/cloud/automl/v1/model.proto#L33}
  ///
  future<StatusOr<google::cloud::automl::v1::Model>> CreateModel(
      google::cloud::automl::v1::CreateModelRequest const& request,
      Options opts = {});

  ///
  /// Gets a model.
  ///
  /// @param name  Required. Resource name of the model.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Model,google/cloud/automl/v1/model.proto#L33}
  ///
  /// [google.cloud.automl.v1.GetModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L434}
  /// [google.cloud.automl.v1.Model]:
  /// @googleapis_reference_link{google/cloud/automl/v1/model.proto#L33}
  ///
  StatusOr<google::cloud::automl::v1::Model> GetModel(std::string const& name,
                                                      Options opts = {});

  ///
  /// Gets a model.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::GetModelRequest,google/cloud/automl/v1/service.proto#L434}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Model,google/cloud/automl/v1/model.proto#L33}
  ///
  /// [google.cloud.automl.v1.GetModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L434}
  /// [google.cloud.automl.v1.Model]:
  /// @googleapis_reference_link{google/cloud/automl/v1/model.proto#L33}
  ///
  StatusOr<google::cloud::automl::v1::Model> GetModel(
      google::cloud::automl::v1::GetModelRequest const& request,
      Options opts = {});

  ///
  /// Lists models.
  ///
  /// @param parent  Required. Resource name of the project, from which to list
  /// the models.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Model,google/cloud/automl/v1/model.proto#L33}
  ///
  /// [google.cloud.automl.v1.ListModelsRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L445}
  /// [google.cloud.automl.v1.Model]:
  /// @googleapis_reference_link{google/cloud/automl/v1/model.proto#L33}
  ///
  StreamRange<google::cloud::automl::v1::Model> ListModels(
      std::string const& parent, Options opts = {});

  ///
  /// Lists models.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::ListModelsRequest,google/cloud/automl/v1/service.proto#L445}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Model,google/cloud/automl/v1/model.proto#L33}
  ///
  /// [google.cloud.automl.v1.ListModelsRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L445}
  /// [google.cloud.automl.v1.Model]:
  /// @googleapis_reference_link{google/cloud/automl/v1/model.proto#L33}
  ///
  StreamRange<google::cloud::automl::v1::Model> ListModels(
      google::cloud::automl::v1::ListModelsRequest request, Options opts = {});

  ///
  /// Deletes a model.
  /// Returns `google.protobuf.Empty` in the
  /// [response][google.longrunning.Operation.response] field when it completes,
  /// and `delete_details` in the
  /// [metadata][google.longrunning.Operation.metadata] field.
  ///
  /// @param name  Required. Resource name of the model being deleted.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.DeleteModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L486}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeleteModel(
      std::string const& name, Options opts = {});

  ///
  /// Deletes a model.
  /// Returns `google.protobuf.Empty` in the
  /// [response][google.longrunning.Operation.response] field when it completes,
  /// and `delete_details` in the
  /// [metadata][google.longrunning.Operation.metadata] field.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::DeleteModelRequest,google/cloud/automl/v1/service.proto#L486}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.DeleteModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L486}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeleteModel(
      google::cloud::automl::v1::DeleteModelRequest const& request,
      Options opts = {});

  ///
  /// Updates a model.
  ///
  /// @param model  Required. The model which replaces the resource on the
  /// server.
  /// @param update_mask  Required. The update mask applies to the resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Model,google/cloud/automl/v1/model.proto#L33}
  ///
  /// [google.cloud.automl.v1.UpdateModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L497}
  /// [google.cloud.automl.v1.Model]:
  /// @googleapis_reference_link{google/cloud/automl/v1/model.proto#L33}
  ///
  StatusOr<google::cloud::automl::v1::Model> UpdateModel(
      google::cloud::automl::v1::Model const& model,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates a model.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::UpdateModelRequest,google/cloud/automl/v1/service.proto#L497}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::Model,google/cloud/automl/v1/model.proto#L33}
  ///
  /// [google.cloud.automl.v1.UpdateModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L497}
  /// [google.cloud.automl.v1.Model]:
  /// @googleapis_reference_link{google/cloud/automl/v1/model.proto#L33}
  ///
  StatusOr<google::cloud::automl::v1::Model> UpdateModel(
      google::cloud::automl::v1::UpdateModelRequest const& request,
      Options opts = {});

  ///
  /// Deploys a model. If a model is already deployed, deploying it with the
  /// same parameters has no effect. Deploying with different parametrs
  /// (as e.g. changing
  /// [node_number][google.cloud.automl.v1p1beta.ImageObjectDetectionModelDeploymentMetadata.node_number])
  ///  will reset the deployment state without pausing the model's availability.
  ///
  /// Only applicable for Text Classification, Image Object Detection , Tables,
  /// and Image Segmentation; all other domains manage deployment automatically.
  ///
  /// Returns an empty response in the
  /// [response][google.longrunning.Operation.response] field when it completes.
  ///
  /// @param name  Required. Resource name of the model to deploy.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.DeployModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L506}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeployModel(
      std::string const& name, Options opts = {});

  ///
  /// Deploys a model. If a model is already deployed, deploying it with the
  /// same parameters has no effect. Deploying with different parametrs
  /// (as e.g. changing
  /// [node_number][google.cloud.automl.v1p1beta.ImageObjectDetectionModelDeploymentMetadata.node_number])
  ///  will reset the deployment state without pausing the model's availability.
  ///
  /// Only applicable for Text Classification, Image Object Detection , Tables,
  /// and Image Segmentation; all other domains manage deployment automatically.
  ///
  /// Returns an empty response in the
  /// [response][google.longrunning.Operation.response] field when it completes.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::DeployModelRequest,google/cloud/automl/v1/service.proto#L506}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.DeployModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L506}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeployModel(
      google::cloud::automl::v1::DeployModelRequest const& request,
      Options opts = {});

  ///
  /// Undeploys a model. If the model is not deployed this method has no effect.
  ///
  /// Only applicable for Text Classification, Image Object Detection and
  /// Tables; all other domains manage deployment automatically.
  ///
  /// Returns an empty response in the
  /// [response][google.longrunning.Operation.response] field when it completes.
  ///
  /// @param name  Required. Resource name of the model to undeploy.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.UndeployModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L526}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> UndeployModel(
      std::string const& name, Options opts = {});

  ///
  /// Undeploys a model. If the model is not deployed this method has no effect.
  ///
  /// Only applicable for Text Classification, Image Object Detection and
  /// Tables; all other domains manage deployment automatically.
  ///
  /// Returns an empty response in the
  /// [response][google.longrunning.Operation.response] field when it completes.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::UndeployModelRequest,google/cloud/automl/v1/service.proto#L526}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.UndeployModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L526}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> UndeployModel(
      google::cloud::automl::v1::UndeployModelRequest const& request,
      Options opts = {});

  ///
  /// Exports a trained, "export-able", model to a user specified Google Cloud
  /// Storage location. A model is considered export-able if and only if it has
  /// an export format defined for it in
  /// [ModelExportOutputConfig][google.cloud.automl.v1.ModelExportOutputConfig].
  ///
  /// Returns an empty response in the
  /// [response][google.longrunning.Operation.response] field when it completes.
  ///
  /// @param name  Required. The resource name of the model to export.
  /// @param output_config  Required. The desired output location and
  /// configuration.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.ExportModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L539}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ExportModel(
      std::string const& name,
      google::cloud::automl::v1::ModelExportOutputConfig const& output_config,
      Options opts = {});

  ///
  /// Exports a trained, "export-able", model to a user specified Google Cloud
  /// Storage location. A model is considered export-able if and only if it has
  /// an export format defined for it in
  /// [ModelExportOutputConfig][google.cloud.automl.v1.ModelExportOutputConfig].
  ///
  /// Returns an empty response in the
  /// [response][google.longrunning.Operation.response] field when it completes.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::ExportModelRequest,google/cloud/automl/v1/service.proto#L539}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::OperationMetadata,google/cloud/automl/v1/operations.proto#L31}
  ///
  /// [google.cloud.automl.v1.ExportModelRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L539}
  /// [google.cloud.automl.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/automl/v1/operations.proto#L31}
  ///
  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ExportModel(
      google::cloud::automl::v1::ExportModelRequest const& request,
      Options opts = {});

  ///
  /// Gets a model evaluation.
  ///
  /// @param name  Required. Resource name for the model evaluation.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::ModelEvaluation,google/cloud/automl/v1/model_evaluation.proto#L35}
  ///
  /// [google.cloud.automl.v1.GetModelEvaluationRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L553}
  /// [google.cloud.automl.v1.ModelEvaluation]:
  /// @googleapis_reference_link{google/cloud/automl/v1/model_evaluation.proto#L35}
  ///
  StatusOr<google::cloud::automl::v1::ModelEvaluation> GetModelEvaluation(
      std::string const& name, Options opts = {});

  ///
  /// Gets a model evaluation.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::GetModelEvaluationRequest,google/cloud/automl/v1/service.proto#L553}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::ModelEvaluation,google/cloud/automl/v1/model_evaluation.proto#L35}
  ///
  /// [google.cloud.automl.v1.GetModelEvaluationRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L553}
  /// [google.cloud.automl.v1.ModelEvaluation]:
  /// @googleapis_reference_link{google/cloud/automl/v1/model_evaluation.proto#L35}
  ///
  StatusOr<google::cloud::automl::v1::ModelEvaluation> GetModelEvaluation(
      google::cloud::automl::v1::GetModelEvaluationRequest const& request,
      Options opts = {});

  ///
  /// Lists model evaluations.
  ///
  /// @param parent  Required. Resource name of the model to list the model
  /// evaluations for.
  ///  If modelId is set as "-", this will list model evaluations from across
  ///  all models of the parent location.
  /// @param filter  Required. An expression for filtering the results of the
  /// request.
  ///    * `annotation_spec_id` - for =, !=  or existence. See example below for
  ///                           the last.
  ///  Some examples of using the filter are:
  ///    * `annotation_spec_id!=4` --> The model evaluation was done for
  ///                              annotation spec with ID different than 4.
  ///    * `NOT annotation_spec_id:*` --> The model evaluation was done for
  ///                                 aggregate of all annotation specs.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::ModelEvaluation,google/cloud/automl/v1/model_evaluation.proto#L35}
  ///
  /// [google.cloud.automl.v1.ListModelEvaluationsRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L564}
  /// [google.cloud.automl.v1.ModelEvaluation]:
  /// @googleapis_reference_link{google/cloud/automl/v1/model_evaluation.proto#L35}
  ///
  StreamRange<google::cloud::automl::v1::ModelEvaluation> ListModelEvaluations(
      std::string const& parent, std::string const& filter, Options opts = {});

  ///
  /// Lists model evaluations.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::automl::v1::ListModelEvaluationsRequest,google/cloud/automl/v1/service.proto#L564}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::automl::v1::ModelEvaluation,google/cloud/automl/v1/model_evaluation.proto#L35}
  ///
  /// [google.cloud.automl.v1.ListModelEvaluationsRequest]:
  /// @googleapis_reference_link{google/cloud/automl/v1/service.proto#L564}
  /// [google.cloud.automl.v1.ModelEvaluation]:
  /// @googleapis_reference_link{google/cloud/automl/v1/model_evaluation.proto#L35}
  ///
  StreamRange<google::cloud::automl::v1::ModelEvaluation> ListModelEvaluations(
      google::cloud::automl::v1::ListModelEvaluationsRequest request,
      Options opts = {});

 private:
  std::shared_ptr<AutoMlConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_AUTO_ML_CLIENT_H
