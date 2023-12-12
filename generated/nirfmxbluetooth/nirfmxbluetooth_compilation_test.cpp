//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Compilation test for the NI-RFMXBLUETOOTH Metadata
//---------------------------------------------------------------------
#include "nirfmxbluetooth_library.h"

namespace nirfmxbluetooth_grpc {

int32 ACPCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount)
{
  return RFmxBT_ACPCfgAveraging(instrumentHandle, selectorString, averagingEnabled, averagingCount);
}

int32 ACPCfgBurstSynchronizationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 burstSynchronizationType)
{
  return RFmxBT_ACPCfgBurstSynchronizationType(instrumentHandle, selectorString, burstSynchronizationType);
}

int32 ACPCfgNumberOfOffsets(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfOffsets)
{
  return RFmxBT_ACPCfgNumberOfOffsets(instrumentHandle, selectorString, numberOfOffsets);
}

int32 ACPCfgOffsetChannelMode(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 offsetChannelMode)
{
  return RFmxBT_ACPCfgOffsetChannelMode(instrumentHandle, selectorString, offsetChannelMode);
}

int32 ACPFetchAbsolutePowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 absolutePower[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ACPFetchAbsolutePowerTrace(instrumentHandle, selectorString, timeout, x0, dx, absolutePower, arraySize, actualArraySize);
}

int32 ACPFetchMaskTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 limitWithExceptionMask[], float32 limitWithoutExceptionMask[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ACPFetchMaskTrace(instrumentHandle, selectorString, timeout, x0, dx, limitWithExceptionMask, limitWithoutExceptionMask, arraySize, actualArraySize);
}

int32 ACPFetchMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* measurementStatus)
{
  return RFmxBT_ACPFetchMeasurementStatus(instrumentHandle, selectorString, timeout, measurementStatus);
}

int32 ACPFetchOffsetMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* lowerAbsolutePower, float64* upperAbsolutePower, float64* lowerRelativePower, float64* upperRelativePower, float64* lowerMargin, float64* upperMargin)
{
  return RFmxBT_ACPFetchOffsetMeasurement(instrumentHandle, selectorString, timeout, lowerAbsolutePower, upperAbsolutePower, lowerRelativePower, upperRelativePower, lowerMargin, upperMargin);
}

int32 ACPFetchOffsetMeasurementArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 lowerAbsolutePower[], float64 upperAbsolutePower[], float64 lowerRelativePower[], float64 upperRelativePower[], float64 lowerMargin[], float64 upperMargin[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ACPFetchOffsetMeasurementArray(instrumentHandle, selectorString, timeout, lowerAbsolutePower, upperAbsolutePower, lowerRelativePower, upperRelativePower, lowerMargin, upperMargin, arraySize, actualArraySize);
}

int32 ACPFetchReferenceChannelPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* referenceChannelPower)
{
  return RFmxBT_ACPFetchReferenceChannelPower(instrumentHandle, selectorString, timeout, referenceChannelPower);
}

int32 ACPFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ACPFetchSpectrum(instrumentHandle, selectorString, timeout, x0, dx, spectrum, arraySize, actualArraySize);
}

int32 AbortMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[])
{
  return RFmxBT_AbortMeasurements(instrumentHandle, selectorString);
}

int32 AnalyzeIQ1Waveform(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[], float64 x0, float64 dx, NIComplexSingle iq[], int32 arraySize, int32 reset, int64 reserved)
{
  return RFmxBT_AnalyzeIQ1Waveform(instrumentHandle, selectorString, resultName, x0, dx, iq, arraySize, reset, reserved);
}

int32 AutoDetectSignal(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout)
{
  return RFmxBT_AutoDetectSignal(instrumentHandle, selectorString, timeout);
}

int32 AutoLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 measurementInterval, float64* referenceLevel)
{
  return RFmxBT_AutoLevel(instrumentHandle, selectorString, measurementInterval, referenceLevel);
}

int32 BuildOffsetString(char selectorString[], int32 offsetNumber, int32 selectorStringOutLength, char selectorStringOut[])
{
  return RFmxBT_BuildOffsetString(selectorString, offsetNumber, selectorStringOutLength, selectorStringOut);
}

int32 BuildSignalString(char signalName[], char resultName[], int32 selectorStringLength, char selectorString[])
{
  return RFmxBT_BuildSignalString(signalName, resultName, selectorStringLength, selectorString);
}

