/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CollectionPeriodRmmLteMdt_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::common {

CollectionPeriodRmmLteMdt_anyOf::CollectionPeriodRmmLteMdt_anyOf() {}

void CollectionPeriodRmmLteMdt_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool CollectionPeriodRmmLteMdt_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool CollectionPeriodRmmLteMdt_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "CollectionPeriodRmmLteMdt_anyOf" : pathPrefix;

  if (m_value ==
      CollectionPeriodRmmLteMdt_anyOf::eCollectionPeriodRmmLteMdt_anyOf::
          INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool CollectionPeriodRmmLteMdt_anyOf::operator==(
    const CollectionPeriodRmmLteMdt_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool CollectionPeriodRmmLteMdt_anyOf::operator!=(
    const CollectionPeriodRmmLteMdt_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CollectionPeriodRmmLteMdt_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case CollectionPeriodRmmLteMdt_anyOf::eCollectionPeriodRmmLteMdt_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case CollectionPeriodRmmLteMdt_anyOf::eCollectionPeriodRmmLteMdt_anyOf::
        _1024:
      j = "1024";
      break;
    case CollectionPeriodRmmLteMdt_anyOf::eCollectionPeriodRmmLteMdt_anyOf::
        _1280:
      j = "1280";
      break;
    case CollectionPeriodRmmLteMdt_anyOf::eCollectionPeriodRmmLteMdt_anyOf::
        _2048:
      j = "2048";
      break;
    case CollectionPeriodRmmLteMdt_anyOf::eCollectionPeriodRmmLteMdt_anyOf::
        _2560:
      j = "2560";
      break;
    case CollectionPeriodRmmLteMdt_anyOf::eCollectionPeriodRmmLteMdt_anyOf::
        _5120:
      j = "5120";
      break;
    case CollectionPeriodRmmLteMdt_anyOf::eCollectionPeriodRmmLteMdt_anyOf::
        _10240:
      j = "10240";
      break;
    case CollectionPeriodRmmLteMdt_anyOf::eCollectionPeriodRmmLteMdt_anyOf::
        _60000:
      j = "60000";
      break;
  }
}

void from_json(const nlohmann::json& j, CollectionPeriodRmmLteMdt_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "1024") {
    o.setValue(CollectionPeriodRmmLteMdt_anyOf::
                   eCollectionPeriodRmmLteMdt_anyOf::_1024);
  } else if (s == "1280") {
    o.setValue(CollectionPeriodRmmLteMdt_anyOf::
                   eCollectionPeriodRmmLteMdt_anyOf::_1280);
  } else if (s == "2048") {
    o.setValue(CollectionPeriodRmmLteMdt_anyOf::
                   eCollectionPeriodRmmLteMdt_anyOf::_2048);
  } else if (s == "2560") {
    o.setValue(CollectionPeriodRmmLteMdt_anyOf::
                   eCollectionPeriodRmmLteMdt_anyOf::_2560);
  } else if (s == "5120") {
    o.setValue(CollectionPeriodRmmLteMdt_anyOf::
                   eCollectionPeriodRmmLteMdt_anyOf::_5120);
  } else if (s == "10240") {
    o.setValue(CollectionPeriodRmmLteMdt_anyOf::
                   eCollectionPeriodRmmLteMdt_anyOf::_10240);
  } else if (s == "60000") {
    o.setValue(CollectionPeriodRmmLteMdt_anyOf::
                   eCollectionPeriodRmmLteMdt_anyOf::_60000);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " CollectionPeriodRmmLteMdt_anyOf::eCollectionPeriodRmmLteMdt_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

CollectionPeriodRmmLteMdt_anyOf::eCollectionPeriodRmmLteMdt_anyOf
CollectionPeriodRmmLteMdt_anyOf::getValue() const {
  return m_value;
}
void CollectionPeriodRmmLteMdt_anyOf::setValue(
    CollectionPeriodRmmLteMdt_anyOf::eCollectionPeriodRmmLteMdt_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::common
