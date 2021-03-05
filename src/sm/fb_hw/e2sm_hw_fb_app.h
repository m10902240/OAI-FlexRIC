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

#ifndef E2SM_HW_APP_H
#define E2SM_HW_APP_H

#include <pthread.h>
#include <sys/time.h>
#include <stdint.h>

#include "byte_array.h"
#include "e2sm_hw_reader.h"

#include "e2ap_server.h"

/* This app will check all connecting RANs. When one has the E2SM-HW-FB RAN
 * function definition, it will send a subscription and periodically control
 * messages in order to receive indication messages and measure the RTT */
typedef struct e2sm_hw_fb_app_s {
  e2ap_ric_t* server;

  ran_t* ran;
  int assoc_id;
  ric_gen_id_t ric_id;

  unsigned int ping_interval_ms;
  int fd;

  struct timeval control_sent;
  int count;
} e2sm_hw_fb_app_t;

void e2sm_hw_fb_app_init(e2sm_hw_fb_app_t* app, e2ap_ric_t* server, unsigned int ping_interval_ms);
void e2sm_hw_fb_app_free(e2sm_hw_fb_app_t* app);

byte_array_t e2sm_hw_fb_generate_action_definition(void);

byte_array_t e2sm_hw_fb_generate_event_trigger_definition(hw_TriggerNature_enum_t n);

byte_array_t e2sm_hw_fb_decode_indication_message(byte_array_t b);
uint32_t e2sm_hw_fb_decode_indication_header(byte_array_t b);

byte_array_t e2sm_hw_fb_generate_control_message(byte_array_t b);
byte_array_t e2sm_hw_fb_generate_control_header(uint32_t c);

#endif /* E2SM_HW_APP_H */