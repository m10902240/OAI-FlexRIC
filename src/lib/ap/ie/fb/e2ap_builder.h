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



#ifndef E2AP_BUILDER_H
#define E2AP_BUILDER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef E2AP_READER_H
#include "e2ap_reader.h"
#endif
#ifndef FLATBUFFERS_COMMON_BUILDER_H
#include "flatbuffers_common_builder.h"
#endif
#ifndef GLOBAL_PROCEDURES_BUILDER_H
#include "global_procedures_builder.h"
#endif
#ifndef FUNCTIONAL_PROCEDURES_BUILDER_H
#include "functional_procedures_builder.h"
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension ".bin"
#endif

typedef flatbuffers_union_ref_t e2ap_Message_union_ref_t;
typedef flatbuffers_union_vec_ref_t e2ap_Message_union_vec_ref_t;
static e2ap_Message_union_ref_t e2ap_Message_clone(flatbuffers_builder_t *B, e2ap_Message_union_t t);

static const flatbuffers_voffset_t __e2ap_E2Message_required[] = { 0 };
typedef flatbuffers_ref_t e2ap_E2Message_ref_t;
static e2ap_E2Message_ref_t e2ap_E2Message_clone(flatbuffers_builder_t *B, e2ap_E2Message_table_t t);
__flatbuffers_build_table(flatbuffers_, e2ap_E2Message, 2)

#define __e2ap_E2Message_formal_args , e2ap_Message_union_ref_t v1
#define __e2ap_E2Message_call_args , v1
static inline e2ap_E2Message_ref_t e2ap_E2Message_create(flatbuffers_builder_t *B __e2ap_E2Message_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, e2ap_E2Message, e2ap_E2Message_file_identifier, e2ap_E2Message_type_identifier)

