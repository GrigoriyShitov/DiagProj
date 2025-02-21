/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_E_RGCH_Information_H_
#define	_E_RGCH_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-HICH-RGCH-SignatureSequence.h"
#include "E-RGCH-CombinationIndex.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E-RGCH-Information */
typedef struct E_RGCH_Information {
	E_HICH_RGCH_SignatureSequence_t	 signatureSequence;
	E_RGCH_CombinationIndex_t	 rg_CombinationIndex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RGCH_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RGCH_Information;
extern asn_SEQUENCE_specifics_t asn_SPC_E_RGCH_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_E_RGCH_Information_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _E_RGCH_Information_H_ */
#include <asn_internal.h>
