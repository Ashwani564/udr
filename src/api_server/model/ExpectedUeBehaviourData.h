/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ExpectedUeBehaviourData.h
 *
 *
 */

#ifndef ExpectedUeBehaviourData_H_
#define ExpectedUeBehaviourData_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "BatteryIndication.h"
#include "LocationArea.h"
#include "ScheduledCommunicationTime.h"
#include "ScheduledCommunicationType.h"
#include "StationaryIndication.h"
#include "TrafficProfile.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class ExpectedUeBehaviourData {
 public:
  ExpectedUeBehaviourData();
  virtual ~ExpectedUeBehaviourData();

  void validate();

  /////////////////////////////////////////////
  /// ExpectedUeBehaviourData members

  /// <summary>
  ///
  /// </summary>
  oai::model::common::StationaryIndication getStationaryIndication() const;
  void setStationaryIndication(
      oai::model::common::StationaryIndication const& value);
  bool stationaryIndicationIsSet() const;
  void unsetStationaryIndication();
  /// <summary>
  ///
  /// </summary>
  int32_t getCommunicationDurationTime() const;
  void setCommunicationDurationTime(int32_t const value);
  bool communicationDurationTimeIsSet() const;
  void unsetCommunicationDurationTime();
  /// <summary>
  ///
  /// </summary>
  int32_t getPeriodicTime() const;
  void setPeriodicTime(int32_t const value);
  bool periodicTimeIsSet() const;
  void unsetPeriodicTime();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::ScheduledCommunicationTime getScheduledCommunicationTime()
      const;
  void setScheduledCommunicationTime(
      oai::model::common::ScheduledCommunicationTime const& value);
  bool scheduledCommunicationTimeIsSet() const;
  void unsetScheduledCommunicationTime();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::ScheduledCommunicationType getScheduledCommunicationType()
      const;
  void setScheduledCommunicationType(
      oai::model::common::ScheduledCommunicationType const& value);
  bool scheduledCommunicationTypeIsSet() const;
  void unsetScheduledCommunicationType();
  /// <summary>
  /// Identifies the UE&#39;s expected geographical movement. The attribute is
  /// only applicable in 5G.
  /// </summary>
  std::vector<LocationArea>& getExpectedUmts();
  void setExpectedUmts(std::vector<LocationArea> const& value);
  bool expectedUmtsIsSet() const;
  void unsetExpectedUmts();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::TrafficProfile getTrafficProfile() const;
  void setTrafficProfile(oai::model::common::TrafficProfile const& value);
  bool trafficProfileIsSet() const;
  void unsetTrafficProfile();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::BatteryIndication getBatteryIndication() const;
  void setBatteryIndication(oai::model::common::BatteryIndication const& value);
  bool batteryIndicationIsSet() const;
  void unsetBatteryIndication();
  /// <summary>
  ///
  /// </summary>
  std::string getValidityTime() const;
  void setValidityTime(std::string const& value);
  bool validityTimeIsSet() const;
  void unsetValidityTime();

  friend void to_json(nlohmann::json& j, const ExpectedUeBehaviourData& o);
  friend void from_json(const nlohmann::json& j, ExpectedUeBehaviourData& o);

 protected:
  oai::model::common::StationaryIndication m_StationaryIndication;
  bool m_StationaryIndicationIsSet;
  int32_t m_CommunicationDurationTime;
  bool m_CommunicationDurationTimeIsSet;
  int32_t m_PeriodicTime;
  bool m_PeriodicTimeIsSet;
  oai::model::common::ScheduledCommunicationTime m_ScheduledCommunicationTime;
  bool m_ScheduledCommunicationTimeIsSet;
  oai::model::common::ScheduledCommunicationType m_ScheduledCommunicationType;
  bool m_ScheduledCommunicationTypeIsSet;
  std::vector<LocationArea> m_ExpectedUmts;
  bool m_ExpectedUmtsIsSet;
  oai::model::common::TrafficProfile m_TrafficProfile;
  bool m_TrafficProfileIsSet;
  oai::model::common::BatteryIndication m_BatteryIndication;
  bool m_BatteryIndicationIsSet;
  std::string m_ValidityTime;
  bool m_ValidityTimeIsSet;
};

}  // namespace oai::udr::model

#endif /* ExpectedUeBehaviourData_H_ */
