/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service.   © 2022, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.8
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TacRange.h
 *
 * Range of TACs (Tracking Area Codes)
 */

#ifndef TacRange_H_
#define TacRange_H_

#include <string>
#include <nlohmann/json.hpp>

namespace oai::model::nrf {

/// <summary>
/// Range of TACs (Tracking Area Codes)
/// </summary>
class TacRange {
 public:
  TacRange();
  virtual ~TacRange() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const TacRange& rhs) const;
  bool operator!=(const TacRange& rhs) const;

  /////////////////////////////////////////////
  /// TacRange members

  /// <summary>
  ///
  /// </summary>
  std::string getStart() const;
  void setStart(std::string const& value);
  bool startIsSet() const;
  void unsetStart();
  /// <summary>
  ///
  /// </summary>
  std::string getEnd() const;
  void setEnd(std::string const& value);
  bool endIsSet() const;
  void unsetEnd();
  /// <summary>
  ///
  /// </summary>
  std::string getPattern() const;
  void setPattern(std::string const& value);
  bool patternIsSet() const;
  void unsetPattern();

  friend void to_json(nlohmann::json& j, const TacRange& o);
  friend void from_json(const nlohmann::json& j, TacRange& o);

 protected:
  std::string m_Start;
  bool m_StartIsSet;
  std::string m_End;
  bool m_EndIsSet;
  std::string m_Pattern;
  bool m_PatternIsSet;
};

}  // namespace oai::model::nrf

#endif /* TacRange_H_ */
