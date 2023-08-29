//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-FAKE-EXTENSION Metadata
//---------------------------------------------------------------------
#include "nifake_extension_library.h"
#include <server/shared_library.h>

#include <memory>

#if defined(_MSC_VER)
static const char* kLibraryName = "nifake_64.dll";
#else
static const char* kLibraryName = "libnifake.so";
#endif

namespace nifake_extension_grpc {

NiFakeExtensionLibrary::NiFakeExtensionLibrary() : NiFakeExtensionLibrary(std::make_shared<nidevice_grpc::SharedLibrary>()) {}

NiFakeExtensionLibrary::NiFakeExtensionLibrary(std::shared_ptr<nidevice_grpc::SharedLibraryInterface> shared_library) : shared_library_(shared_library)
{
  shared_library_->set_library_name(kLibraryName);
  shared_library_->load();
  bool loaded = shared_library_->is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
  function_pointers_.AddCoolFunctionality = reinterpret_cast<AddCoolFunctionalityPtr>(shared_library_->get_function_pointer("niFakeExtension_AddCoolFunctionality"));
  function_pointers_.TestAddressParameters = reinterpret_cast<TestAddressParametersPtr>(shared_library_->get_function_pointer("niFakeExtension_TestAddressParameters"));
}

NiFakeExtensionLibrary::~NiFakeExtensionLibrary()
{
}

::grpc::Status NiFakeExtensionLibrary::check_function_exists(std::string functionName)
{
  return shared_library_->function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

ViStatus NiFakeExtensionLibrary::AddCoolFunctionality(ViSession vi, ViInt32 param)
{
  if (!function_pointers_.AddCoolFunctionality) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeExtension_AddCoolFunctionality.");
  }
  return function_pointers_.AddCoolFunctionality(vi, param);
}

ViStatus NiFakeExtensionLibrary::TestAddressParameters(ViSession vi, ViInt16 space, ViUInt64 offset, ViAddr suggested, ViAddr* actual)
{
  if (!function_pointers_.TestAddressParameters) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeExtension_TestAddressParameters.");
  }
  return function_pointers_.TestAddressParameters(vi, space, offset, suggested, actual);
}

}  // namespace nifake_extension_grpc
