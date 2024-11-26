
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-RFMXBLUETOOTH Metadata
//---------------------------------------------------------------------
#ifndef NIRFMXBLUETOOTH_GRPC_SERVICE_H
#define NIRFMXBLUETOOTH_GRPC_SERVICE_H

#include <nirfmxbluetooth.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nirfmxbluetooth_library_interface.h"

namespace nirfmxbluetooth_grpc {

struct NiRFmxBluetoothFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiRFmxBluetoothFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiRFmxBluetoothService final : public NiRFmxBluetooth::Service {
public:
  using LibrarySharedPtr = std::shared_ptr<NiRFmxBluetoothLibraryInterface>;
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>;
  using ViSessionResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>;

  NiRFmxBluetoothService(
    LibrarySharedPtr library,
    ResourceRepositorySharedPtr resource_repository,
    ViSessionResourceRepositorySharedPtr vi_session_resource_repository,
    const NiRFmxBluetoothFeatureToggles& feature_toggles = {});
  virtual ~NiRFmxBluetoothService();

  ::grpc::Status ACPCfgAveraging(::grpc::ServerContext* context, const ACPCfgAveragingRequest* request, ACPCfgAveragingResponse* response) override;
  ::grpc::Status ACPCfgBurstSynchronizationType(::grpc::ServerContext* context, const ACPCfgBurstSynchronizationTypeRequest* request, ACPCfgBurstSynchronizationTypeResponse* response) override;
  ::grpc::Status ACPCfgNumberOfOffsets(::grpc::ServerContext* context, const ACPCfgNumberOfOffsetsRequest* request, ACPCfgNumberOfOffsetsResponse* response) override;
  ::grpc::Status ACPCfgOffsetChannelMode(::grpc::ServerContext* context, const ACPCfgOffsetChannelModeRequest* request, ACPCfgOffsetChannelModeResponse* response) override;
  ::grpc::Status ACPFetchAbsolutePowerTrace(::grpc::ServerContext* context, const ACPFetchAbsolutePowerTraceRequest* request, ACPFetchAbsolutePowerTraceResponse* response) override;
  ::grpc::Status ACPFetchMaskTrace(::grpc::ServerContext* context, const ACPFetchMaskTraceRequest* request, ACPFetchMaskTraceResponse* response) override;
  ::grpc::Status ACPFetchMeasurementStatus(::grpc::ServerContext* context, const ACPFetchMeasurementStatusRequest* request, ACPFetchMeasurementStatusResponse* response) override;
  ::grpc::Status ACPFetchOffsetMeasurement(::grpc::ServerContext* context, const ACPFetchOffsetMeasurementRequest* request, ACPFetchOffsetMeasurementResponse* response) override;
  ::grpc::Status ACPFetchOffsetMeasurementArray(::grpc::ServerContext* context, const ACPFetchOffsetMeasurementArrayRequest* request, ACPFetchOffsetMeasurementArrayResponse* response) override;
  ::grpc::Status ACPFetchReferenceChannelPower(::grpc::ServerContext* context, const ACPFetchReferenceChannelPowerRequest* request, ACPFetchReferenceChannelPowerResponse* response) override;
  ::grpc::Status ACPFetchSpectrum(::grpc::ServerContext* context, const ACPFetchSpectrumRequest* request, ACPFetchSpectrumResponse* response) override;
  ::grpc::Status AbortMeasurements(::grpc::ServerContext* context, const AbortMeasurementsRequest* request, AbortMeasurementsResponse* response) override;
  ::grpc::Status AnalyzeIQ1Waveform(::grpc::ServerContext* context, const AnalyzeIQ1WaveformRequest* request, AnalyzeIQ1WaveformResponse* response) override;
  ::grpc::Status AnalyzeIQ1WaveformSplit(::grpc::ServerContext* context, const AnalyzeIQ1WaveformSplitRequest* request, AnalyzeIQ1WaveformSplitResponse* response) override;
  ::grpc::Status AutoDetectSignal(::grpc::ServerContext* context, const AutoDetectSignalRequest* request, AutoDetectSignalResponse* response) override;
  ::grpc::Status AutoLevel(::grpc::ServerContext* context, const AutoLevelRequest* request, AutoLevelResponse* response) override;
  ::grpc::Status BuildOffsetString(::grpc::ServerContext* context, const BuildOffsetStringRequest* request, BuildOffsetStringResponse* response) override;
  ::grpc::Status BuildSignalString(::grpc::ServerContext* context, const BuildSignalStringRequest* request, BuildSignalStringResponse* response) override;
  ::grpc::Status BuildSlotString(::grpc::ServerContext* context, const BuildSlotStringRequest* request, BuildSlotStringResponse* response) override;
  ::grpc::Status CfgChannelNumber(::grpc::ServerContext* context, const CfgChannelNumberRequest* request, CfgChannelNumberResponse* response) override;
  ::grpc::Status CfgDataRate(::grpc::ServerContext* context, const CfgDataRateRequest* request, CfgDataRateResponse* response) override;
  ::grpc::Status CfgDigitalEdgeTrigger(::grpc::ServerContext* context, const CfgDigitalEdgeTriggerRequest* request, CfgDigitalEdgeTriggerResponse* response) override;
  ::grpc::Status CfgExternalAttenuation(::grpc::ServerContext* context, const CfgExternalAttenuationRequest* request, CfgExternalAttenuationResponse* response) override;
  ::grpc::Status CfgFrequency(::grpc::ServerContext* context, const CfgFrequencyRequest* request, CfgFrequencyResponse* response) override;
  ::grpc::Status CfgFrequencyChannelNumber(::grpc::ServerContext* context, const CfgFrequencyChannelNumberRequest* request, CfgFrequencyChannelNumberResponse* response) override;
  ::grpc::Status CfgFrequencyReference(::grpc::ServerContext* context, const CfgFrequencyReferenceRequest* request, CfgFrequencyReferenceResponse* response) override;
  ::grpc::Status CfgIQPowerEdgeTrigger(::grpc::ServerContext* context, const CfgIQPowerEdgeTriggerRequest* request, CfgIQPowerEdgeTriggerResponse* response) override;
  ::grpc::Status CfgLEDirectionFinding(::grpc::ServerContext* context, const CfgLEDirectionFindingRequest* request, CfgLEDirectionFindingResponse* response) override;
  ::grpc::Status CfgMechanicalAttenuation(::grpc::ServerContext* context, const CfgMechanicalAttenuationRequest* request, CfgMechanicalAttenuationResponse* response) override;
  ::grpc::Status CfgPacketType(::grpc::ServerContext* context, const CfgPacketTypeRequest* request, CfgPacketTypeResponse* response) override;
  ::grpc::Status CfgPayloadBitPattern(::grpc::ServerContext* context, const CfgPayloadBitPatternRequest* request, CfgPayloadBitPatternResponse* response) override;
  ::grpc::Status CfgPayloadLength(::grpc::ServerContext* context, const CfgPayloadLengthRequest* request, CfgPayloadLengthResponse* response) override;
  ::grpc::Status CfgRF(::grpc::ServerContext* context, const CfgRFRequest* request, CfgRFResponse* response) override;
  ::grpc::Status CfgRFAttenuation(::grpc::ServerContext* context, const CfgRFAttenuationRequest* request, CfgRFAttenuationResponse* response) override;
  ::grpc::Status CfgReferenceLevel(::grpc::ServerContext* context, const CfgReferenceLevelRequest* request, CfgReferenceLevelResponse* response) override;
  ::grpc::Status CfgSoftwareEdgeTrigger(::grpc::ServerContext* context, const CfgSoftwareEdgeTriggerRequest* request, CfgSoftwareEdgeTriggerResponse* response) override;
  ::grpc::Status CheckMeasurementStatus(::grpc::ServerContext* context, const CheckMeasurementStatusRequest* request, CheckMeasurementStatusResponse* response) override;
  ::grpc::Status ClearAllNamedResults(::grpc::ServerContext* context, const ClearAllNamedResultsRequest* request, ClearAllNamedResultsResponse* response) override;
  ::grpc::Status ClearNamedResult(::grpc::ServerContext* context, const ClearNamedResultRequest* request, ClearNamedResultResponse* response) override;
  ::grpc::Status CloneSignalConfiguration(::grpc::ServerContext* context, const CloneSignalConfigurationRequest* request, CloneSignalConfigurationResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status Commit(::grpc::ServerContext* context, const CommitRequest* request, CommitResponse* response) override;
  ::grpc::Status CreateSignalConfiguration(::grpc::ServerContext* context, const CreateSignalConfigurationRequest* request, CreateSignalConfigurationResponse* response) override;
  ::grpc::Status DeleteSignalConfiguration(::grpc::ServerContext* context, const DeleteSignalConfigurationRequest* request, DeleteSignalConfigurationResponse* response) override;
  ::grpc::Status DisableTrigger(::grpc::ServerContext* context, const DisableTriggerRequest* request, DisableTriggerResponse* response) override;
  ::grpc::Status FrequencyRangeCfgAveraging(::grpc::ServerContext* context, const FrequencyRangeCfgAveragingRequest* request, FrequencyRangeCfgAveragingResponse* response) override;
  ::grpc::Status FrequencyRangeCfgSpan(::grpc::ServerContext* context, const FrequencyRangeCfgSpanRequest* request, FrequencyRangeCfgSpanResponse* response) override;
  ::grpc::Status FrequencyRangeFetchMeasurement(::grpc::ServerContext* context, const FrequencyRangeFetchMeasurementRequest* request, FrequencyRangeFetchMeasurementResponse* response) override;
  ::grpc::Status FrequencyRangeFetchSpectrum(::grpc::ServerContext* context, const FrequencyRangeFetchSpectrumRequest* request, FrequencyRangeFetchSpectrumResponse* response) override;
  ::grpc::Status GetAllNamedResultNames(::grpc::ServerContext* context, const GetAllNamedResultNamesRequest* request, GetAllNamedResultNamesResponse* response) override;
  ::grpc::Status GetAttributeF32(::grpc::ServerContext* context, const GetAttributeF32Request* request, GetAttributeF32Response* response) override;
  ::grpc::Status GetAttributeF32Array(::grpc::ServerContext* context, const GetAttributeF32ArrayRequest* request, GetAttributeF32ArrayResponse* response) override;
  ::grpc::Status GetAttributeF64(::grpc::ServerContext* context, const GetAttributeF64Request* request, GetAttributeF64Response* response) override;
  ::grpc::Status GetAttributeF64Array(::grpc::ServerContext* context, const GetAttributeF64ArrayRequest* request, GetAttributeF64ArrayResponse* response) override;
  ::grpc::Status GetAttributeI16(::grpc::ServerContext* context, const GetAttributeI16Request* request, GetAttributeI16Response* response) override;
  ::grpc::Status GetAttributeI32(::grpc::ServerContext* context, const GetAttributeI32Request* request, GetAttributeI32Response* response) override;
  ::grpc::Status GetAttributeI32Array(::grpc::ServerContext* context, const GetAttributeI32ArrayRequest* request, GetAttributeI32ArrayResponse* response) override;
  ::grpc::Status GetAttributeI64(::grpc::ServerContext* context, const GetAttributeI64Request* request, GetAttributeI64Response* response) override;
  ::grpc::Status GetAttributeI64Array(::grpc::ServerContext* context, const GetAttributeI64ArrayRequest* request, GetAttributeI64ArrayResponse* response) override;
  ::grpc::Status GetAttributeI8(::grpc::ServerContext* context, const GetAttributeI8Request* request, GetAttributeI8Response* response) override;
  ::grpc::Status GetAttributeI8Array(::grpc::ServerContext* context, const GetAttributeI8ArrayRequest* request, GetAttributeI8ArrayResponse* response) override;
  ::grpc::Status GetAttributeNIComplexDoubleArray(::grpc::ServerContext* context, const GetAttributeNIComplexDoubleArrayRequest* request, GetAttributeNIComplexDoubleArrayResponse* response) override;
  ::grpc::Status GetAttributeNIComplexSingleArray(::grpc::ServerContext* context, const GetAttributeNIComplexSingleArrayRequest* request, GetAttributeNIComplexSingleArrayResponse* response) override;
  ::grpc::Status GetAttributeString(::grpc::ServerContext* context, const GetAttributeStringRequest* request, GetAttributeStringResponse* response) override;
  ::grpc::Status GetAttributeU16(::grpc::ServerContext* context, const GetAttributeU16Request* request, GetAttributeU16Response* response) override;
  ::grpc::Status GetAttributeU32(::grpc::ServerContext* context, const GetAttributeU32Request* request, GetAttributeU32Response* response) override;
  ::grpc::Status GetAttributeU32Array(::grpc::ServerContext* context, const GetAttributeU32ArrayRequest* request, GetAttributeU32ArrayResponse* response) override;
  ::grpc::Status GetAttributeU64Array(::grpc::ServerContext* context, const GetAttributeU64ArrayRequest* request, GetAttributeU64ArrayResponse* response) override;
  ::grpc::Status GetAttributeU8(::grpc::ServerContext* context, const GetAttributeU8Request* request, GetAttributeU8Response* response) override;
  ::grpc::Status GetAttributeU8Array(::grpc::ServerContext* context, const GetAttributeU8ArrayRequest* request, GetAttributeU8ArrayResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetErrorString(::grpc::ServerContext* context, const GetErrorStringRequest* request, GetErrorStringResponse* response) override;
  ::grpc::Status Initialize(::grpc::ServerContext* context, const InitializeRequest* request, InitializeResponse* response) override;
  ::grpc::Status InitializeFromNIRFSASession(::grpc::ServerContext* context, const InitializeFromNIRFSASessionRequest* request, InitializeFromNIRFSASessionResponse* response) override;
  ::grpc::Status Initiate(::grpc::ServerContext* context, const InitiateRequest* request, InitiateResponse* response) override;
  ::grpc::Status ModAccCfgAveraging(::grpc::ServerContext* context, const ModAccCfgAveragingRequest* request, ModAccCfgAveragingResponse* response) override;
  ::grpc::Status ModAccCfgBurstSynchronizationType(::grpc::ServerContext* context, const ModAccCfgBurstSynchronizationTypeRequest* request, ModAccCfgBurstSynchronizationTypeResponse* response) override;
  ::grpc::Status ModAccFetchCSDetrendedPhaseTrace(::grpc::ServerContext* context, const ModAccFetchCSDetrendedPhaseTraceRequest* request, ModAccFetchCSDetrendedPhaseTraceResponse* response) override;
  ::grpc::Status ModAccFetchCSToneTrace(::grpc::ServerContext* context, const ModAccFetchCSToneTraceRequest* request, ModAccFetchCSToneTraceResponse* response) override;
  ::grpc::Status ModAccFetchConstellationTrace(::grpc::ServerContext* context, const ModAccFetchConstellationTraceRequest* request, ModAccFetchConstellationTraceResponse* response) override;
  ::grpc::Status ModAccFetchConstellationTraceSplit(::grpc::ServerContext* context, const ModAccFetchConstellationTraceSplitRequest* request, ModAccFetchConstellationTraceSplitResponse* response) override;
  ::grpc::Status ModAccFetchDEVM(::grpc::ServerContext* context, const ModAccFetchDEVMRequest* request, ModAccFetchDEVMResponse* response) override;
  ::grpc::Status ModAccFetchDEVMMagnitudeError(::grpc::ServerContext* context, const ModAccFetchDEVMMagnitudeErrorRequest* request, ModAccFetchDEVMMagnitudeErrorResponse* response) override;
  ::grpc::Status ModAccFetchDEVMPerSymbolTrace(::grpc::ServerContext* context, const ModAccFetchDEVMPerSymbolTraceRequest* request, ModAccFetchDEVMPerSymbolTraceResponse* response) override;
  ::grpc::Status ModAccFetchDEVMPhaseError(::grpc::ServerContext* context, const ModAccFetchDEVMPhaseErrorRequest* request, ModAccFetchDEVMPhaseErrorResponse* response) override;
  ::grpc::Status ModAccFetchDemodulatedBitTrace(::grpc::ServerContext* context, const ModAccFetchDemodulatedBitTraceRequest* request, ModAccFetchDemodulatedBitTraceResponse* response) override;
  ::grpc::Status ModAccFetchDf1(::grpc::ServerContext* context, const ModAccFetchDf1Request* request, ModAccFetchDf1Response* response) override;
  ::grpc::Status ModAccFetchDf1maxTrace(::grpc::ServerContext* context, const ModAccFetchDf1maxTraceRequest* request, ModAccFetchDf1maxTraceResponse* response) override;
  ::grpc::Status ModAccFetchDf2(::grpc::ServerContext* context, const ModAccFetchDf2Request* request, ModAccFetchDf2Response* response) override;
  ::grpc::Status ModAccFetchDf2maxTrace(::grpc::ServerContext* context, const ModAccFetchDf2maxTraceRequest* request, ModAccFetchDf2maxTraceResponse* response) override;
  ::grpc::Status ModAccFetchDf4avgTrace(::grpc::ServerContext* context, const ModAccFetchDf4avgTraceRequest* request, ModAccFetchDf4avgTraceResponse* response) override;
  ::grpc::Status ModAccFetchEVMPerSymbolTrace(::grpc::ServerContext* context, const ModAccFetchEVMPerSymbolTraceRequest* request, ModAccFetchEVMPerSymbolTraceResponse* response) override;
  ::grpc::Status ModAccFetchFrequencyErrorBR(::grpc::ServerContext* context, const ModAccFetchFrequencyErrorBRRequest* request, ModAccFetchFrequencyErrorBRResponse* response) override;
  ::grpc::Status ModAccFetchFrequencyErrorEDR(::grpc::ServerContext* context, const ModAccFetchFrequencyErrorEDRRequest* request, ModAccFetchFrequencyErrorEDRResponse* response) override;
  ::grpc::Status ModAccFetchFrequencyErrorLE(::grpc::ServerContext* context, const ModAccFetchFrequencyErrorLERequest* request, ModAccFetchFrequencyErrorLEResponse* response) override;
  ::grpc::Status ModAccFetchFrequencyErrorTraceBR(::grpc::ServerContext* context, const ModAccFetchFrequencyErrorTraceBRRequest* request, ModAccFetchFrequencyErrorTraceBRResponse* response) override;
  ::grpc::Status ModAccFetchFrequencyErrorTraceLE(::grpc::ServerContext* context, const ModAccFetchFrequencyErrorTraceLERequest* request, ModAccFetchFrequencyErrorTraceLEResponse* response) override;
  ::grpc::Status ModAccFetchFrequencyErrorWiPlusW0TraceEDR(::grpc::ServerContext* context, const ModAccFetchFrequencyErrorWiPlusW0TraceEDRRequest* request, ModAccFetchFrequencyErrorWiPlusW0TraceEDRResponse* response) override;
  ::grpc::Status ModAccFetchFrequencyTrace(::grpc::ServerContext* context, const ModAccFetchFrequencyTraceRequest* request, ModAccFetchFrequencyTraceResponse* response) override;
  ::grpc::Status ModAccFetchRMSDEVMTrace(::grpc::ServerContext* context, const ModAccFetchRMSDEVMTraceRequest* request, ModAccFetchRMSDEVMTraceResponse* response) override;
  ::grpc::Status ModSpectrumCfgAveraging(::grpc::ServerContext* context, const ModSpectrumCfgAveragingRequest* request, ModSpectrumCfgAveragingResponse* response) override;
  ::grpc::Status ModSpectrumCfgBurstSynchronizationType(::grpc::ServerContext* context, const ModSpectrumCfgBurstSynchronizationTypeRequest* request, ModSpectrumCfgBurstSynchronizationTypeResponse* response) override;
  ::grpc::Status ModSpectrumFetchSpectrum(::grpc::ServerContext* context, const ModSpectrumFetchSpectrumRequest* request, ModSpectrumFetchSpectrumResponse* response) override;
  ::grpc::Status PowerRampCfgAveraging(::grpc::ServerContext* context, const PowerRampCfgAveragingRequest* request, PowerRampCfgAveragingResponse* response) override;
  ::grpc::Status PowerRampCfgBurstSynchronizationType(::grpc::ServerContext* context, const PowerRampCfgBurstSynchronizationTypeRequest* request, PowerRampCfgBurstSynchronizationTypeResponse* response) override;
  ::grpc::Status ResetAttribute(::grpc::ServerContext* context, const ResetAttributeRequest* request, ResetAttributeResponse* response) override;
  ::grpc::Status ResetToDefault(::grpc::ServerContext* context, const ResetToDefaultRequest* request, ResetToDefaultResponse* response) override;
  ::grpc::Status SelectMeasurements(::grpc::ServerContext* context, const SelectMeasurementsRequest* request, SelectMeasurementsResponse* response) override;
  ::grpc::Status SendSoftwareEdgeTrigger(::grpc::ServerContext* context, const SendSoftwareEdgeTriggerRequest* request, SendSoftwareEdgeTriggerResponse* response) override;
  ::grpc::Status SetAttributeF32(::grpc::ServerContext* context, const SetAttributeF32Request* request, SetAttributeF32Response* response) override;
  ::grpc::Status SetAttributeF32Array(::grpc::ServerContext* context, const SetAttributeF32ArrayRequest* request, SetAttributeF32ArrayResponse* response) override;
  ::grpc::Status SetAttributeF64(::grpc::ServerContext* context, const SetAttributeF64Request* request, SetAttributeF64Response* response) override;
  ::grpc::Status SetAttributeF64Array(::grpc::ServerContext* context, const SetAttributeF64ArrayRequest* request, SetAttributeF64ArrayResponse* response) override;
  ::grpc::Status SetAttributeI16(::grpc::ServerContext* context, const SetAttributeI16Request* request, SetAttributeI16Response* response) override;
  ::grpc::Status SetAttributeI32(::grpc::ServerContext* context, const SetAttributeI32Request* request, SetAttributeI32Response* response) override;
  ::grpc::Status SetAttributeI32Array(::grpc::ServerContext* context, const SetAttributeI32ArrayRequest* request, SetAttributeI32ArrayResponse* response) override;
  ::grpc::Status SetAttributeI64(::grpc::ServerContext* context, const SetAttributeI64Request* request, SetAttributeI64Response* response) override;
  ::grpc::Status SetAttributeI64Array(::grpc::ServerContext* context, const SetAttributeI64ArrayRequest* request, SetAttributeI64ArrayResponse* response) override;
  ::grpc::Status SetAttributeI8(::grpc::ServerContext* context, const SetAttributeI8Request* request, SetAttributeI8Response* response) override;
  ::grpc::Status SetAttributeI8Array(::grpc::ServerContext* context, const SetAttributeI8ArrayRequest* request, SetAttributeI8ArrayResponse* response) override;
  ::grpc::Status SetAttributeNIComplexDoubleArray(::grpc::ServerContext* context, const SetAttributeNIComplexDoubleArrayRequest* request, SetAttributeNIComplexDoubleArrayResponse* response) override;
  ::grpc::Status SetAttributeNIComplexSingleArray(::grpc::ServerContext* context, const SetAttributeNIComplexSingleArrayRequest* request, SetAttributeNIComplexSingleArrayResponse* response) override;
  ::grpc::Status SetAttributeString(::grpc::ServerContext* context, const SetAttributeStringRequest* request, SetAttributeStringResponse* response) override;
  ::grpc::Status SetAttributeU16(::grpc::ServerContext* context, const SetAttributeU16Request* request, SetAttributeU16Response* response) override;
  ::grpc::Status SetAttributeU32(::grpc::ServerContext* context, const SetAttributeU32Request* request, SetAttributeU32Response* response) override;
  ::grpc::Status SetAttributeU32Array(::grpc::ServerContext* context, const SetAttributeU32ArrayRequest* request, SetAttributeU32ArrayResponse* response) override;
  ::grpc::Status SetAttributeU64Array(::grpc::ServerContext* context, const SetAttributeU64ArrayRequest* request, SetAttributeU64ArrayResponse* response) override;
  ::grpc::Status SetAttributeU8(::grpc::ServerContext* context, const SetAttributeU8Request* request, SetAttributeU8Response* response) override;
  ::grpc::Status SetAttributeU8Array(::grpc::ServerContext* context, const SetAttributeU8ArrayRequest* request, SetAttributeU8ArrayResponse* response) override;
  ::grpc::Status TXPCfgAveraging(::grpc::ServerContext* context, const TXPCfgAveragingRequest* request, TXPCfgAveragingResponse* response) override;
  ::grpc::Status TXPCfgBurstSynchronizationType(::grpc::ServerContext* context, const TXPCfgBurstSynchronizationTypeRequest* request, TXPCfgBurstSynchronizationTypeResponse* response) override;
  ::grpc::Status TXPFetchEDRPowers(::grpc::ServerContext* context, const TXPFetchEDRPowersRequest* request, TXPFetchEDRPowersResponse* response) override;
  ::grpc::Status TXPFetchLECTEReferencePeriodPowers(::grpc::ServerContext* context, const TXPFetchLECTEReferencePeriodPowersRequest* request, TXPFetchLECTEReferencePeriodPowersResponse* response) override;
  ::grpc::Status TXPFetchLECTETransmitSlotPowers(::grpc::ServerContext* context, const TXPFetchLECTETransmitSlotPowersRequest* request, TXPFetchLECTETransmitSlotPowersResponse* response) override;
  ::grpc::Status TXPFetchLECTETransmitSlotPowersArray(::grpc::ServerContext* context, const TXPFetchLECTETransmitSlotPowersArrayRequest* request, TXPFetchLECTETransmitSlotPowersArrayResponse* response) override;
  ::grpc::Status TXPFetchPowerTrace(::grpc::ServerContext* context, const TXPFetchPowerTraceRequest* request, TXPFetchPowerTraceResponse* response) override;
  ::grpc::Status TXPFetchPowers(::grpc::ServerContext* context, const TXPFetchPowersRequest* request, TXPFetchPowersResponse* response) override;
  ::grpc::Status TwentydBBandwidthCfgAveraging(::grpc::ServerContext* context, const TwentydBBandwidthCfgAveragingRequest* request, TwentydBBandwidthCfgAveragingResponse* response) override;
  ::grpc::Status TwentydBBandwidthFetchMeasurement(::grpc::ServerContext* context, const TwentydBBandwidthFetchMeasurementRequest* request, TwentydBBandwidthFetchMeasurementResponse* response) override;
  ::grpc::Status TwentydBBandwidthFetchSpectrum(::grpc::ServerContext* context, const TwentydBBandwidthFetchSpectrumRequest* request, TwentydBBandwidthFetchSpectrumResponse* response) override;
  ::grpc::Status WaitForAcquisitionComplete(::grpc::ServerContext* context, const WaitForAcquisitionCompleteRequest* request, WaitForAcquisitionCompleteResponse* response) override;
  ::grpc::Status WaitForMeasurementComplete(::grpc::ServerContext* context, const WaitForMeasurementCompleteRequest* request, WaitForMeasurementCompleteResponse* response) override;
private:
  LibrarySharedPtr library_;
  ResourceRepositorySharedPtr session_repository_;
  ViSessionResourceRepositorySharedPtr vi_session_resource_repository_;
  ::grpc::Status ConvertApiErrorStatusForNiRFmxInstrHandle(::grpc::ServerContextBase* context, int32_t status, niRFmxInstrHandle instrumentHandle);
  std::map<std::int32_t, std::string> frequencyreferencesource_input_map_ { {1, "OnboardClock"},{2, "RefIn"},{3, "PXI_Clk"},{4, "ClkIn"}, };
  std::map<std::string, std::int32_t> frequencyreferencesource_output_map_ { {"OnboardClock", 1},{"RefIn", 2},{"PXI_Clk", 3},{"ClkIn", 4}, };
  std::map<std::int32_t, std::string> nirfmxbluetoothstringattributevaluesmapped_input_map_ { {1, "PFI0"},{2, "PFI1"},{3, "PXI_Trig0"},{4, "PXI_Trig1"},{5, "PXI_Trig2"},{6, "PXI_Trig3"},{7, "PXI_Trig4"},{8, "PXI_Trig5"},{9, "PXI_Trig6"},{10, "PXI_Trig7"},{11, "PXI_STAR"},{12, "PXIe_DStarB"},{13, "TimerEvent"}, };
  std::map<std::string, std::int32_t> nirfmxbluetoothstringattributevaluesmapped_output_map_ { {"PFI0", 1},{"PFI1", 2},{"PXI_Trig0", 3},{"PXI_Trig1", 4},{"PXI_Trig2", 5},{"PXI_Trig3", 6},{"PXI_Trig4", 7},{"PXI_Trig5", 8},{"PXI_Trig6", 9},{"PXI_Trig7", 10},{"PXI_STAR", 11},{"PXIe_DStarB", 12},{"TimerEvent", 13}, };

  NiRFmxBluetoothFeatureToggles feature_toggles_;
};

} // namespace nirfmxbluetooth_grpc

#endif  // NIRFMXBLUETOOTH_GRPC_SERVICE_H
