/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service.   © 2022, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ComparisonOperator.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::udsf {

ComparisonOperator::ComparisonOperator() {}

void ComparisonOperator::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool ComparisonOperator::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ComparisonOperator::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ComparisonOperator" : pathPrefix;

  return success;
}

bool ComparisonOperator::operator==(const ComparisonOperator& rhs) const {
  return (*this == rhs);
}

bool ComparisonOperator::operator!=(const ComparisonOperator& rhs) const {
  return !(*this == rhs);
}

void ComparisonOperator::get(std::string& op) const {
  op = value;
}

std::string ComparisonOperator::get() const {
  return value;
}

void ComparisonOperator::set(const std::string& op) {
  value = op;
}

void to_json(nlohmann::json& j, const ComparisonOperator& o) {
  j = nlohmann::json();
  j = o.get();
}

void from_json(const nlohmann::json& j, ComparisonOperator& o) {
  o.set(j.get<std::string>());
}

}  // namespace oai::model::udsf
