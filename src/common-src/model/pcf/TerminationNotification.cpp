/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TerminationNotification.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

TerminationNotification::TerminationNotification() {
  m_ResourceUri = "";
}

void TerminationNotification::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool TerminationNotification::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool TerminationNotification::validate(
    std::stringstream& /* msg */, const std::string& /* pathPrefix */) const {
  bool success = true;
  /*
  const std::string _pathPrefix =
      pathPrefix.empty() ? "TerminationNotification" : pathPrefix;
  */
  return success;
}

bool TerminationNotification::operator==(
    const TerminationNotification& rhs) const {
  return

      (getResourceUri() == rhs.getResourceUri()) &&

      (getCause() == rhs.getCause())

          ;
}

bool TerminationNotification::operator!=(
    const TerminationNotification& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TerminationNotification& o) {
  j                = nlohmann::json();
  j["resourceUri"] = o.m_ResourceUri;
  j["cause"]       = o.m_Cause;
}

void from_json(const nlohmann::json& j, TerminationNotification& o) {
  j.at("resourceUri").get_to(o.m_ResourceUri);
  j.at("cause").get_to(o.m_Cause);
}

std::string TerminationNotification::getResourceUri() const {
  return m_ResourceUri;
}
void TerminationNotification::setResourceUri(std::string const& value) {
  m_ResourceUri = value;
}
oai::model::pcf::SmPolicyAssociationReleaseCause
TerminationNotification::getCause() const {
  return m_Cause;
}
void TerminationNotification::setCause(
    oai::model::pcf::SmPolicyAssociationReleaseCause const& value) {
  m_Cause = value;
}

}  // namespace oai::model::pcf
