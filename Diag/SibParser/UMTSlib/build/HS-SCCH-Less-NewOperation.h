/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HS_SCCH_Less_NewOperation_H_
#define	_HS_SCCH_Less_NewOperation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "HS-SCCH-LessTFSList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HS-SCCH-Less-NewOperation */
typedef struct HS_SCCH_Less_NewOperation {
	long	 hs_pdsch_CodeIndex;
	HS_SCCH_LessTFSList_t	 hs_scch_LessTFS;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_SCCH_Less_NewOperation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_SCCH_Less_NewOperation;
extern asn_SEQUENCE_specifics_t asn_SPC_HS_SCCH_Less_NewOperation_specs_1;
extern asn_TYPE_member_t asn_MBR_HS_SCCH_Less_NewOperation_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HS_SCCH_Less_NewOperation_H_ */
#include <asn_internal.h>
