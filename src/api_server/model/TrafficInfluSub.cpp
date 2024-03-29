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

#include "TrafficInfluSub.h"

namespace oai::udr::model {

TrafficInfluSub::TrafficInfluSub() {
  m_DnnsIsSet              = false;
  m_SnssaisIsSet           = false;
  m_InternalGroupIdsIsSet  = false;
  m_SupisIsSet             = false;
  m_NotificationUri        = "";
  m_Expiry                 = "";
  m_ExpiryIsSet            = false;
  m_SupportedFeatures      = "";
  m_SupportedFeaturesIsSet = false;
}

TrafficInfluSub::~TrafficInfluSub() {}

void TrafficInfluSub::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const TrafficInfluSub& o) {
  j = nlohmann::json();
  if (o.dnnsIsSet() || !o.m_Dnns.empty()) j["dnns"] = o.m_Dnns;
  if (o.snssaisIsSet() || !o.m_Snssais.empty()) j["snssais"] = o.m_Snssais;
  if (o.internalGroupIdsIsSet() || !o.m_InternalGroupIds.empty())
    j["internalGroupIds"] = o.m_InternalGroupIds;
  if (o.supisIsSet() || !o.m_Supis.empty()) j["supis"] = o.m_Supis;
  j["notificationUri"] = o.m_NotificationUri;
  if (o.expiryIsSet()) j["expiry"] = o.m_Expiry;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json& j, TrafficInfluSub& o) {
  if (j.find("dnns") != j.end()) {
    j.at("dnns").get_to(o.m_Dnns);
    o.m_DnnsIsSet = true;
  }
  if (j.find("snssais") != j.end()) {
    j.at("snssais").get_to(o.m_Snssais);
    o.m_SnssaisIsSet = true;
  }
  if (j.find("internalGroupIds") != j.end()) {
    j.at("internalGroupIds").get_to(o.m_InternalGroupIds);
    o.m_InternalGroupIdsIsSet = true;
  }
  if (j.find("supis") != j.end()) {
    j.at("supis").get_to(o.m_Supis);
    o.m_SupisIsSet = true;
  }
  j.at("notificationUri").get_to(o.m_NotificationUri);
  if (j.find("expiry") != j.end()) {
    j.at("expiry").get_to(o.m_Expiry);
    o.m_ExpiryIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

std::vector<std::string>& TrafficInfluSub::getDnns() {
  return m_Dnns;
}
void TrafficInfluSub::setDnns(std::vector<std::string> const& value) {
  m_Dnns      = value;
  m_DnnsIsSet = true;
}
bool TrafficInfluSub::dnnsIsSet() const {
  return m_DnnsIsSet;
}
void TrafficInfluSub::unsetDnns() {
  m_DnnsIsSet = false;
}
std::vector<oai::model::common::Snssai>& TrafficInfluSub::getSnssais() {
  return m_Snssais;
}
void TrafficInfluSub::setSnssais(
    std::vector<oai::model::common::Snssai> const& value) {
  m_Snssais      = value;
  m_SnssaisIsSet = true;
}
bool TrafficInfluSub::snssaisIsSet() const {
  return m_SnssaisIsSet;
}
void TrafficInfluSub::unsetSnssais() {
  m_SnssaisIsSet = false;
}
std::vector<std::string>& TrafficInfluSub::getInternalGroupIds() {
  return m_InternalGroupIds;
}
void TrafficInfluSub::setInternalGroupIds(
    std::vector<std::string> const& value) {
  m_InternalGroupIds      = value;
  m_InternalGroupIdsIsSet = true;
}
bool TrafficInfluSub::internalGroupIdsIsSet() const {
  return m_InternalGroupIdsIsSet;
}
void TrafficInfluSub::unsetInternalGroupIds() {
  m_InternalGroupIdsIsSet = false;
}
std::vector<std::string>& TrafficInfluSub::getSupis() {
  return m_Supis;
}
void TrafficInfluSub::setSupis(std::vector<std::string> const& value) {
  m_Supis      = value;
  m_SupisIsSet = true;
}
bool TrafficInfluSub::supisIsSet() const {
  return m_SupisIsSet;
}
void TrafficInfluSub::unsetSupis() {
  m_SupisIsSet = false;
}
std::string TrafficInfluSub::getNotificationUri() const {
  return m_NotificationUri;
}
void TrafficInfluSub::setNotificationUri(std::string const& value) {
  m_NotificationUri = value;
}
std::string TrafficInfluSub::getExpiry() const {
  return m_Expiry;
}
void TrafficInfluSub::setExpiry(std::string const& value) {
  m_Expiry      = value;
  m_ExpiryIsSet = true;
}
bool TrafficInfluSub::expiryIsSet() const {
  return m_ExpiryIsSet;
}
void TrafficInfluSub::unsetExpiry() {
  m_ExpiryIsSet = false;
}
std::string TrafficInfluSub::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void TrafficInfluSub::setSupportedFeatures(std::string const& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}
bool TrafficInfluSub::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void TrafficInfluSub::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

}  // namespace oai::udr::model
