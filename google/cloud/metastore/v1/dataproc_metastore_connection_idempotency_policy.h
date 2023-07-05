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
// source: google/cloud/metastore/v1/metastore.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_DATAPROC_METASTORE_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_DATAPROC_METASTORE_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/metastore/v1/metastore.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace metastore_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataprocMetastoreConnectionIdempotencyPolicy {
 public:
  virtual ~DataprocMetastoreConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DataprocMetastoreConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListServices(
      google::cloud::metastore::v1::ListServicesRequest request);

  virtual google::cloud::Idempotency GetService(
      google::cloud::metastore::v1::GetServiceRequest const& request);

  virtual google::cloud::Idempotency CreateService(
      google::cloud::metastore::v1::CreateServiceRequest const& request);

  virtual google::cloud::Idempotency UpdateService(
      google::cloud::metastore::v1::UpdateServiceRequest const& request);

  virtual google::cloud::Idempotency DeleteService(
      google::cloud::metastore::v1::DeleteServiceRequest const& request);

  virtual google::cloud::Idempotency ListMetadataImports(
      google::cloud::metastore::v1::ListMetadataImportsRequest request);

  virtual google::cloud::Idempotency GetMetadataImport(
      google::cloud::metastore::v1::GetMetadataImportRequest const& request);

  virtual google::cloud::Idempotency CreateMetadataImport(
      google::cloud::metastore::v1::CreateMetadataImportRequest const& request);

  virtual google::cloud::Idempotency UpdateMetadataImport(
      google::cloud::metastore::v1::UpdateMetadataImportRequest const& request);

  virtual google::cloud::Idempotency ExportMetadata(
      google::cloud::metastore::v1::ExportMetadataRequest const& request);

  virtual google::cloud::Idempotency RestoreService(
      google::cloud::metastore::v1::RestoreServiceRequest const& request);

  virtual google::cloud::Idempotency ListBackups(
      google::cloud::metastore::v1::ListBackupsRequest request);

  virtual google::cloud::Idempotency GetBackup(
      google::cloud::metastore::v1::GetBackupRequest const& request);

  virtual google::cloud::Idempotency CreateBackup(
      google::cloud::metastore::v1::CreateBackupRequest const& request);

  virtual google::cloud::Idempotency DeleteBackup(
      google::cloud::metastore::v1::DeleteBackupRequest const& request);
};

std::unique_ptr<DataprocMetastoreConnectionIdempotencyPolicy>
MakeDefaultDataprocMetastoreConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_DATAPROC_METASTORE_CONNECTION_IDEMPOTENCY_POLICY_H