int32 BuildSlotString(char selectorString[], int32 slotNumber, int32 selectorStringOutLength, char selectorStringOut[])
{
  return RFmxBT_BuildSlotString(selectorString, slotNumber, selectorStringOutLength, selectorStringOut);
}

int32 CfgChannelNumber(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 channelNumber)
{
  return RFmxBT_CfgChannelNumber(instrumentHandle, selectorString, channelNumber);
}

int32 CfgDataRate(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 dataRate)
{
  return RFmxBT_CfgDataRate(instrumentHandle, selectorString, dataRate);
}

int32 CfgDigitalEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char digitalEdgeSource[], int32 digitalEdge, float64 triggerDelay, int32 enableTrigger)
{
  return RFmxBT_CfgDigitalEdgeTrigger(instrumentHandle, selectorString, digitalEdgeSource, digitalEdge, triggerDelay, enableTrigger);
}

int32 CfgExternalAttenuation(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 externalAttenuation)
{
  return RFmxBT_CfgExternalAttenuation(instrumentHandle, selectorString, externalAttenuation);
}

int32 CfgFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency)
{
  return RFmxBT_CfgFrequency(instrumentHandle, selectorString, centerFrequency);
}

int32 CfgFrequencyChannelNumber(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 standard, int32 channelNumber)
{
  return RFmxBT_CfgFrequencyChannelNumber(instrumentHandle, selectorString, standard, channelNumber);
}

int32 CfgFrequencyReference(niRFmxInstrHandle instrumentHandle, char channelName[], char frequencyReferenceSource[], float64 frequencyReferenceFrequency)
{
  return RFmxBT_CfgFrequencyReference(instrumentHandle, channelName, frequencyReferenceSource, frequencyReferenceFrequency);
}

int32 CfgIQPowerEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char iqPowerEdgeSource[], int32 iqPowerEdgeSlope, float64 iqPowerEdgeLevel, float64 triggerDelay, int32 triggerMinQuietTimeMode, float64 triggerMinQuietTimeDuration, int32 iqPowerEdgeLevelType, int32 enableTrigger)
{
  return RFmxBT_CfgIQPowerEdgeTrigger(instrumentHandle, selectorString, iqPowerEdgeSource, iqPowerEdgeSlope, iqPowerEdgeLevel, triggerDelay, triggerMinQuietTimeMode, triggerMinQuietTimeDuration, iqPowerEdgeLevelType, enableTrigger);
}

int32 CfgLEDirectionFinding(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 directionFindingMode, float64 cteLength, float64 cteSlotDuration)
{
  return RFmxBT_CfgLEDirectionFinding(instrumentHandle, selectorString, directionFindingMode, cteLength, cteSlotDuration);
}

int32 CfgMechanicalAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 mechanicalAttenuationAuto, float64 mechanicalAttenuationValue)
{
  return RFmxBT_CfgMechanicalAttenuation(instrumentHandle, channelName, mechanicalAttenuationAuto, mechanicalAttenuationValue);
}

int32 CfgPacketType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 packetType)
{
  return RFmxBT_CfgPacketType(instrumentHandle, selectorString, packetType);
}

int32 CfgPayloadBitPattern(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 payloadBitPattern)
{
  return RFmxBT_CfgPayloadBitPattern(instrumentHandle, selectorString, payloadBitPattern);
}

int32 CfgPayloadLength(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 payloadLengthMode, int32 payloadLength)
{
  return RFmxBT_CfgPayloadLength(instrumentHandle, selectorString, payloadLengthMode, payloadLength);
}

int32 CfgRF(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency, float64 referenceLevel, float64 externalAttenuation)
{
  return RFmxBT_CfgRF(instrumentHandle, selectorString, centerFrequency, referenceLevel, externalAttenuation);
}

int32 CfgRFAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 rfAttenuationAuto, float64 rfAttenuationValue)
{
  return RFmxBT_CfgRFAttenuation(instrumentHandle, channelName, rfAttenuationAuto, rfAttenuationValue);
}

int32 CfgReferenceLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 referenceLevel)
{
  return RFmxBT_CfgReferenceLevel(instrumentHandle, selectorString, referenceLevel);
}

