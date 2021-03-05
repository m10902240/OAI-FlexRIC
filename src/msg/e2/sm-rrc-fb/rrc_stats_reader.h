#ifndef RRC_STATS_READER_H
#define RRC_STATS_READER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
#endif
#ifndef RRC_COMMON_READER_H
#include "rrc_common_reader.h"
#endif
#include "flatcc/flatcc_flatbuffers.h"
#ifndef __alignas_is_defined
#include <stdalign.h>
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension ".bin"
#endif


typedef const struct rrc_stats_EventTrigger_table *rrc_stats_EventTrigger_table_t;
typedef struct rrc_stats_EventTrigger_table *rrc_stats_EventTrigger_mutable_table_t;
typedef const flatbuffers_uoffset_t *rrc_stats_EventTrigger_vec_t;
typedef flatbuffers_uoffset_t *rrc_stats_EventTrigger_mutable_vec_t;
typedef const struct rrc_stats_ReportStyle_table *rrc_stats_ReportStyle_table_t;
typedef struct rrc_stats_ReportStyle_table *rrc_stats_ReportStyle_mutable_table_t;
typedef const flatbuffers_uoffset_t *rrc_stats_ReportStyle_vec_t;
typedef flatbuffers_uoffset_t *rrc_stats_ReportStyle_mutable_vec_t;
typedef const struct rrc_stats_ActionDefinition_table *rrc_stats_ActionDefinition_table_t;
typedef struct rrc_stats_ActionDefinition_table *rrc_stats_ActionDefinition_mutable_table_t;
typedef const flatbuffers_uoffset_t *rrc_stats_ActionDefinition_vec_t;
typedef flatbuffers_uoffset_t *rrc_stats_ActionDefinition_mutable_vec_t;
typedef const struct rrc_stats_IndicationHeader_table *rrc_stats_IndicationHeader_table_t;
typedef struct rrc_stats_IndicationHeader_table *rrc_stats_IndicationHeader_mutable_table_t;
typedef const flatbuffers_uoffset_t *rrc_stats_IndicationHeader_vec_t;
typedef flatbuffers_uoffset_t *rrc_stats_IndicationHeader_mutable_vec_t;
typedef const struct rrc_stats_MeasResult_table *rrc_stats_MeasResult_table_t;
typedef struct rrc_stats_MeasResult_table *rrc_stats_MeasResult_mutable_table_t;
typedef const flatbuffers_uoffset_t *rrc_stats_MeasResult_vec_t;
typedef flatbuffers_uoffset_t *rrc_stats_MeasResult_mutable_vec_t;
typedef const struct rrc_stats_NeighMeas_table *rrc_stats_NeighMeas_table_t;
typedef struct rrc_stats_NeighMeas_table *rrc_stats_NeighMeas_mutable_table_t;
typedef const flatbuffers_uoffset_t *rrc_stats_NeighMeas_vec_t;
typedef flatbuffers_uoffset_t *rrc_stats_NeighMeas_mutable_vec_t;
typedef const struct rrc_stats_MeasReport_table *rrc_stats_MeasReport_table_t;
typedef struct rrc_stats_MeasReport_table *rrc_stats_MeasReport_mutable_table_t;
typedef const flatbuffers_uoffset_t *rrc_stats_MeasReport_vec_t;
typedef flatbuffers_uoffset_t *rrc_stats_MeasReport_mutable_vec_t;
typedef const struct rrc_stats_IndicationMessage_table *rrc_stats_IndicationMessage_table_t;
typedef struct rrc_stats_IndicationMessage_table *rrc_stats_IndicationMessage_mutable_table_t;
typedef const flatbuffers_uoffset_t *rrc_stats_IndicationMessage_vec_t;
typedef flatbuffers_uoffset_t *rrc_stats_IndicationMessage_mutable_vec_t;
typedef const struct rrc_stats_RanFunctionDefinition_table *rrc_stats_RanFunctionDefinition_table_t;
typedef struct rrc_stats_RanFunctionDefinition_table *rrc_stats_RanFunctionDefinition_mutable_table_t;
typedef const flatbuffers_uoffset_t *rrc_stats_RanFunctionDefinition_vec_t;
typedef flatbuffers_uoffset_t *rrc_stats_RanFunctionDefinition_mutable_vec_t;
#ifndef rrc_stats_EventTrigger_file_identifier
#define rrc_stats_EventTrigger_file_identifier flatbuffers_identifier
#endif
/* deprecated, use rrc_stats_EventTrigger_file_identifier */
#ifndef rrc_stats_EventTrigger_identifier
#define rrc_stats_EventTrigger_identifier flatbuffers_identifier
#endif
#define rrc_stats_EventTrigger_type_hash ((flatbuffers_thash_t)0xb331ab37)
#define rrc_stats_EventTrigger_type_identifier "\x37\xab\x31\xb3"
#ifndef rrc_stats_ReportStyle_file_identifier
#define rrc_stats_ReportStyle_file_identifier flatbuffers_identifier
#endif
/* deprecated, use rrc_stats_ReportStyle_file_identifier */
#ifndef rrc_stats_ReportStyle_identifier
#define rrc_stats_ReportStyle_identifier flatbuffers_identifier
#endif
#define rrc_stats_ReportStyle_type_hash ((flatbuffers_thash_t)0xebbb8ede)
#define rrc_stats_ReportStyle_type_identifier "\xde\x8e\xbb\xeb"
#ifndef rrc_stats_ActionDefinition_file_identifier
#define rrc_stats_ActionDefinition_file_identifier flatbuffers_identifier
#endif
/* deprecated, use rrc_stats_ActionDefinition_file_identifier */
#ifndef rrc_stats_ActionDefinition_identifier
#define rrc_stats_ActionDefinition_identifier flatbuffers_identifier
#endif
#define rrc_stats_ActionDefinition_type_hash ((flatbuffers_thash_t)0x1e3a6474)
#define rrc_stats_ActionDefinition_type_identifier "\x74\x64\x3a\x1e"
#ifndef rrc_stats_IndicationHeader_file_identifier
#define rrc_stats_IndicationHeader_file_identifier flatbuffers_identifier
#endif
/* deprecated, use rrc_stats_IndicationHeader_file_identifier */
#ifndef rrc_stats_IndicationHeader_identifier
#define rrc_stats_IndicationHeader_identifier flatbuffers_identifier
#endif
#define rrc_stats_IndicationHeader_type_hash ((flatbuffers_thash_t)0x5549bb34)
#define rrc_stats_IndicationHeader_type_identifier "\x34\xbb\x49\x55"
#ifndef rrc_stats_MeasResult_file_identifier
#define rrc_stats_MeasResult_file_identifier flatbuffers_identifier
#endif
/* deprecated, use rrc_stats_MeasResult_file_identifier */
#ifndef rrc_stats_MeasResult_identifier
#define rrc_stats_MeasResult_identifier flatbuffers_identifier
#endif
#define rrc_stats_MeasResult_type_hash ((flatbuffers_thash_t)0xa3b0504)
#define rrc_stats_MeasResult_type_identifier "\x04\x05\x3b\x0a"
#ifndef rrc_stats_NeighMeas_file_identifier
#define rrc_stats_NeighMeas_file_identifier flatbuffers_identifier
#endif
/* deprecated, use rrc_stats_NeighMeas_file_identifier */
#ifndef rrc_stats_NeighMeas_identifier
#define rrc_stats_NeighMeas_identifier flatbuffers_identifier
#endif
#define rrc_stats_NeighMeas_type_hash ((flatbuffers_thash_t)0xd8307088)
#define rrc_stats_NeighMeas_type_identifier "\x88\x70\x30\xd8"
#ifndef rrc_stats_MeasReport_file_identifier
#define rrc_stats_MeasReport_file_identifier flatbuffers_identifier
#endif
/* deprecated, use rrc_stats_MeasReport_file_identifier */
#ifndef rrc_stats_MeasReport_identifier
#define rrc_stats_MeasReport_identifier flatbuffers_identifier
#endif
#define rrc_stats_MeasReport_type_hash ((flatbuffers_thash_t)0x720ecb)
#define rrc_stats_MeasReport_type_identifier "\xcb\x0e\x72\x00"
#ifndef rrc_stats_IndicationMessage_file_identifier
#define rrc_stats_IndicationMessage_file_identifier flatbuffers_identifier
#endif
/* deprecated, use rrc_stats_IndicationMessage_file_identifier */
#ifndef rrc_stats_IndicationMessage_identifier
#define rrc_stats_IndicationMessage_identifier flatbuffers_identifier
#endif
#define rrc_stats_IndicationMessage_type_hash ((flatbuffers_thash_t)0xb2c079c8)
#define rrc_stats_IndicationMessage_type_identifier "\xc8\x79\xc0\xb2"
#ifndef rrc_stats_RanFunctionDefinition_file_identifier
#define rrc_stats_RanFunctionDefinition_file_identifier flatbuffers_identifier
#endif
/* deprecated, use rrc_stats_RanFunctionDefinition_file_identifier */
#ifndef rrc_stats_RanFunctionDefinition_identifier
#define rrc_stats_RanFunctionDefinition_identifier flatbuffers_identifier
#endif
#define rrc_stats_RanFunctionDefinition_type_hash ((flatbuffers_thash_t)0x1f4c7421)
#define rrc_stats_RanFunctionDefinition_type_identifier "\x21\x74\x4c\x1f"

