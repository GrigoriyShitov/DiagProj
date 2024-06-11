/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_N1PUCCH_AN_CS_r10_H_
#define	_N1PUCCH_AN_CS_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* N1PUCCH-AN-CS-r10 */
typedef struct N1PUCCH_AN_CS_r10 {
	A_SEQUENCE_OF(long) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} N1PUCCH_AN_CS_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_N1PUCCH_AN_CS_r10;
extern asn_SET_OF_specifics_t asn_SPC_N1PUCCH_AN_CS_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_N1PUCCH_AN_CS_r10_1[1];
extern asn_per_constraints_t asn_PER_type_N1PUCCH_AN_CS_r10_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _N1PUCCH_AN_CS_r10_H_ */
#include <asn_internal.h>
