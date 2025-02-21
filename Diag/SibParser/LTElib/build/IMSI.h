/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IMSI_H_
#define	_IMSI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IMSI-Digit.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IMSI */
typedef struct IMSI {
	A_SEQUENCE_OF(IMSI_Digit_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IMSI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IMSI;
extern asn_SET_OF_specifics_t asn_SPC_IMSI_specs_1;
extern asn_TYPE_member_t asn_MBR_IMSI_1[1];
extern asn_per_constraints_t asn_PER_type_IMSI_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _IMSI_H_ */
#include <asn_internal.h>