typedef uint8_t rrc_stats_ReportOccasion_enum_t;
__flatbuffers_define_integer_type(rrc_stats_ReportOccasion, rrc_stats_ReportOccasion_enum_t, 8)
#define rrc_stats_ReportOccasion_onChange ((rrc_stats_ReportOccasion_enum_t)UINT8_C(0))

static inline const char *rrc_stats_ReportOccasion_name(rrc_stats_ReportOccasion_enum_t value)
{
    switch (value) {
    case rrc_stats_ReportOccasion_onChange: return "onChange";
    default: return "";
    }
}

static inline int rrc_stats_ReportOccasion_is_known_value(rrc_stats_ReportOccasion_enum_t value)
{
    switch (value) {
    case rrc_stats_ReportOccasion_onChange: return 1;
    default: return 0;
    }
}

typedef uint8_t rrc_stats_ReportStyleType_enum_t;
__flatbuffers_define_integer_type(rrc_stats_ReportStyleType, rrc_stats_ReportStyleType_enum_t, 8)
#define rrc_stats_ReportStyleType_Minimal ((rrc_stats_ReportStyleType_enum_t)UINT8_C(0))
#define rrc_stats_ReportStyleType_Complete ((rrc_stats_ReportStyleType_enum_t)UINT8_C(1))

