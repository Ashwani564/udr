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
/*
 * SearchExpression.h
 *
 * A logical expression element
 */

#ifndef SearchExpression_H_
#define SearchExpression_H_

#include "RecordIdList.h"
#include <string>
#include <vector>
#include "ComparisonOperator.h"
#include "ConditionOperator.h"
#include "SearchCondition.h"
#include <nlohmann/json.hpp>

namespace oai::model::udsf {

/// <summary>
/// A logical expression element
/// </summary>
class SearchExpression {
 public:
  SearchExpression();
  virtual ~SearchExpression() = default;

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

  bool operator==(const SearchExpression& rhs) const;
  bool operator!=(const SearchExpression& rhs) const;

  /////////////////////////////////////////////
  /// SearchExpression members

  oai::model::udsf::SearchCondition getSearchCondition() const;
  void setSearchCondition(oai::model::udsf::SearchCondition const& value);

  bool searchConditionIsSet() const;
  void unsetSearchCondition();

  oai::model::udsf::SearchComparison getSearchComparison() const;
  void setSearchComparison(oai::model::udsf::SearchComparison const& value);

  bool searchComparisonIsSet() const;
  void unsetSearchComparison();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> getRecordIdList() const;
  void setRecordIdList(std::vector<std::string> const& value);

  bool recordIdListIsSet() const;
  void unsetRecordIdList();

  friend void to_json(nlohmann::json& j, const SearchExpression& o);
  friend void from_json(const nlohmann::json& j, SearchExpression& o);

 protected:
  oai::model::udsf::SearchCondition m_SearchCondition;
  bool m_SearchConditionIsSet;
  oai::model::udsf::SearchComparison m_SearchComparison;
  bool m_SearchComparisonIsSet;
  std::vector<std::string> m_RecordIdList;
  bool m_RecordIdListIsSet;
};

}  // namespace oai::model::udsf

#endif /* SearchExpression_H_ */
