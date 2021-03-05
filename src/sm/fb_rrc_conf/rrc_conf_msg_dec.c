/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
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

#include <stdio.h>

#include "rrc_conf_msg_dec.h"

#include "rrc_conf_reader.h"
#include "rrc_conf_verifier.h"

rrc_conf_report_occasion_e rrc_conf_decode_event_trigger(byte_array_t b)
{
  assert(b.buf && b.len > 0);
  int ret;
  if ((ret = rrc_conf_EventTrigger_verify_as_root(b.buf, b.len))) {
    printf("EventTrigger is invalid: %s\n", flatcc_verify_error_string(ret));
    abort();
  }
  rrc_conf_EventTrigger_table_t et = rrc_conf_EventTrigger_as_root(b.buf);
  return rrc_conf_EventTrigger_reportOccasion(et);
}

rrc_conf_report_style_t rrc_conf_decode_action_definition(byte_array_t b)
{
  assert(b.buf && b.len > 0);
  int ret;
  if ((ret = rrc_conf_ActionDefinition_verify_as_root(b.buf, b.len))) {
    printf("ActionDefinition is invalid: %s\n", flatcc_verify_error_string(ret));
    abort();
  }
  rrc_conf_ActionDefinition_table_t ad = rrc_conf_ActionDefinition_as_root(b.buf);
  rrc_conf_ReportStyle_table_t rs = rrc_conf_ActionDefinition_reportStyle(ad);
  return (rrc_conf_report_style_t) { .type = rrc_conf_ReportStyle_type(rs) };
}

/*
uint16_t rrc_conf_decode_indication_header(byte_array_t b)
{
  assert(b.buf && b.len > 0);
  int ret;
  if ((ret = rrc_conf_IndicationHeader_verify_as_root(b.buf, b.len))) {
    printf("IndicationHeader is invalid: %s\n", flatcc_verify_error_string(ret));
    abort();
  }
  rrc_conf_IndicationHeader_table_t ih = rrc_conf_IndicationHeader_as_root(b.buf);
  //return rrc_conf_IndicationHeader_rnti(ih);
  return 0;
}
*/

size_t rrc_conf_decode_ran_function(byte_array_t b, rrc_conf_report_style_t** styles)
{
  assert(b.buf && b.len > 0);
  int ret;
  if ((ret = rrc_conf_RanFunctionDefinition_verify_as_root(b.buf, b.len))) {
    printf("RanFunctionDefinition is invalid: %s\n", flatcc_verify_error_string(ret));
    abort();
  }
  rrc_conf_RanFunctionDefinition_table_t rfd = rrc_conf_RanFunctionDefinition_as_root(b.buf);
  rrc_conf_ReportStyle_vec_t rs_vec = rrc_conf_RanFunctionDefinition_supportedReportStyles(rfd);
  const size_t rs_vec_len = rrc_conf_ReportStyle_vec_len(rs_vec);
  rrc_conf_report_style_t* s = malloc(rs_vec_len * sizeof(*s));
  assert(s);
  for (size_t i = 0; i < rs_vec_len; ++i) {
    rrc_conf_ReportStyle_table_t rs = rrc_conf_ReportStyle_vec_at(rs_vec, i);
    rrc_conf_report_style_t* style = &s[i];
    style->type = rrc_conf_ReportStyle_type(rs);
  }
  *styles = s;
  return rs_vec_len;
}