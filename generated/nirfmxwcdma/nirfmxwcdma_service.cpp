
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-rfmxwcdma Metadata
//---------------------------------------------------------------------
#include "nirfmxwcdma_service.h"

#include <sstream>
#include <fstream>
#include <iostream>
#include <atomic>
#include <vector>
#include <server/converters.h>

namespace nirfmxwcdma_grpc {

  using nidevice_grpc::converters::allocate_output_storage;
  using nidevice_grpc::converters::calculate_linked_array_size;
  using nidevice_grpc::converters::convert_from_grpc;
  using nidevice_grpc::converters::convert_to_grpc;
  using nidevice_grpc::converters::MatchState;

  const auto kErrorReadBufferTooSmall = -200229;
  const auto kWarningCAPIStringTruncatedToFitBuffer = 200026;

  NiRFmxWCDMAService::NiRFmxWCDMAService(
      NiRFmxWCDMALibraryInterface* library,
      ResourceRepositorySharedPtr resource_repository,
      const NiRFmxWCDMAFeatureToggles& feature_toggles)
      : library_(library),
      session_repository_(resource_repository),
      feature_toggles_(feature_toggles)
  {
  }

  NiRFmxWCDMAService::~NiRFmxWCDMAService()
  {
  }

  // Returns true if it's safe to use outputs of a method with the given status.
  inline bool status_ok(int32 status)
  {
    return status >= 0;
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiRFmxWCDMAService::Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto instrument_grpc_session = request->instrument();
      niRFmxInstrHandle instrument = session_repository_->access_session(instrument_grpc_session.name());
      int32 force_destroy = request->force_destroy();
      session_repository_->remove_session(instrument_grpc_session.name());
      auto status = library_->Close(instrument, force_destroy);
      if (!status_ok(status)) {
        return ConvertApiErrorStatusForNiRFmxInstrHandle(context, status, instrument);
      }
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::NonDriverException& ex) {
      return ex.GetStatus();
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiRFmxWCDMAService::GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto instrument_grpc_session = request->instrument();
      niRFmxInstrHandle instrument = session_repository_->access_session(instrument_grpc_session.name());

      while (true) {
        auto status = library_->GetError(instrument, nullptr, 0, nullptr);
        if (!status_ok(status)) {
          return ConvertApiErrorStatusForNiRFmxInstrHandle(context, status, instrument);
        }
        int32 error_description_buffer_size = status;

        int32 error_code {};
        std::string error_description;
        if (error_description_buffer_size > 0) {
            error_description.resize(error_description_buffer_size - 1);
        }
        status = library_->GetError(instrument, &error_code, error_description_buffer_size, (char*)error_description.data());
        if (status == kErrorReadBufferTooSmall || status == kWarningCAPIStringTruncatedToFitBuffer || status > static_cast<decltype(status)>(error_description_buffer_size)) {
          // buffer is now too small, try again
          continue;
        }
        if (!status_ok(status)) {
          return ConvertApiErrorStatusForNiRFmxInstrHandle(context, status, instrument);
        }
        response->set_status(status);
        response->set_error_code(error_code);
        std::string error_description_utf8;
        convert_to_grpc(error_description, &error_description_utf8);
        response->set_error_description(error_description_utf8);
        nidevice_grpc::converters::trim_trailing_nulls(*(response->mutable_error_description()));
        return ::grpc::Status::OK;
      }
    }
    catch (nidevice_grpc::NonDriverException& ex) {
      return ex.GetStatus();
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiRFmxWCDMAService::GetErrorString(::grpc::ServerContext* context, const GetErrorStringRequest* request, GetErrorStringResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto instrument_grpc_session = request->instrument();
      niRFmxInstrHandle instrument = session_repository_->access_session(instrument_grpc_session.name());
      int32 error_code = request->error_code();

      while (true) {
        auto status = library_->GetErrorString(instrument, error_code, 0, nullptr);
        if (!status_ok(status)) {
          return ConvertApiErrorStatusForNiRFmxInstrHandle(context, status, instrument);
        }
        int32 error_description_buffer_size = status;

        std::string error_description;
        if (error_description_buffer_size > 0) {
            error_description.resize(error_description_buffer_size - 1);
        }
        status = library_->GetErrorString(instrument, error_code, error_description_buffer_size, (char*)error_description.data());
        if (status == kErrorReadBufferTooSmall || status == kWarningCAPIStringTruncatedToFitBuffer || status > static_cast<decltype(status)>(error_description_buffer_size)) {
          // buffer is now too small, try again
          continue;
        }
        if (!status_ok(status)) {
          return ConvertApiErrorStatusForNiRFmxInstrHandle(context, status, instrument);
        }
        response->set_status(status);
        std::string error_description_utf8;
        convert_to_grpc(error_description, &error_description_utf8);
        response->set_error_description(error_description_utf8);
        nidevice_grpc::converters::trim_trailing_nulls(*(response->mutable_error_description()));
        return ::grpc::Status::OK;
      }
    }
    catch (nidevice_grpc::NonDriverException& ex) {
      return ex.GetStatus();
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiRFmxWCDMAService::Initialize(::grpc::ServerContext* context, const InitializeRequest* request, InitializeResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto resource_name_mbcs = convert_from_grpc<std::string>(request->resource_name());
      char* resource_name = (char*)resource_name_mbcs.c_str();
      auto option_string_mbcs = convert_from_grpc<std::string>(request->option_string());
      char* option_string = (char*)option_string_mbcs.c_str();

      int32 is_new_session {};
      auto init_lambda = [&] () {
        niRFmxInstrHandle instrument;
        auto status = library_->Initialize(resource_name, option_string, &instrument, &is_new_session);
        return std::make_tuple(status, instrument);
      };
      std::string grpc_device_session_name = request->session_name();
      auto cleanup_lambda = [&] (niRFmxInstrHandle id) { library_->Close(id, RFMXWCDMA_VAL_FALSE); };
      int status = session_repository_->add_session(grpc_device_session_name, init_lambda, cleanup_lambda);
      if (!status_ok(status)) {
        return ConvertApiErrorStatusForNiRFmxInstrHandle(context, status, 0);
      }
      response->set_status(status);
      response->mutable_instrument()->set_name(grpc_device_session_name);
      response->set_is_new_session(is_new_session);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::NonDriverException& ex) {
      return ex.GetStatus();
    }
  }


  NiRFmxWCDMAFeatureToggles::NiRFmxWCDMAFeatureToggles(
    const nidevice_grpc::FeatureToggles& feature_toggles)
    : is_enabled(
        feature_toggles.is_feature_enabled("nirfmxwcdma", CodeReadiness::kNextRelease))
  {
  }
} // namespace nirfmxwcdma_grpc

