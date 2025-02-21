/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_AuxInfoGANSS_ID3_H_
#define	_AuxInfoGANSS_ID3_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AuxInfoGANSS_ID3_element;

/* AuxInfoGANSS-ID3 */
typedef struct AuxInfoGANSS_ID3 {
	A_SEQUENCE_OF(struct AuxInfoGANSS_ID3_element) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AuxInfoGANSS_ID3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AuxInfoGANSS_ID3;
extern asn_SET_OF_specifics_t asn_SPC_AuxInfoGANSS_ID3_specs_1;
extern asn_TYPE_member_t asn_MBR_AuxInfoGANSS_ID3_1[1];
extern asn_per_constraints_t asn_PER_type_AuxInfoGANSS_ID3_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AuxInfoGANSS-ID3-element.h"

#endif	/* _AuxInfoGANSS_ID3_H_ */
#include <asn_internal.h>
