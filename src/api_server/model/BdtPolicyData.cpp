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

#include "BdtPolicyData.h"

namespace oai::udr::model {

BdtPolicyData::BdtPolicyData() {
  m_InterGroupId      = "";
  m_InterGroupIdIsSet = false;
  m_Supi              = "";
  m_SupiIsSet         = false;
  m_BdtRefId          = "";
  m_Dnn               = "";
  m_DnnIsSet          = false;
  m_SnssaiIsSet       = false;
  m_ResUri            = "";
  m_ResUriIsSet       = false;
}

BdtPolicyData::~BdtPolicyData() {}

void BdtPolicyData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const BdtPolicyData& o) {
  j = nlohmann::json();
  if (o.interGroupIdIsSet()) j["interGroupId"] = o.m_InterGroupId;
  if (o.supiIsSet()) j["supi"] = o.m_Supi;
  j["bdtRefId"] = o.m_BdtRefId;
  if (o.dnnIsSet()) j["dnn"] = o.m_Dnn;
  if (o.snssaiIsSet()) j["snssai"] = o.m_Snssai;
  if (o.resUriIsSet()) j["resUri"] = o.m_ResUri;
}

void from_json(const nlohmann::json& j, BdtPolicyData& o) {
  if (j.find("interGroupId") != j.end()) {
    j.at("interGroupId").get_to(o.m_InterGroupId);
    o.m_InterGroupIdIsSet = true;
  }
  if (j.find("supi") != j.end()) {
    j.at("supi").get_to(o.m_Supi);
    o.m_SupiIsSet = true;
  }
  j.at("bdtRefId").get_to(o.m_BdtRefId);
  if (j.find("dnn") != j.end()) {
    j.at("dnn").get_to(o.m_Dnn);
    o.m_DnnIsSet = true;
  }
  if (j.find("snssai") != j.end()) {
    j.at("snssai").get_to(o.m_Snssai);
    o.m_SnssaiIsSet = true;
  }
  if (j.find("resUri") != j.end()) {
    j.at("resUri").get_to(o.m_ResUri);
    o.m_ResUriIsSet = true;
  }
}

std::string BdtPolicyData::getInterGroupId() const {
  return m_InterGroupId;
}
void BdtPolicyData::setInterGroupId(std::string const& value) {
  m_InterGroupId      = value;
  m_InterGroupIdIsSet = true;
}
bool BdtPolicyData::interGroupIdIsSet() const {
  return m_InterGroupIdIsSet;
}
void BdtPolicyData::unsetInterGroupId() {
  m_InterGroupIdIsSet = false;
}
std::string BdtPolicyData::getSupi() const {
  return m_Supi;
}
void BdtPolicyData::setSupi(std::string const& value) {
  m_Supi      = value;
  m_SupiIsSet = true;
}
bool BdtPolicyData::supiIsSet() const {
  return m_SupiIsSet;
}
void BdtPolicyData::unsetSupi() {
  m_SupiIsSet = false;
}
std::string BdtPolicyData::getBdtRefId() const {
  return m_BdtRefId;
}
void BdtPolicyData::setBdtRefId(std::string const& value) {
  m_BdtRefId = value;
}
std::string BdtPolicyData::getDnn() const {
  return m_Dnn;
}
void BdtPolicyData::setDnn(std::string const& value) {
  m_Dnn      = value;
  m_DnnIsSet = true;
}
bool BdtPolicyData::dnnIsSet() const {
  return m_DnnIsSet;
}
void BdtPolicyData::unsetDnn() {
  m_DnnIsSet = false;
}
oai::model::common::Snssai BdtPolicyData::getSnssai() const {
  return m_Snssai;
}
void BdtPolicyData::setSnssai(oai::model::common::Snssai const& value) {
  m_Snssai      = value;
  m_SnssaiIsSet = true;
}
bool BdtPolicyData::snssaiIsSet() const {
  return m_SnssaiIsSet;
}
void BdtPolicyData::unsetSnssai() {
  m_SnssaiIsSet = false;
}
std::string BdtPolicyData::getResUri() const {
  return m_ResUri;
}
void BdtPolicyData::setResUri(std::string const& value) {
  m_ResUri      = value;
  m_ResUriIsSet = true;
}
bool BdtPolicyData::resUriIsSet() const {
  return m_ResUriIsSet;
}
void BdtPolicyData::unsetResUri() {
  m_ResUriIsSet = false;
}

}  // namespace oai::udr::model