int32 CfgSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 triggerDelay, int32 enableTrigger)
{
  return RFmxBT_CfgSoftwareEdgeTrigger(instrumentHandle, selectorString, triggerDelay, enableTrigger);
}

int32 CheckMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* isDone)
{
  return RFmxBT_CheckMeasurementStatus(instrumentHandle, selectorString, isDone);
}

int32 ClearAllNamedResults(niRFmxInstrHandle instrumentHandle, char selectorString[])
{
  return RFmxBT_ClearAllNamedResults(instrumentHandle, selectorString);
}

int32 ClearNamedResult(niRFmxInstrHandle instrumentHandle, char selectorString[])
{
  return RFmxBT_ClearNamedResult(instrumentHandle, selectorString);
}

int32 CloneSignalConfiguration(niRFmxInstrHandle instrumentHandle, char oldSignalName[], char newSignalName[])
{
  return RFmxBT_CloneSignalConfiguration(instrumentHandle, oldSignalName, newSignalName);
}

int32 Close(niRFmxInstrHandle instrumentHandle, int32 forceDestroy)
{
  return RFmxBT_Close(instrumentHandle, forceDestroy);
}

int32 Commit(niRFmxInstrHandle instrumentHandle, char selectorString[])
{
  return RFmxBT_Commit(instrumentHandle, selectorString);
}

int32 CreateSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[])
{
  return RFmxBT_CreateSignalConfiguration(instrumentHandle, signalName);
}

int32 DeleteSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[])
{
  return RFmxBT_DeleteSignalConfiguration(instrumentHandle, signalName);
}

int32 DisableTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[])
{
  return RFmxBT_DisableTrigger(instrumentHandle, selectorString);
}

int32 FrequencyRangeCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount)
{
  return RFmxBT_FrequencyRangeCfgAveraging(instrumentHandle, selectorString, averagingEnabled, averagingCount);
}

int32 FrequencyRangeCfgSpan(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 span)
{
  return RFmxBT_FrequencyRangeCfgSpan(instrumentHandle, selectorString, span);
}

int32 FrequencyRangeFetchMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* highFrequency, float64* lowFrequency)
{
  return RFmxBT_FrequencyRangeFetchMeasurement(instrumentHandle, selectorString, timeout, highFrequency, lowFrequency);
}

int32 FrequencyRangeFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_FrequencyRangeFetchSpectrum(instrumentHandle, selectorString, timeout, x0, dx, spectrum, arraySize, actualArraySize);
}

int32 GetAllNamedResultNames(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultNames[], int32 resultNamesBufferSize, int32* actualResultNamesSize, int32* defaultResultExists)
{
  return RFmxBT_GetAllNamedResultNames(instrumentHandle, selectorString, resultNames, resultNamesBufferSize, actualResultNamesSize, defaultResultExists);
}

