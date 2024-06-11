/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MBMS_ServiceList_r13_H_
#define	_MBMS_ServiceList_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_ServiceInfo_r13;

/* MBMS-ServiceList-r13 */
typedef struct MBMS_ServiceList_r13 {
	A_SEQUENCE_OF(struct MBMS_ServiceInfo_r13) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_ServiceList_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_ServiceList_r13;
extern asn_SET_OF_specifics_t asn_SPC_MBMS_ServiceList_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMS_ServiceList_r13_1[1];
extern asn_per_constraints_t asn_PER_type_MBMS_ServiceList_r13_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMS-ServiceInfo-r13.h"

#endif	/* _MBMS_ServiceList_r13_H_ */
#include <asn_internal.h>
