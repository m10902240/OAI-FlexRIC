#ifndef RRC_CONF_VERIFIER_H
#define RRC_CONF_VERIFIER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef RRC_CONF_READER_H
#include "rrc_conf_reader.h"
#endif
#include "flatcc/flatcc_verifier.h"
#ifndef RRC_COMMON_VERIFIER_H
#include "rrc_common_verifier.h"
#endif
#include "flatcc/flatcc_prologue.h"

static int rrc_conf_EventTrigger_verify_table(flatcc_table_verifier_descriptor_t *td);
static int rrc_conf_ReportStyle_verify_table(flatcc_table_verifier_descriptor_t *td);
static int rrc_conf_ActionDefinition_verify_table(flatcc_table_verifier_descriptor_t *td);
static int rrc_conf_IndicationHeader_verify_table(flatcc_table_verifier_descriptor_t *td);
static int rrc_conf_Lte_verify_table(flatcc_table_verifier_descriptor_t *td);
static int rrc_conf_Nr_verify_table(flatcc_table_verifier_descriptor_t *td);
static int rrc_conf_CarrierInfo_verify_table(flatcc_table_verifier_descriptor_t *td);
static int rrc_conf_BSStats_verify_table(flatcc_table_verifier_descriptor_t *td);
static int rrc_conf_IndicationMessage_verify_table(flatcc_table_verifier_descriptor_t *td);
static int rrc_conf_RanFunctionDefinition_verify_table(flatcc_table_verifier_descriptor_t *td);

static int rrc_conf_EventTrigger_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* reportOccasion */)) return ret;
    return flatcc_verify_ok;
}

static inline int rrc_conf_EventTrigger_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_EventTrigger_identifier, &rrc_conf_EventTrigger_verify_table);
}

static inline int rrc_conf_EventTrigger_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_EventTrigger_type_identifier, &rrc_conf_EventTrigger_verify_table);
}

static inline int rrc_conf_EventTrigger_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &rrc_conf_EventTrigger_verify_table);
}

static inline int rrc_conf_EventTrigger_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &rrc_conf_EventTrigger_verify_table);
}

static int rrc_conf_ReportStyle_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* type */)) return ret;
    return flatcc_verify_ok;
}

static inline int rrc_conf_ReportStyle_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_ReportStyle_identifier, &rrc_conf_ReportStyle_verify_table);
}

static inline int rrc_conf_ReportStyle_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_ReportStyle_type_identifier, &rrc_conf_ReportStyle_verify_table);
}

static inline int rrc_conf_ReportStyle_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &rrc_conf_ReportStyle_verify_table);
}

static inline int rrc_conf_ReportStyle_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &rrc_conf_ReportStyle_verify_table);
}

static int rrc_conf_ActionDefinition_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_field(td, 0, 0, &rrc_conf_ReportStyle_verify_table) /* reportStyle */)) return ret;
    return flatcc_verify_ok;
}

static inline int rrc_conf_ActionDefinition_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_ActionDefinition_identifier, &rrc_conf_ActionDefinition_verify_table);
}

static inline int rrc_conf_ActionDefinition_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_ActionDefinition_type_identifier, &rrc_conf_ActionDefinition_verify_table);
}

static inline int rrc_conf_ActionDefinition_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &rrc_conf_ActionDefinition_verify_table);
}

static inline int rrc_conf_ActionDefinition_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &rrc_conf_ActionDefinition_verify_table);
}

static int rrc_conf_IndicationHeader_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    return flatcc_verify_ok;
}

static inline int rrc_conf_IndicationHeader_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_IndicationHeader_identifier, &rrc_conf_IndicationHeader_verify_table);
}

static inline int rrc_conf_IndicationHeader_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_IndicationHeader_type_identifier, &rrc_conf_IndicationHeader_verify_table);
}

static inline int rrc_conf_IndicationHeader_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &rrc_conf_IndicationHeader_verify_table);
}

static inline int rrc_conf_IndicationHeader_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &rrc_conf_IndicationHeader_verify_table);
}

static int rrc_conf_Lte_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    return flatcc_verify_ok;
}

static inline int rrc_conf_Lte_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_Lte_identifier, &rrc_conf_Lte_verify_table);
}

static inline int rrc_conf_Lte_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_Lte_type_identifier, &rrc_conf_Lte_verify_table);
}

static inline int rrc_conf_Lte_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &rrc_conf_Lte_verify_table);
}

static inline int rrc_conf_Lte_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &rrc_conf_Lte_verify_table);
}

static int rrc_conf_Nr_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* numerology */)) return ret;
    return flatcc_verify_ok;
}