int32 GetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32* attrVal)
{
  return RFmxBT_GetAttributeF32(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_GetAttributeF32Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64* attrVal)
{
  return RFmxBT_GetAttributeF64(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_GetAttributeF64Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16* attrVal)
{
  return RFmxBT_GetAttributeI16(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32* attrVal)
{
  return RFmxBT_GetAttributeI32(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_GetAttributeI32Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64* attrVal)
{
  return RFmxBT_GetAttributeI64(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_GetAttributeI64Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8* attrVal)
{
  return RFmxBT_GetAttributeI8(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_GetAttributeI8Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_GetAttributeNIComplexDoubleArray(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_GetAttributeNIComplexSingleArray(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 arraySize, char attrVal[])
{
  return RFmxBT_GetAttributeString(instrumentHandle, selectorString, attributeID, arraySize, attrVal);
}

int32 GetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16* attrVal)
{
  return RFmxBT_GetAttributeU16(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32* attrVal)
{
  return RFmxBT_GetAttributeU32(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_GetAttributeU32Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_GetAttributeU64Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8* attrVal)
{
  return RFmxBT_GetAttributeU8(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_GetAttributeU8Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetError(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[])
{
  return RFmxBT_GetError(instrumentHandle, errorCode, errorDescriptionBufferSize, errorDescription);
}

int32 GetErrorString(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[])
{
  return RFmxBT_GetErrorString(instrumentHandle, errorCode, errorDescriptionBufferSize, errorDescription);
}

int32 Initialize(char resourceName[], char optionString[], niRFmxInstrHandle* handleOut, int32* isNewSession)
{
  return RFmxBT_Initialize(resourceName, optionString, handleOut, isNewSession);
}

int32 InitializeFromNIRFSASession(uInt32 nirfsaSession, niRFmxInstrHandle* handleOut)
{
  return RFmxBT_InitializeFromNIRFSASession(nirfsaSession, handleOut);
}

int32 Initiate(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[])
{
  return RFmxBT_Initiate(instrumentHandle, selectorString, resultName);
}

int32 ModAccCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount)
{
  return RFmxBT_ModAccCfgAveraging(instrumentHandle, selectorString, averagingEnabled, averagingCount);
}

int32 ModAccCfgBurstSynchronizationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 burstSynchronizationType)
{
  return RFmxBT_ModAccCfgBurstSynchronizationType(instrumentHandle, selectorString, burstSynchronizationType);
}

int32 ModAccFetchCSDetrendedPhaseTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 csDetrendedPhase[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ModAccFetchCSDetrendedPhaseTrace(instrumentHandle, selectorString, timeout, x0, dx, csDetrendedPhase, arraySize, actualArraySize);
}

int32 ModAccFetchCSToneTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 csToneAmplitude[], float32 csTonePhase[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ModAccFetchCSToneTrace(instrumentHandle, selectorString, timeout, x0, dx, csToneAmplitude, csTonePhase, arraySize, actualArraySize);
}

int32 ModAccFetchConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle constellation[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ModAccFetchConstellationTrace(instrumentHandle, selectorString, timeout, constellation, arraySize, actualArraySize);
}

int32 ModAccFetchDEVM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* peakRMSDEVMMaximum, float64* peakDEVMMaximum, float64* ninetyninePercentDEVM)
{
  return RFmxBT_ModAccFetchDEVM(instrumentHandle, selectorString, timeout, peakRMSDEVMMaximum, peakDEVMMaximum, ninetyninePercentDEVM);
}

int32 ModAccFetchDEVMMagnitudeError(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* averageRMSMagnitudeErrorMean, float64* peakRMSMagnitudeErrorMaximum)
{
  return RFmxBT_ModAccFetchDEVMMagnitudeError(instrumentHandle, selectorString, timeout, averageRMSMagnitudeErrorMean, peakRMSMagnitudeErrorMaximum);
}

int32 ModAccFetchDEVMPerSymbolTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 devmPerSymbol[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ModAccFetchDEVMPerSymbolTrace(instrumentHandle, selectorString, timeout, devmPerSymbol, arraySize, actualArraySize);
}

int32 ModAccFetchDEVMPhaseError(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* averageRMSPhaseErrorMean, float64* peakRMSPhaseErrorMaximum)
{
  return RFmxBT_ModAccFetchDEVMPhaseError(instrumentHandle, selectorString, timeout, averageRMSPhaseErrorMean, peakRMSPhaseErrorMaximum);
}

int32 ModAccFetchDemodulatedBitTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int8 demodulatedBits[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ModAccFetchDemodulatedBitTrace(instrumentHandle, selectorString, timeout, demodulatedBits, arraySize, actualArraySize);
}

int32 ModAccFetchDf1(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* df1avgMaximum, float64* df1avgMinimum)
{
  return RFmxBT_ModAccFetchDf1(instrumentHandle, selectorString, timeout, df1avgMaximum, df1avgMinimum);
}

int32 ModAccFetchDf1maxTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 df1max[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ModAccFetchDf1maxTrace(instrumentHandle, selectorString, timeout, time, df1max, arraySize, actualArraySize);
}

int32 ModAccFetchDf2(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* df2avgMinimum, float64* percentageOfSymbolsAboveDf2maxThreshold)
{
  return RFmxBT_ModAccFetchDf2(instrumentHandle, selectorString, timeout, df2avgMinimum, percentageOfSymbolsAboveDf2maxThreshold);
}

int32 ModAccFetchDf2maxTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 df2max[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ModAccFetchDf2maxTrace(instrumentHandle, selectorString, timeout, time, df2max, arraySize, actualArraySize);
}

int32 ModAccFetchFrequencyErrorBR(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* initialFrequencyErrorMaximum, float64* peakFrequencyDriftMaximum, float64* peakFrequencyDriftRateMaximum)
{
  return RFmxBT_ModAccFetchFrequencyErrorBR(instrumentHandle, selectorString, timeout, initialFrequencyErrorMaximum, peakFrequencyDriftMaximum, peakFrequencyDriftRateMaximum);
}

int32 ModAccFetchFrequencyErrorEDR(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* headerFrequencyErrorWiMaximum, float64* peakFrequencyErrorWiPlusW0Maximum, float64* peakFrequencyErrorW0Maximum)
{
  return RFmxBT_ModAccFetchFrequencyErrorEDR(instrumentHandle, selectorString, timeout, headerFrequencyErrorWiMaximum, peakFrequencyErrorWiPlusW0Maximum, peakFrequencyErrorW0Maximum);
}

int32 ModAccFetchFrequencyErrorLE(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* peakFrequencyErrorMaximum, float64* initialFrequencyDriftMaximum, float64* peakFrequencyDriftMaximum, float64* peakFrequencyDriftRateMaximum)
{
  return RFmxBT_ModAccFetchFrequencyErrorLE(instrumentHandle, selectorString, timeout, peakFrequencyErrorMaximum, initialFrequencyDriftMaximum, peakFrequencyDriftMaximum, peakFrequencyDriftRateMaximum);
}

int32 ModAccFetchFrequencyErrorTraceBR(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 frequencyError[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ModAccFetchFrequencyErrorTraceBR(instrumentHandle, selectorString, timeout, time, frequencyError, arraySize, actualArraySize);
}

int32 ModAccFetchFrequencyErrorTraceLE(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 frequencyError[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ModAccFetchFrequencyErrorTraceLE(instrumentHandle, selectorString, timeout, time, frequencyError, arraySize, actualArraySize);
}

int32 ModAccFetchFrequencyErrorWiPlusW0TraceEDR(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 frequencyErrorWiPlusW0[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ModAccFetchFrequencyErrorWiPlusW0TraceEDR(instrumentHandle, selectorString, timeout, time, frequencyErrorWiPlusW0, arraySize, actualArraySize);
}

int32 ModAccFetchFrequencyTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 frequency[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ModAccFetchFrequencyTrace(instrumentHandle, selectorString, timeout, x0, dx, frequency, arraySize, actualArraySize);
}

int32 ModAccFetchRMSDEVMTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 rmsdevm[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_ModAccFetchRMSDEVMTrace(instrumentHandle, selectorString, timeout, rmsdevm, arraySize, actualArraySize);
}

int32 PowerRampCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount)
{
  return RFmxBT_PowerRampCfgAveraging(instrumentHandle, selectorString, averagingEnabled, averagingCount);
}

int32 PowerRampCfgBurstSynchronizationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 burstSynchronizationType)
{
  return RFmxBT_PowerRampCfgBurstSynchronizationType(instrumentHandle, selectorString, burstSynchronizationType);
}

int32 ResetAttribute(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID)
{
  return RFmxBT_ResetAttribute(instrumentHandle, selectorString, attributeID);
}

int32 ResetToDefault(niRFmxInstrHandle instrumentHandle, char selectorString[])
{
  return RFmxBT_ResetToDefault(instrumentHandle, selectorString);
}

int32 SelectMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[], uInt32 measurements, int32 enableAllTraces)
{
  return RFmxBT_SelectMeasurements(instrumentHandle, selectorString, measurements, enableAllTraces);
}

int32 SendSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle)
{
  return RFmxBT_SendSoftwareEdgeTrigger(instrumentHandle);
}

int32 SetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal)
{
  return RFmxBT_SetAttributeF32(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize)
{
  return RFmxBT_SetAttributeF32Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal)
{
  return RFmxBT_SetAttributeF64(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize)
{
  return RFmxBT_SetAttributeF64Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16 attrVal)
{
  return RFmxBT_SetAttributeI16(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal)
{
  return RFmxBT_SetAttributeI32(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize)
{
  return RFmxBT_SetAttributeI32Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal)
{
  return RFmxBT_SetAttributeI64(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize)
{
  return RFmxBT_SetAttributeI64Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal)
{
  return RFmxBT_SetAttributeI8(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize)
{
  return RFmxBT_SetAttributeI8Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize)
{
  return RFmxBT_SetAttributeNIComplexDoubleArray(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize)
{
  return RFmxBT_SetAttributeNIComplexSingleArray(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, char attrVal[])
{
  return RFmxBT_SetAttributeString(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16 attrVal)
{
  return RFmxBT_SetAttributeU16(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal)
{
  return RFmxBT_SetAttributeU32(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize)
{
  return RFmxBT_SetAttributeU32Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize)
{
  return RFmxBT_SetAttributeU64Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal)
{
  return RFmxBT_SetAttributeU8(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize)
{
  return RFmxBT_SetAttributeU8Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 TXPCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount)
{
  return RFmxBT_TXPCfgAveraging(instrumentHandle, selectorString, averagingEnabled, averagingCount);
}

int32 TXPCfgBurstSynchronizationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 burstSynchronizationType)
{
  return RFmxBT_TXPCfgBurstSynchronizationType(instrumentHandle, selectorString, burstSynchronizationType);
}

int32 TXPFetchEDRPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* edrgfskAveragePowerMean, float64* edrdpskAveragePowerMean, float64* edr_DPSK_GFSKAveragePowerRatioMean)
{
  return RFmxBT_TXPFetchEDRPowers(instrumentHandle, selectorString, timeout, edrgfskAveragePowerMean, edrdpskAveragePowerMean, edr_DPSK_GFSKAveragePowerRatioMean);
}

int32 TXPFetchLECTEReferencePeriodPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* referencePeriodAveragePowerMean, float64* referencePeriodPeakAbsolutePowerDeviationMaximum)
{
  return RFmxBT_TXPFetchLECTEReferencePeriodPowers(instrumentHandle, selectorString, timeout, referencePeriodAveragePowerMean, referencePeriodPeakAbsolutePowerDeviationMaximum);
}

int32 TXPFetchLECTETransmitSlotPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* transmitSlotAveragePowerMean, float64* transmitSlotPeakAbsolutePowerDeviationMaximum)
{
  return RFmxBT_TXPFetchLECTETransmitSlotPowers(instrumentHandle, selectorString, timeout, transmitSlotAveragePowerMean, transmitSlotPeakAbsolutePowerDeviationMaximum);
}

int32 TXPFetchLECTETransmitSlotPowersArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 transmitSlotAveragePowerMean[], float64 transmitSlotPeakAbsolutePowerDeviationMaximum[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_TXPFetchLECTETransmitSlotPowersArray(instrumentHandle, selectorString, timeout, transmitSlotAveragePowerMean, transmitSlotPeakAbsolutePowerDeviationMaximum, arraySize, actualArraySize);
}

int32 TXPFetchPowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 power[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_TXPFetchPowerTrace(instrumentHandle, selectorString, timeout, x0, dx, power, arraySize, actualArraySize);
}

int32 TXPFetchPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* averagePowerMean, float64* averagePowerMaximum, float64* averagePowerMinimum, float64* peakToAveragePowerRatioMaximum)
{
  return RFmxBT_TXPFetchPowers(instrumentHandle, selectorString, timeout, averagePowerMean, averagePowerMaximum, averagePowerMinimum, peakToAveragePowerRatioMaximum);
}

int32 TwentydBBandwidthCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount)
{
  return RFmxBT_20dBBandwidthCfgAveraging(instrumentHandle, selectorString, averagingEnabled, averagingCount);
}

int32 TwentydBBandwidthFetchMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* peakPower, float64* bandwidth, float64* highFrequency, float64* lowFrequency)
{
  return RFmxBT_20dBBandwidthFetchMeasurement(instrumentHandle, selectorString, timeout, peakPower, bandwidth, highFrequency, lowFrequency);
}

int32 TwentydBBandwidthFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize)
{
  return RFmxBT_20dBBandwidthFetchSpectrum(instrumentHandle, selectorString, timeout, x0, dx, spectrum, arraySize, actualArraySize);
}

int32 WaitForAcquisitionComplete(niRFmxInstrHandle instrumentHandle, float64 timeout)
{
  return RFmxBT_WaitForAcquisitionComplete(instrumentHandle, timeout);
}

int32 WaitForMeasurementComplete(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout)
{
  return RFmxBT_WaitForMeasurementComplete(instrumentHandle, selectorString, timeout);
}

}  // namespace nirfmxbluetooth_grpc
