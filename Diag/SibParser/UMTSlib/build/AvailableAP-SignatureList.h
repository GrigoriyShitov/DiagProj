/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_AvailableAP_SignatureList_H_
#define	_AvailableAP_SignatureList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AP-Signature.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AvailableAP-SignatureList */
typedef struct AvailableAP_SignatureList {
	A_SEQUENCE_OF(AP_Signature_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AvailableAP_SignatureList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AvailableAP_SignatureList;
extern asn_SET_OF_specifics_t asn_SPC_AvailableAP_SignatureList_specs_1;
extern asn_TYPE_member_t asn_MBR_AvailableAP_SignatureList_1[1];
extern asn_per_constraints_t asn_PER_type_AvailableAP_SignatureList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _AvailableAP_SignatureList_H_ */
#include <asn_internal.h>
