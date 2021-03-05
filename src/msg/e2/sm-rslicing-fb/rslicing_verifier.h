#ifndef RSLICING_VERIFIER_H
#define RSLICING_VERIFIER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef RSLICING_READER_H
#include "rslicing_reader.h"
#endif
#include "flatcc/flatcc_verifier.h"
#include "flatcc/flatcc_prologue.h"

static int mac_rslicing_StaticSlice_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_NvsRate_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_NvsCapacity_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_NvsSlice_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_Scn19OnDemand_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_Scn19Slice_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_EdfSlice_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_Slice_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_UlDlSliceConfig_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_SliceConfig_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_UeSliceAssoc_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_UeSliceConfig_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_DelSliceConfig_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_EventTrigger_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_IndicationHeader_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_IndicationMessage_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_ControlHeader_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_AddModSliceCommand_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_DelSliceCommand_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_UeSliceAssocCommand_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_ControlMessage_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_ControlOutcome_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_CallProcessId_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_SupportedAlgorithm_verify_table(flatcc_table_verifier_descriptor_t *td);
static int mac_rslicing_RanFunctionDefinition_verify_table(flatcc_table_verifier_descriptor_t *td);

static int mac_rslicing_NvsSliceConfig_union_verifier(flatcc_union_verifier_descriptor_t *ud)
{
    switch (ud->type) {
    case 1: return flatcc_verify_union_table(ud, mac_rslicing_NvsRate_verify_table); /* rate */
    case 2: return flatcc_verify_union_table(ud, mac_rslicing_NvsCapacity_verify_table); /* capacity */
    default: return flatcc_verify_ok;
    }
}

static int mac_rslicing_Scn19SliceConfig_union_verifier(flatcc_union_verifier_descriptor_t *ud)
{
    switch (ud->type) {
    case 1: return flatcc_verify_union_table(ud, mac_rslicing_NvsRate_verify_table); /* dynamic */
    case 2: return flatcc_verify_union_table(ud, mac_rslicing_StaticSlice_verify_table); /* fixed */
    case 3: return flatcc_verify_union_table(ud, mac_rslicing_Scn19OnDemand_verify_table); /* ondemand */
    default: return flatcc_verify_ok;
    }
}

static int mac_rslicing_SliceParams_union_verifier(flatcc_union_verifier_descriptor_t *ud)
{
    switch (ud->type) {
    case 1: return flatcc_verify_union_table(ud, mac_rslicing_StaticSlice_verify_table); /* static */
    case 2: return flatcc_verify_union_table(ud, mac_rslicing_NvsSlice_verify_table); /* nvs */
    case 3: return flatcc_verify_union_table(ud, mac_rslicing_Scn19Slice_verify_table); /* scn19 */
    case 4: return flatcc_verify_union_table(ud, mac_rslicing_EdfSlice_verify_table); /* edf */
    default: return flatcc_verify_ok;
    }
}

static int mac_rslicing_ControlCommand_union_verifier(flatcc_union_verifier_descriptor_t *ud)
{
    switch (ud->type) {
    case 1: return flatcc_verify_union_table(ud, mac_rslicing_AddModSliceCommand_verify_table); /* addModSlice */
    case 2: return flatcc_verify_union_table(ud, mac_rslicing_DelSliceCommand_verify_table); /* delSlice */
    case 3: return flatcc_verify_union_table(ud, mac_rslicing_UeSliceAssocCommand_verify_table); /* ueSliceAssoc */
    default: return flatcc_verify_ok;
    }
}

static int mac_rslicing_StaticSlice_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 4, 4) /* posLow */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 4, 4) /* posHigh */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_StaticSlice_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_StaticSlice_identifier, &mac_rslicing_StaticSlice_verify_table);
}

static inline int mac_rslicing_StaticSlice_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_StaticSlice_type_identifier, &mac_rslicing_StaticSlice_verify_table);
}

static inline int mac_rslicing_StaticSlice_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_StaticSlice_verify_table);
}