static inline e2ap_Message_union_ref_t e2ap_Message_as_NONE(void)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_NONE; uref.value = 0; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_subscriptionRequest(e2ap_RicSubscriptionRequest_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_subscriptionRequest; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_subscriptionResponse(e2ap_RicSubscriptionResponse_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_subscriptionResponse; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_subscriptionFailure(e2ap_RicSubscriptionFailure_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_subscriptionFailure; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_subscriptionDeleteRequest(e2ap_RicSubscriptionDeleteRequest_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_subscriptionDeleteRequest; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_subscriptionDeleteResponse(e2ap_RicSubscriptionDeleteResponse_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_subscriptionDeleteResponse; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_subscriptionDeleteFailure(e2ap_RicSubscriptionDeleteFailure_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_subscriptionDeleteFailure; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_indication(e2ap_RicIndication_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_indication; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_controlRequest(e2ap_RicControlRequest_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_controlRequest; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_controlAcknowledge(e2ap_RicControlAcknowledge_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_controlAcknowledge; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_controlFailure(e2ap_RicControlFailure_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_controlFailure; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_errorIndication(e2ap_ErrorIndication_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_errorIndication; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_setupRequest(e2ap_E2SetupRequest_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_setupRequest; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_setupResponse(e2ap_E2SetupResponse_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_setupResponse; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_setupFailure(e2ap_E2SetupFailure_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_setupFailure; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_resetRequest(e2ap_ResetRequest_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_resetRequest; uref.value = ref; return uref; }
static inline e2ap_Message_union_ref_t e2ap_Message_as_resetResponse(e2ap_ResetResponse_ref_t ref)
{ e2ap_Message_union_ref_t uref; uref.type = e2ap_Message_resetResponse; uref.value = ref; return uref; }
__flatbuffers_build_union_vector(flatbuffers_, e2ap_Message)

static e2ap_Message_union_ref_t e2ap_Message_clone(flatbuffers_builder_t *B, e2ap_Message_union_t u)
{
    switch (u.type) {
    case 1: return e2ap_Message_as_subscriptionRequest(e2ap_RicSubscriptionRequest_clone(B, (e2ap_RicSubscriptionRequest_table_t)u.value));
    case 2: return e2ap_Message_as_subscriptionResponse(e2ap_RicSubscriptionResponse_clone(B, (e2ap_RicSubscriptionResponse_table_t)u.value));
    case 3: return e2ap_Message_as_subscriptionFailure(e2ap_RicSubscriptionFailure_clone(B, (e2ap_RicSubscriptionFailure_table_t)u.value));
    case 4: return e2ap_Message_as_subscriptionDeleteRequest(e2ap_RicSubscriptionDeleteRequest_clone(B, (e2ap_RicSubscriptionDeleteRequest_table_t)u.value));
    case 5: return e2ap_Message_as_subscriptionDeleteResponse(e2ap_RicSubscriptionDeleteResponse_clone(B, (e2ap_RicSubscriptionDeleteResponse_table_t)u.value));
    case 6: return e2ap_Message_as_subscriptionDeleteFailure(e2ap_RicSubscriptionDeleteFailure_clone(B, (e2ap_RicSubscriptionDeleteFailure_table_t)u.value));
    case 7: return e2ap_Message_as_indication(e2ap_RicIndication_clone(B, (e2ap_RicIndication_table_t)u.value));
    case 8: return e2ap_Message_as_controlRequest(e2ap_RicControlRequest_clone(B, (e2ap_RicControlRequest_table_t)u.value));
    case 9: return e2ap_Message_as_controlAcknowledge(e2ap_RicControlAcknowledge_clone(B, (e2ap_RicControlAcknowledge_table_t)u.value));
    case 10: return e2ap_Message_as_controlFailure(e2ap_RicControlFailure_clone(B, (e2ap_RicControlFailure_table_t)u.value));
    case 11: return e2ap_Message_as_errorIndication(e2ap_ErrorIndication_clone(B, (e2ap_ErrorIndication_table_t)u.value));
    case 12: return e2ap_Message_as_setupRequest(e2ap_E2SetupRequest_clone(B, (e2ap_E2SetupRequest_table_t)u.value));
    case 13: return e2ap_Message_as_setupResponse(e2ap_E2SetupResponse_clone(B, (e2ap_E2SetupResponse_table_t)u.value));
    case 14: return e2ap_Message_as_setupFailure(e2ap_E2SetupFailure_clone(B, (e2ap_E2SetupFailure_table_t)u.value));
    case 15: return e2ap_Message_as_resetRequest(e2ap_ResetRequest_clone(B, (e2ap_ResetRequest_table_t)u.value));
    case 16: return e2ap_Message_as_resetResponse(e2ap_ResetResponse_clone(B, (e2ap_ResetResponse_table_t)u.value));
    default: return e2ap_Message_as_NONE();
    }
}

__flatbuffers_build_union_field(1, flatbuffers_, e2ap_E2Message_msg, e2ap_Message, e2ap_E2Message)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, subscriptionRequest, e2ap_RicSubscriptionRequest)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, subscriptionResponse, e2ap_RicSubscriptionResponse)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, subscriptionFailure, e2ap_RicSubscriptionFailure)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, subscriptionDeleteRequest, e2ap_RicSubscriptionDeleteRequest)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, subscriptionDeleteResponse, e2ap_RicSubscriptionDeleteResponse)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, subscriptionDeleteFailure, e2ap_RicSubscriptionDeleteFailure)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, indication, e2ap_RicIndication)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, controlRequest, e2ap_RicControlRequest)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, controlAcknowledge, e2ap_RicControlAcknowledge)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, controlFailure, e2ap_RicControlFailure)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, errorIndication, e2ap_ErrorIndication)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, setupRequest, e2ap_E2SetupRequest)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, setupResponse, e2ap_E2SetupResponse)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, setupFailure, e2ap_E2SetupFailure)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, resetRequest, e2ap_ResetRequest)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2Message_msg, e2ap_Message, resetResponse, e2ap_ResetResponse)

static inline e2ap_E2Message_ref_t e2ap_E2Message_create(flatbuffers_builder_t *B __e2ap_E2Message_formal_args)
{
    if (e2ap_E2Message_start(B)
        || e2ap_E2Message_msg_add_value(B, v1)
        || e2ap_E2Message_msg_add_type(B, v1.type)) {
        return 0;
    }
    return e2ap_E2Message_end(B);
}

static e2ap_E2Message_ref_t e2ap_E2Message_clone(flatbuffers_builder_t *B, e2ap_E2Message_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (e2ap_E2Message_start(B)
        || e2ap_E2Message_msg_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, e2ap_E2Message_end(B));
}

#include "flatcc/flatcc_epilogue.h"
#endif /* E2AP_BUILDER_H */
