//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-SYNC
//---------------------------------------------------------------------
#ifndef NISYNC_GRPC_LIBRARY_H
#define NISYNC_GRPC_LIBRARY_H

#include "nisync_library_interface.h"

#include <server/shared_library.h>

namespace nisync_grpc {

class NiSyncLibrary : public nisync_grpc::NiSyncLibraryInterface {
 public:
  NiSyncLibrary();
  virtual ~NiSyncLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);
  ViStatus close(ViSession vi);

 private:
  using initPtr = ViStatus (*)(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);
  using closePtr = ViStatus (*)(ViSession vi);

  typedef struct FunctionPointers {
    initPtr init;
    closePtr close;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nisync_grpc

#endif  // NISYNC_GRPC_LIBRARY_H