static inline int mac_rslicing_StaticSlice_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_StaticSlice_verify_table);
}

static int mac_rslicing_NvsRate_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 4, 4) /* mbpsRequired */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 4, 4) /* mbpsReference */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_NvsRate_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_NvsRate_identifier, &mac_rslicing_NvsRate_verify_table);
}

static inline int mac_rslicing_NvsRate_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_NvsRate_type_identifier, &mac_rslicing_NvsRate_verify_table);
}

static inline int mac_rslicing_NvsRate_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_NvsRate_verify_table);
}

static inline int mac_rslicing_NvsRate_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_NvsRate_verify_table);
}

static int mac_rslicing_NvsCapacity_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 4, 4) /* pctReserved */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_NvsCapacity_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_NvsCapacity_identifier, &mac_rslicing_NvsCapacity_verify_table);
}

static inline int mac_rslicing_NvsCapacity_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_NvsCapacity_type_identifier, &mac_rslicing_NvsCapacity_verify_table);
}

static inline int mac_rslicing_NvsCapacity_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_NvsCapacity_verify_table);
}

static inline int mac_rslicing_NvsCapacity_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_NvsCapacity_verify_table);
}

static int mac_rslicing_NvsSlice_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_union_field(td, 1, 0, &mac_rslicing_NvsSliceConfig_union_verifier) /* config */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_NvsSlice_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_NvsSlice_identifier, &mac_rslicing_NvsSlice_verify_table);
}

static inline int mac_rslicing_NvsSlice_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_NvsSlice_type_identifier, &mac_rslicing_NvsSlice_verify_table);
}

static inline int mac_rslicing_NvsSlice_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_NvsSlice_verify_table);
}

static inline int mac_rslicing_NvsSlice_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_NvsSlice_verify_table);
}

static int mac_rslicing_Scn19OnDemand_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 4, 4) /* pctReserved */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 4, 4) /* tau */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 4, 4) /* logDelta */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_Scn19OnDemand_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_Scn19OnDemand_identifier, &mac_rslicing_Scn19OnDemand_verify_table);
}

static inline int mac_rslicing_Scn19OnDemand_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_Scn19OnDemand_type_identifier, &mac_rslicing_Scn19OnDemand_verify_table);
}

static inline int mac_rslicing_Scn19OnDemand_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_Scn19OnDemand_verify_table);
}

static inline int mac_rslicing_Scn19OnDemand_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_Scn19OnDemand_verify_table);
}

static int mac_rslicing_Scn19Slice_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_union_field(td, 1, 0, &mac_rslicing_Scn19SliceConfig_union_verifier) /* config */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_Scn19Slice_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_Scn19Slice_identifier, &mac_rslicing_Scn19Slice_verify_table);
}

static inline int mac_rslicing_Scn19Slice_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_Scn19Slice_type_identifier, &mac_rslicing_Scn19Slice_verify_table);
}

static inline int mac_rslicing_Scn19Slice_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_Scn19Slice_verify_table);
}

static inline int mac_rslicing_Scn19Slice_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_Scn19Slice_verify_table);
}

static int mac_rslicing_EdfSlice_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 4, 4) /* deadline */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 4, 4) /* guaranteedPrbs */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 4, 4) /* maxReplenish */)) return ret;
    if ((ret = flatcc_verify_vector_field(td, 3, 0, 4, 4, INT64_C(1073741823)) /* override */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_EdfSlice_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_EdfSlice_identifier, &mac_rslicing_EdfSlice_verify_table);
}

static inline int mac_rslicing_EdfSlice_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_EdfSlice_type_identifier, &mac_rslicing_EdfSlice_verify_table);
}

static inline int mac_rslicing_EdfSlice_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_EdfSlice_verify_table);
}

static inline int mac_rslicing_EdfSlice_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_EdfSlice_verify_table);
}

