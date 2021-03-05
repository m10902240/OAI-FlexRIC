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

#include "e2ap_server.h"
#include "type_defs.h"

#include <stdint.h>
#include <pthread.h>

int main()
{
  e2ap_ric_t ric;
  memset(&ric, 0, sizeof(ric));
  const char* server_ip_str = "127.0.0.1"; 
  const uint16_t server_port = 36421;

  e2ap_init_server(&ric, server_ip_str, server_port);
  e2ap_start_server(&ric); /* blocking */

  e2ap_stop_server(&ric);
  e2ap_free_server(&ric);
}