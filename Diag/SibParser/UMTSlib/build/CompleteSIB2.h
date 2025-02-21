/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CompleteSIB2_H_
#define	_CompleteSIB2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIB-Type2.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CompleteSIB2 */
typedef struct CompleteSIB2 {
	SIB_Type2_t	 sib_Type;
	BIT_STRING_t	 sib_Data_fixed;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompleteSIB2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompleteSIB2;
extern asn_SEQUENCE_specifics_t asn_SPC_CompleteSIB2_specs_1;
extern asn_TYPE_member_t asn_MBR_CompleteSIB2_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CompleteSIB2_H_ */
#include <asn_internal.h>