static int mac_rslicing_Slice_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 4, 4) /* id */)) return ret;
    if ((ret = flatcc_verify_string_field(td, 1, 0) /* label */)) return ret;
    if ((ret = flatcc_verify_string_field(td, 2, 0) /* scheduler */)) return ret;
    if ((ret = flatcc_verify_union_field(td, 4, 0, &mac_rslicing_SliceParams_union_verifier) /* params */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_Slice_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_Slice_identifier, &mac_rslicing_Slice_verify_table);
}

static inline int mac_rslicing_Slice_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_Slice_type_identifier, &mac_rslicing_Slice_verify_table);
}

static inline int mac_rslicing_Slice_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_Slice_verify_table);
}

static inline int mac_rslicing_Slice_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_Slice_verify_table);
}

static int mac_rslicing_UlDlSliceConfig_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* algorithm */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 1, 0, &mac_rslicing_Slice_verify_table) /* slices */)) return ret;
    if ((ret = flatcc_verify_string_field(td, 2, 0) /* scheduler */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_UlDlSliceConfig_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_UlDlSliceConfig_identifier, &mac_rslicing_UlDlSliceConfig_verify_table);
}

static inline int mac_rslicing_UlDlSliceConfig_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_UlDlSliceConfig_type_identifier, &mac_rslicing_UlDlSliceConfig_verify_table);
}

static inline int mac_rslicing_UlDlSliceConfig_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_UlDlSliceConfig_verify_table);
}

static inline int mac_rslicing_UlDlSliceConfig_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_UlDlSliceConfig_verify_table);
}

static int mac_rslicing_SliceConfig_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_field(td, 0, 0, &mac_rslicing_UlDlSliceConfig_verify_table) /* dl */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 1, 0, &mac_rslicing_UlDlSliceConfig_verify_table) /* ul */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_SliceConfig_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_SliceConfig_identifier, &mac_rslicing_SliceConfig_verify_table);
}

static inline int mac_rslicing_SliceConfig_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_SliceConfig_type_identifier, &mac_rslicing_SliceConfig_verify_table);
}

static inline int mac_rslicing_SliceConfig_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_SliceConfig_verify_table);
}

static inline int mac_rslicing_SliceConfig_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_SliceConfig_verify_table);
}

static int mac_rslicing_UeSliceAssoc_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 2, 2) /* rnti */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 4, 4) /* dlId */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 4, 4) /* ulId */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_UeSliceAssoc_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_UeSliceAssoc_identifier, &mac_rslicing_UeSliceAssoc_verify_table);
}

static inline int mac_rslicing_UeSliceAssoc_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_UeSliceAssoc_type_identifier, &mac_rslicing_UeSliceAssoc_verify_table);
}

static inline int mac_rslicing_UeSliceAssoc_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_UeSliceAssoc_verify_table);
}

static inline int mac_rslicing_UeSliceAssoc_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_UeSliceAssoc_verify_table);
}

static int mac_rslicing_UeSliceConfig_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_vector_field(td, 0, 0, &mac_rslicing_UeSliceAssoc_verify_table) /* ues */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_UeSliceConfig_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_UeSliceConfig_identifier, &mac_rslicing_UeSliceConfig_verify_table);
}

static inline int mac_rslicing_UeSliceConfig_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_UeSliceConfig_type_identifier, &mac_rslicing_UeSliceConfig_verify_table);
}

static inline int mac_rslicing_UeSliceConfig_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_UeSliceConfig_verify_table);
}

static inline int mac_rslicing_UeSliceConfig_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_UeSliceConfig_verify_table);
}

static int mac_rslicing_DelSliceConfig_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_vector_field(td, 0, 0, 4, 4, INT64_C(1073741823)) /* dl */)) return ret;
    if ((ret = flatcc_verify_vector_field(td, 1, 0, 4, 4, INT64_C(1073741823)) /* ul */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_DelSliceConfig_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_DelSliceConfig_identifier, &mac_rslicing_DelSliceConfig_verify_table);
}

static inline int mac_rslicing_DelSliceConfig_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_DelSliceConfig_type_identifier, &mac_rslicing_DelSliceConfig_verify_table);
}

