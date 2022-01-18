
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-RFMXBT Metadata
//---------------------------------------------------------------------
#include "nirfmxbt_service.h"

#include <sstream>
#include <fstream>
#include <iostream>
#include <atomic>
#include <vector>
#include <server/converters.h>

namespace nirfmxbt_grpc {

  using nidevice_grpc::converters::calculate_linked_array_size;
  using nidevice_grpc::converters::convert_from_grpc;
  using nidevice_grpc::converters::convert_to_grpc;
  using nidevice_grpc::converters::MatchState;

  NiRFmxBTService::NiRFmxBTService(
      NiRFmxBTLibraryInterface* library,
      ResourceRepositorySharedPtr session_repository, 
      const NiRFmxBTFeatureToggles& feature_toggles)
      : library_(library),
      session_repository_(session_repository),
      feature_toggles_(feature_toggles)
  {
  }

  NiRFmxBTService::~NiRFmxBTService()
  {
  }

  // Returns true if it's safe to use outputs of a method with the given status.
  inline bool status_ok(int32 status)
  {
    return status >= 0;
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiRFmxBTService::Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto instrument_handle_grpc_session = request->instrument_handle();
      niRFmxInstrHandle instrument_handle = session_repository_->access_session(instrument_handle_grpc_session.id(), instrument_handle_grpc_session.name());
      int32 force_destroy;
      switch (request->force_destroy_enum_case()) {
        case nirfmxbt_grpc::CloseRequest::ForceDestroyEnumCase::kForceDestroy: {
          force_destroy = static_cast<int32>(request->force_destroy());
          break;
        }
        case nirfmxbt_grpc::CloseRequest::ForceDestroyEnumCase::kForceDestroyRaw: {
          force_destroy = static_cast<int32>(request->force_destroy_raw());
          break;
        }
        case nirfmxbt_grpc::CloseRequest::ForceDestroyEnumCase::FORCE_DESTROY_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for force_destroy was not specified or out of range");
          break;
        }
      }

      session_repository_->remove_session(instrument_handle);
      auto status = library_->Close(instrument_handle, force_destroy);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiRFmxBTService::Initialize(::grpc::ServerContext* context, const InitializeRequest* request, InitializeResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      char* resource_name = (char*)request->resource_name().c_str();
      char* option_string = (char*)request->option_string().c_str();

      int32 is_new_session {};
      auto init_lambda = [&] () {
        niRFmxInstrHandle handle_out;
        int status = library_->Initialize(resource_name, option_string, &handle_out, &is_new_session);
        return std::make_tuple(status, handle_out);
      };
      uint32_t session_id = 0;
      const std::string& grpc_device_session_name = request->session_name();
      auto cleanup_lambda = [&] (niRFmxInstrHandle id) { library_->Close(id, RFMXBT_VAL_FALSE); };
      int status = session_repository_->add_session(grpc_device_session_name, init_lambda, cleanup_lambda, session_id);
      response->set_status(status);
      if (status_ok(status)) {
        response->mutable_handle_out()->set_id(session_id);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }


  NiRFmxBTFeatureToggles::NiRFmxBTFeatureToggles(
    const nidevice_grpc::FeatureToggles& feature_toggles)
    : is_enabled(
        feature_toggles.is_feature_enabled("nirfmxbt", CodeReadiness::kNextRelease))
  {
  }
} // namespace nirfmxbt_grpc

