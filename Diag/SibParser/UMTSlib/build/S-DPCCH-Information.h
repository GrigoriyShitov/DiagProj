/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_S_DPCCH_Information_H_
#define	_S_DPCCH_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S-DPCCH-DPCCH-PowerOffset.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S-DPCCH-Information */
typedef struct S_DPCCH_Information {
	S_DPCCH_DPCCH_PowerOffset_t	 s_DPCCH_DPCCH_PowerOffset;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S_DPCCH_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S_DPCCH_Information;
extern asn_SEQUENCE_specifics_t asn_SPC_S_DPCCH_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_S_DPCCH_Information_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _S_DPCCH_Information_H_ */
#include <asn_internal.h>