static inline int mac_rslicing_DelSliceConfig_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_DelSliceConfig_verify_table);
}

static inline int mac_rslicing_DelSliceConfig_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_DelSliceConfig_verify_table);
}

static int mac_rslicing_EventTrigger_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* reportOccasion */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_EventTrigger_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_EventTrigger_identifier, &mac_rslicing_EventTrigger_verify_table);
}

static inline int mac_rslicing_EventTrigger_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_EventTrigger_type_identifier, &mac_rslicing_EventTrigger_verify_table);
}

static inline int mac_rslicing_EventTrigger_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_EventTrigger_verify_table);
}

static inline int mac_rslicing_EventTrigger_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_EventTrigger_verify_table);
}

static int mac_rslicing_IndicationHeader_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    return flatcc_verify_ok;
}

static inline int mac_rslicing_IndicationHeader_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_IndicationHeader_identifier, &mac_rslicing_IndicationHeader_verify_table);
}

static inline int mac_rslicing_IndicationHeader_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_IndicationHeader_type_identifier, &mac_rslicing_IndicationHeader_verify_table);
}

static inline int mac_rslicing_IndicationHeader_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_IndicationHeader_verify_table);
}

static inline int mac_rslicing_IndicationHeader_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_IndicationHeader_verify_table);
}

static int mac_rslicing_IndicationMessage_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_field(td, 0, 0, &mac_rslicing_SliceConfig_verify_table) /* sliceConfig */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 1, 0, &mac_rslicing_UeSliceConfig_verify_table) /* ueSliceConfig */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_IndicationMessage_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_IndicationMessage_identifier, &mac_rslicing_IndicationMessage_verify_table);
}

static inline int mac_rslicing_IndicationMessage_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_IndicationMessage_type_identifier, &mac_rslicing_IndicationMessage_verify_table);
}

static inline int mac_rslicing_IndicationMessage_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_IndicationMessage_verify_table);
}

static inline int mac_rslicing_IndicationMessage_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_IndicationMessage_verify_table);
}

static int mac_rslicing_ControlHeader_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    return flatcc_verify_ok;
}

static inline int mac_rslicing_ControlHeader_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_ControlHeader_identifier, &mac_rslicing_ControlHeader_verify_table);
}

static inline int mac_rslicing_ControlHeader_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_ControlHeader_type_identifier, &mac_rslicing_ControlHeader_verify_table);
}

static inline int mac_rslicing_ControlHeader_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_ControlHeader_verify_table);
}

static inline int mac_rslicing_ControlHeader_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_ControlHeader_verify_table);
}

static int mac_rslicing_AddModSliceCommand_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_field(td, 0, 0, &mac_rslicing_SliceConfig_verify_table) /* sliceConfig */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_AddModSliceCommand_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_AddModSliceCommand_identifier, &mac_rslicing_AddModSliceCommand_verify_table);
}

static inline int mac_rslicing_AddModSliceCommand_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_AddModSliceCommand_type_identifier, &mac_rslicing_AddModSliceCommand_verify_table);
}

static inline int mac_rslicing_AddModSliceCommand_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_AddModSliceCommand_verify_table);
}

static inline int mac_rslicing_AddModSliceCommand_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_AddModSliceCommand_verify_table);
}

static int mac_rslicing_DelSliceCommand_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_field(td, 0, 0, &mac_rslicing_DelSliceConfig_verify_table) /* delSliceConfig */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_DelSliceCommand_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_DelSliceCommand_identifier, &mac_rslicing_DelSliceCommand_verify_table);
}

static inline int mac_rslicing_DelSliceCommand_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_DelSliceCommand_type_identifier, &mac_rslicing_DelSliceCommand_verify_table);
}

static inline int mac_rslicing_DelSliceCommand_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_DelSliceCommand_verify_table);
}

static inline int mac_rslicing_DelSliceCommand_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_DelSliceCommand_verify_table);
}

