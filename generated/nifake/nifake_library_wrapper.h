//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-FAKE
//---------------------------------------------------------------------
#ifndef NI_FAKE_GRPC_LIBRARY_WRAPPER_H
#define NI_FAKE_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <niFake.h>

namespace ni {
namespace fake {
namespace grpc {

class NiFakeLibraryWrapper {
 public:
  virtual ~NiFakeLibraryWrapper() {}

  virtual ::grpc::Status check_function_exists(std::string functionName) = 0;
  virtual ViStatus Abort(ViSession vi) = 0;
  virtual ViStatus EnumInputFunctionWithDefaults(ViSession vi, ViInt16 aTurtle) = 0;
  virtual ViStatus GetABoolean(ViSession vi, ViBoolean* aBoolean) = 0;
  virtual ViStatus GetANumber(ViSession vi, ViInt16* aNumber) = 0;
  virtual ViStatus GetArraySizeForPythonCode(ViSession vi, ViInt32* sizeOut) = 0;
  virtual ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue) = 0;
  virtual ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue) = 0;
  virtual ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue) = 0;
  virtual ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue) = 0;
  virtual ViStatus GetCalDateAndTime(ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute) = 0;
  virtual ViStatus GetCalInterval(ViSession vi, ViInt32* months) = 0;
  virtual ViStatus GetEnumValue(ViSession vi, ViInt32* aQuantity, ViInt16* aTurtle) = 0;
  virtual ViStatus InitWithOptions(ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi) = 0;
  virtual ViStatus Initiate(ViSession vi) = 0;
  virtual ViStatus OneInputFunction(ViSession vi, ViInt32 aNumber) = 0;
  virtual ViStatus ParametersAreMultipleTypes(ViSession vi, ViBoolean aBoolean, ViInt32 anInt32, ViInt64 anInt64, ViInt16 anIntEnum, ViReal64 aFloat, ViReal64 aFloatEnum, ViInt32 stringSize, ViConstString aString) = 0;
  virtual ViStatus PoorlyNamedSimpleFunction(ViSession vi) = 0;
  virtual ViStatus Read(ViSession vi, ViReal64 maximumTime, ViReal64* reading) = 0;
  virtual ViStatus ReadFromChannel(ViSession vi, ViConstString channelName, ViInt32 maximumTime, ViReal64* reading) = 0;
  virtual ViStatus ReturnDurationInSeconds(ViSession vi, ViReal64* timedelta) = 0;
  virtual ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue) = 0;
  virtual ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue) = 0;
  virtual ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue) = 0;
  virtual ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue) = 0;
  virtual ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue) = 0;
  virtual ViStatus StringValuedEnumInputFunctionWithDefaults(ViSession vi, ViConstString aMobileOSName) = 0;
  virtual ViStatus TwoInputFunction(ViSession vi, ViReal64 aNumber, ViString aString) = 0;
  virtual ViStatus Use64BitNumber(ViSession vi, ViInt64 input, ViInt64* output) = 0;
  virtual ViStatus close(ViSession vi) = 0;
};

}  // namespace grpc
}  // namespace fake
}  // namespace ni
#endif  // NI_FAKE_GRPC_LIBRARY_WRAPPER_H
