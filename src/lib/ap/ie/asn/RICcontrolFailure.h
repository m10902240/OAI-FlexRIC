/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_RICcontrolFailure_H_
#define	_RICcontrolFailure_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RICcontrolFailure */
typedef struct RICcontrolFailure {
	ProtocolIE_Container_1279P9_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICcontrolFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICcontrolFailure;
extern asn_SEQUENCE_specifics_t asn_SPC_RICcontrolFailure_specs_1;
extern asn_TYPE_member_t asn_MBR_RICcontrolFailure_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RICcontrolFailure_H_ */
#include <asn_internal.h>