static int mac_rslicing_UeSliceAssocCommand_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_field(td, 0, 0, &mac_rslicing_UeSliceConfig_verify_table) /* ueSliceConfig */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_UeSliceAssocCommand_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_UeSliceAssocCommand_identifier, &mac_rslicing_UeSliceAssocCommand_verify_table);
}

static inline int mac_rslicing_UeSliceAssocCommand_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_UeSliceAssocCommand_type_identifier, &mac_rslicing_UeSliceAssocCommand_verify_table);
}

static inline int mac_rslicing_UeSliceAssocCommand_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_UeSliceAssocCommand_verify_table);
}

static inline int mac_rslicing_UeSliceAssocCommand_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_UeSliceAssocCommand_verify_table);
}

static int mac_rslicing_ControlMessage_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_union_field(td, 1, 0, &mac_rslicing_ControlCommand_union_verifier) /* command */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_ControlMessage_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_ControlMessage_identifier, &mac_rslicing_ControlMessage_verify_table);
}

static inline int mac_rslicing_ControlMessage_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_ControlMessage_type_identifier, &mac_rslicing_ControlMessage_verify_table);
}

static inline int mac_rslicing_ControlMessage_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_ControlMessage_verify_table);
}

static inline int mac_rslicing_ControlMessage_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_ControlMessage_verify_table);
}

static int mac_rslicing_ControlOutcome_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_string_field(td, 0, 0) /* diagnostic */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_ControlOutcome_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_ControlOutcome_identifier, &mac_rslicing_ControlOutcome_verify_table);
}

static inline int mac_rslicing_ControlOutcome_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_ControlOutcome_type_identifier, &mac_rslicing_ControlOutcome_verify_table);
}

static inline int mac_rslicing_ControlOutcome_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_ControlOutcome_verify_table);
}

static inline int mac_rslicing_ControlOutcome_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_ControlOutcome_verify_table);
}

static int mac_rslicing_CallProcessId_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 4, 4) /* id */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_CallProcessId_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_CallProcessId_identifier, &mac_rslicing_CallProcessId_verify_table);
}

static inline int mac_rslicing_CallProcessId_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_CallProcessId_type_identifier, &mac_rslicing_CallProcessId_verify_table);
}

static inline int mac_rslicing_CallProcessId_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_CallProcessId_verify_table);
}

static inline int mac_rslicing_CallProcessId_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_CallProcessId_verify_table);
}

static int mac_rslicing_SupportedAlgorithm_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* algorithm */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_SupportedAlgorithm_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_SupportedAlgorithm_identifier, &mac_rslicing_SupportedAlgorithm_verify_table);
}

static inline int mac_rslicing_SupportedAlgorithm_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_SupportedAlgorithm_type_identifier, &mac_rslicing_SupportedAlgorithm_verify_table);
}

static inline int mac_rslicing_SupportedAlgorithm_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_SupportedAlgorithm_verify_table);
}

static inline int mac_rslicing_SupportedAlgorithm_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_SupportedAlgorithm_verify_table);
}

static int mac_rslicing_RanFunctionDefinition_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_vector_field(td, 0, 0, &mac_rslicing_SupportedAlgorithm_verify_table) /* supportedAlgorithms */)) return ret;
    return flatcc_verify_ok;
}

static inline int mac_rslicing_RanFunctionDefinition_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_RanFunctionDefinition_identifier, &mac_rslicing_RanFunctionDefinition_verify_table);
}

static inline int mac_rslicing_RanFunctionDefinition_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, mac_rslicing_RanFunctionDefinition_type_identifier, &mac_rslicing_RanFunctionDefinition_verify_table);
}

static inline int mac_rslicing_RanFunctionDefinition_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &mac_rslicing_RanFunctionDefinition_verify_table);
}

static inline int mac_rslicing_RanFunctionDefinition_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &mac_rslicing_RanFunctionDefinition_verify_table);
}

#include "flatcc/flatcc_epilogue.h"
#endif /* RSLICING_VERIFIER_H */