static inline int rrc_conf_Nr_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_Nr_identifier, &rrc_conf_Nr_verify_table);
}

static inline int rrc_conf_Nr_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_Nr_type_identifier, &rrc_conf_Nr_verify_table);
}

static inline int rrc_conf_Nr_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &rrc_conf_Nr_verify_table);
}

static inline int rrc_conf_Nr_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &rrc_conf_Nr_verify_table);
}

static int rrc_conf_CarrierInfo_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* id */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 2, 2) /* phyCellId */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 2, 2) /* band */)) return ret;
    if ((ret = flatcc_verify_field(td, 3, 8, 8) /* dlFreqHz */)) return ret;
    if ((ret = flatcc_verify_field(td, 4, 8, 8) /* ulFreqHz */)) return ret;
    if ((ret = flatcc_verify_field(td, 5, 2, 2) /* dlBandwidthPrb */)) return ret;
    if ((ret = flatcc_verify_field(td, 6, 2, 2) /* ulBandwidthPrb */)) return ret;
    if ((ret = flatcc_verify_field(td, 7, 1, 1) /* txAntennaPorts */)) return ret;
    if ((ret = flatcc_verify_field(td, 8, 1, 1) /* rxAnennaPorts */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 9, 0, &rrc_conf_Lte_verify_table) /* lte */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 10, 0, &rrc_conf_Nr_verify_table) /* nr */)) return ret;
    return flatcc_verify_ok;
}

static inline int rrc_conf_CarrierInfo_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_CarrierInfo_identifier, &rrc_conf_CarrierInfo_verify_table);
}

static inline int rrc_conf_CarrierInfo_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_CarrierInfo_type_identifier, &rrc_conf_CarrierInfo_verify_table);
}

static inline int rrc_conf_CarrierInfo_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &rrc_conf_CarrierInfo_verify_table);
}

static inline int rrc_conf_CarrierInfo_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &rrc_conf_CarrierInfo_verify_table);
}

static int rrc_conf_BSStats_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* rat */)) return ret;
    if ((ret = flatcc_verify_string_field(td, 1, 0) /* baseStationName */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 2, 0, &rrc_common_PlmnInfo_verify_table) /* plmnInfo */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 3, 0, &rrc_common_PlmnInfo_verify_table) /* targetPCell */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 4, 0, &rrc_conf_CarrierInfo_verify_table) /* carriers */)) return ret;
    return flatcc_verify_ok;
}

static inline int rrc_conf_BSStats_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_BSStats_identifier, &rrc_conf_BSStats_verify_table);
}

static inline int rrc_conf_BSStats_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_BSStats_type_identifier, &rrc_conf_BSStats_verify_table);
}

static inline int rrc_conf_BSStats_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &rrc_conf_BSStats_verify_table);
}

static inline int rrc_conf_BSStats_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &rrc_conf_BSStats_verify_table);
}

static int rrc_conf_IndicationMessage_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_field(td, 0, 0, &rrc_conf_BSStats_verify_table) /* bsStats */)) return ret;
    return flatcc_verify_ok;
}

static inline int rrc_conf_IndicationMessage_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_IndicationMessage_identifier, &rrc_conf_IndicationMessage_verify_table);
}

static inline int rrc_conf_IndicationMessage_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_IndicationMessage_type_identifier, &rrc_conf_IndicationMessage_verify_table);
}

static inline int rrc_conf_IndicationMessage_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &rrc_conf_IndicationMessage_verify_table);
}

static inline int rrc_conf_IndicationMessage_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &rrc_conf_IndicationMessage_verify_table);
}

static int rrc_conf_RanFunctionDefinition_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_vector_field(td, 0, 0, &rrc_conf_ReportStyle_verify_table) /* supportedReportStyles */)) return ret;
    return flatcc_verify_ok;
}

static inline int rrc_conf_RanFunctionDefinition_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_RanFunctionDefinition_identifier, &rrc_conf_RanFunctionDefinition_verify_table);
}

static inline int rrc_conf_RanFunctionDefinition_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, rrc_conf_RanFunctionDefinition_type_identifier, &rrc_conf_RanFunctionDefinition_verify_table);
}

static inline int rrc_conf_RanFunctionDefinition_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &rrc_conf_RanFunctionDefinition_verify_table);
}

static inline int rrc_conf_RanFunctionDefinition_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &rrc_conf_RanFunctionDefinition_verify_table);
}

#include "flatcc/flatcc_epilogue.h"
#endif /* RRC_CONF_VERIFIER_H */