static inline const char *rrc_stats_ReportStyleType_name(rrc_stats_ReportStyleType_enum_t value)
{
    switch (value) {
    case rrc_stats_ReportStyleType_Minimal: return "Minimal";
    case rrc_stats_ReportStyleType_Complete: return "Complete";
    default: return "";
    }
}

static inline int rrc_stats_ReportStyleType_is_known_value(rrc_stats_ReportStyleType_enum_t value)
{
    switch (value) {
    case rrc_stats_ReportStyleType_Minimal: return 1;
    case rrc_stats_ReportStyleType_Complete: return 1;
    default: return 0;
    }
}



struct rrc_stats_EventTrigger_table { uint8_t unused__; };

static inline size_t rrc_stats_EventTrigger_vec_len(rrc_stats_EventTrigger_vec_t vec)
__flatbuffers_vec_len(vec)
static inline rrc_stats_EventTrigger_table_t rrc_stats_EventTrigger_vec_at(rrc_stats_EventTrigger_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(rrc_stats_EventTrigger_table_t, vec, i, 0)
__flatbuffers_table_as_root(rrc_stats_EventTrigger)

__flatbuffers_define_scalar_field(0, rrc_stats_EventTrigger, reportOccasion, rrc_stats_ReportOccasion, rrc_stats_ReportOccasion_enum_t, UINT8_C(0))

struct rrc_stats_ReportStyle_table { uint8_t unused__; };

static inline size_t rrc_stats_ReportStyle_vec_len(rrc_stats_ReportStyle_vec_t vec)
__flatbuffers_vec_len(vec)
static inline rrc_stats_ReportStyle_table_t rrc_stats_ReportStyle_vec_at(rrc_stats_ReportStyle_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(rrc_stats_ReportStyle_table_t, vec, i, 0)
__flatbuffers_table_as_root(rrc_stats_ReportStyle)

__flatbuffers_define_scalar_field(0, rrc_stats_ReportStyle, type, rrc_stats_ReportStyleType, rrc_stats_ReportStyleType_enum_t, UINT8_C(0))

struct rrc_stats_ActionDefinition_table { uint8_t unused__; };

static inline size_t rrc_stats_ActionDefinition_vec_len(rrc_stats_ActionDefinition_vec_t vec)
__flatbuffers_vec_len(vec)
static inline rrc_stats_ActionDefinition_table_t rrc_stats_ActionDefinition_vec_at(rrc_stats_ActionDefinition_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(rrc_stats_ActionDefinition_table_t, vec, i, 0)
__flatbuffers_table_as_root(rrc_stats_ActionDefinition)

__flatbuffers_define_table_field(0, rrc_stats_ActionDefinition, reportStyle, rrc_stats_ReportStyle_table_t, 0)

struct rrc_stats_IndicationHeader_table { uint8_t unused__; };

static inline size_t rrc_stats_IndicationHeader_vec_len(rrc_stats_IndicationHeader_vec_t vec)
__flatbuffers_vec_len(vec)
static inline rrc_stats_IndicationHeader_table_t rrc_stats_IndicationHeader_vec_at(rrc_stats_IndicationHeader_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(rrc_stats_IndicationHeader_table_t, vec, i, 0)
__flatbuffers_table_as_root(rrc_stats_IndicationHeader)

__flatbuffers_define_scalar_field(0, rrc_stats_IndicationHeader, rnti, flatbuffers_uint16, uint16_t, UINT16_C(0))

struct rrc_stats_MeasResult_table { uint8_t unused__; };

static inline size_t rrc_stats_MeasResult_vec_len(rrc_stats_MeasResult_vec_t vec)
__flatbuffers_vec_len(vec)
static inline rrc_stats_MeasResult_table_t rrc_stats_MeasResult_vec_at(rrc_stats_MeasResult_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(rrc_stats_MeasResult_table_t, vec, i, 0)
__flatbuffers_table_as_root(rrc_stats_MeasResult)

__flatbuffers_define_scalar_field(0, rrc_stats_MeasResult, rsrp, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(1, rrc_stats_MeasResult, rsrq, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(2, rrc_stats_MeasResult, sinr, flatbuffers_float, float, 0.00000000f)

struct rrc_stats_NeighMeas_table { uint8_t unused__; };

static inline size_t rrc_stats_NeighMeas_vec_len(rrc_stats_NeighMeas_vec_t vec)
__flatbuffers_vec_len(vec)
static inline rrc_stats_NeighMeas_table_t rrc_stats_NeighMeas_vec_at(rrc_stats_NeighMeas_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(rrc_stats_NeighMeas_table_t, vec, i, 0)
__flatbuffers_table_as_root(rrc_stats_NeighMeas)

__flatbuffers_define_scalar_field(0, rrc_stats_NeighMeas, rat, rrc_common_RAT, rrc_common_RAT_enum_t, UINT8_C(0))
__flatbuffers_define_scalar_field(1, rrc_stats_NeighMeas, phyCellId, flatbuffers_uint16, uint16_t, UINT16_C(0))
__flatbuffers_define_table_field(2, rrc_stats_NeighMeas, plmnInfo, rrc_common_PlmnInfo_table_t, 0)
__flatbuffers_define_table_field(3, rrc_stats_NeighMeas, measResult, rrc_stats_MeasResult_table_t, 0)

struct rrc_stats_MeasReport_table { uint8_t unused__; };

static inline size_t rrc_stats_MeasReport_vec_len(rrc_stats_MeasReport_vec_t vec)
__flatbuffers_vec_len(vec)
static inline rrc_stats_MeasReport_table_t rrc_stats_MeasReport_vec_at(rrc_stats_MeasReport_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(rrc_stats_MeasReport_table_t, vec, i, 0)
__flatbuffers_table_as_root(rrc_stats_MeasReport)

__flatbuffers_define_scalar_field(0, rrc_stats_MeasReport, measId, flatbuffers_uint32, uint32_t, UINT32_C(0))
__flatbuffers_define_table_field(1, rrc_stats_MeasReport, pCellResult, rrc_stats_MeasResult_table_t, 0)
__flatbuffers_define_vector_field(2, rrc_stats_MeasReport, neighMeas, rrc_stats_NeighMeas_vec_t, 0)
__flatbuffers_define_vector_field(3, rrc_stats_MeasReport, rrcContainer, flatbuffers_uint8_vec_t, 0)

struct rrc_stats_IndicationMessage_table { uint8_t unused__; };

static inline size_t rrc_stats_IndicationMessage_vec_len(rrc_stats_IndicationMessage_vec_t vec)
__flatbuffers_vec_len(vec)
static inline rrc_stats_IndicationMessage_table_t rrc_stats_IndicationMessage_vec_at(rrc_stats_IndicationMessage_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(rrc_stats_IndicationMessage_table_t, vec, i, 0)
__flatbuffers_table_as_root(rrc_stats_IndicationMessage)

__flatbuffers_define_vector_field(0, rrc_stats_IndicationMessage, measReport, rrc_stats_MeasReport_vec_t, 0)

struct rrc_stats_RanFunctionDefinition_table { uint8_t unused__; };

static inline size_t rrc_stats_RanFunctionDefinition_vec_len(rrc_stats_RanFunctionDefinition_vec_t vec)
__flatbuffers_vec_len(vec)
static inline rrc_stats_RanFunctionDefinition_table_t rrc_stats_RanFunctionDefinition_vec_at(rrc_stats_RanFunctionDefinition_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(rrc_stats_RanFunctionDefinition_table_t, vec, i, 0)
__flatbuffers_table_as_root(rrc_stats_RanFunctionDefinition)

__flatbuffers_define_vector_field(0, rrc_stats_RanFunctionDefinition, supportedReportStyles, rrc_stats_ReportStyle_vec_t, 0)


#include "flatcc/flatcc_epilogue.h"
#endif /* RRC_STATS_READER_H */