#ifndef NIDEVICE_GRPC_SERVER_CONFIGURATION_PARSER_H
#define NIDEVICE_GRPC_SERVER_CONFIGURATION_PARSER_H

#include <fstream>
#include <nlohmann/json.hpp>

#include "feature_toggles.h"
#include "moniker_stream_processor.h"

namespace nidevice_grpc {

static const char* kConfigFileNotFoundMessage = "The server configuration file was not found at: ";
static const char* kInvalidAddressMessage = "The specified address is not valid.\n Use a valid IPv4 or IPv6 address. Valid values include localhost, 192.168.1.1, [::], [::1], etc.";
static const char* kWrongAddressTypeMessage = "The server address must be specified in the server's configuration file as a string: \n\n";
static const char* kInvalidPortMessage = "The specified port number must between 0 and 65535.";
static const char* kInvalidMonikerStreamProcessorMessage = "The specified moniker stream processor must be -1 or greater. -1 indicates that any available cpu core can be used.";
static const char* kMalformedJsonMessage = "The JSON in the server configuration file is malformed: \n\n";
static const char* kWrongPortTypeMessage = "The server port must be specified in the server's configuration file as an integer: \n\n";
static const char* kWrongMonikerStreamProcessorTypeMessage = "The moniker stream processor must be specified in the server's configuration file as an integer: \n\n";
static const char* kUnspecifiedPortMessage = "The server port must be specified in the server's configuration file.";
static const char* kValueTypeNotStringMessage = "The following key must be specified in the server's configuration file as a string enclosed with double quotes: ";
static const char* kFileNotFoundMessage = "The following certificate file was not found: ";
static const char* kInvalidExePathMessage = "The server was unable to resolve the current executable path.";
static const char* kInvalidMaxMessageSizeMessage = "The max message size must be an integer.";
static const char* kInvalidFeatureToggleMessage = "Feature Toggles must be specified as boolean fields in the form \"feature_toggles\": { \"feature1\": true, \"feature2\": false }. \n\n";
static const char* kInvalidCodeReadinessMessage = "code_readiness must be a string in [Release, RestrictedRelease, NextRelease, RestrictedNextRelease, Incomplete, Prototype].\n\n";
static const char* kDefaultAddress = "[::]";
constexpr int UNLIMITED_MAX_MESSAGE_SIZE = -1;
constexpr int DEFAULT_SIDEBAND_PORT = 50055;

class ServerConfigurationParser {
 public:
  ServerConfigurationParser();
  ServerConfigurationParser(const std::string& config_file_path);
  ServerConfigurationParser(const nlohmann::json& config_file);
  virtual ~ServerConfigurationParser() {}

  static std::string get_exe_path();

  const std::string& get_config_file_path() const { return config_file_path_; }

  std::string parse_address() const;
  std::string parse_sideband_address() const;
  std::string parse_server_cert() const;
  std::string parse_server_key() const;
  std::string parse_root_cert() const;
  int parse_max_message_size() const;
  int parse_sideband_port() const;
  MonikerStreamProcessor parse_moniker_stream_processor() const;
  FeatureToggles parse_feature_toggles() const;
  FeatureToggles::CodeReadiness parse_code_readiness() const;

  struct ConfigFileNotFoundException : public std::runtime_error {
    ConfigFileNotFoundException(const std::string& config_file_path);
  };

  struct InvalidAddressException : public std::runtime_error {
    InvalidAddressException();
  };

  struct WrongAddressTypeException : public std::runtime_error {
    WrongAddressTypeException(const std::string& type_error_details);
  };

  struct InvalidPortException : public std::runtime_error {
    InvalidPortException();
  };

  struct InvalidMonikerStreamProcessorException : public std::runtime_error {
    InvalidMonikerStreamProcessorException();
  };

  struct MalformedJsonException : public std::runtime_error {
    MalformedJsonException(const std::string& parse_error_details);
  };

  struct WrongPortTypeException : public std::runtime_error {
    WrongPortTypeException(const std::string& type_error_details);
  };

  struct WrongMonikerStreamProcessorTypeException : public std::runtime_error {
    WrongMonikerStreamProcessorTypeException(const std::string& type_error_details);
  };

  struct UnspecifiedPortException : public std::runtime_error {
    UnspecifiedPortException();
  };

  struct ValueTypeNotStringException : public std::runtime_error {
    ValueTypeNotStringException(const std::string& key);
  };

  struct FileNotFoundException : public std::runtime_error {
    FileNotFoundException(const std::string& filepath);
  };

  struct InvalidExePathException : public std::runtime_error {
    InvalidExePathException();
  };

  struct InvalidFeatureToggleException : std::runtime_error {
    InvalidFeatureToggleException(const std::string& type_error_details);
  };

  struct InvalidCodeReadinessException : std::runtime_error {
    InvalidCodeReadinessException(const std::string& type_error_details);
  };

  struct InvalidMaxMessageSizeException : std::runtime_error {
    InvalidMaxMessageSizeException(const std::string& type_error_details);
  };

 private:
  void load_config_file();
  static std::string read_keycert(const std::string& filename);
  static std::string get_certs_directory(const std::string& config_file_path);
  std::string parse_key_from_security_section(const char* key) const;
  std::string parse_bind_address() const;
  int parse_port() const;
  int parse_port_with_key(const std::string& key) const;
  int parse_moniker_stream_processor_with_key(const std::string& key) const;

  std::string config_file_path_;
  nlohmann::json config_file_;
  std::string certs_directory_;
};

}  // namespace nidevice_grpc

#endif  // NIDEVICE_GRPC_SERVER_CONFIGURATION_PARSER_H
