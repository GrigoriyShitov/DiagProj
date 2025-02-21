/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PrimaryCPICH_Info_H_
#define	_PrimaryCPICH_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryScramblingCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PrimaryCPICH-Info */
typedef struct PrimaryCPICH_Info {
	PrimaryScramblingCode_t	 primaryScramblingCode;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PrimaryCPICH_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrimaryCPICH_Info;
extern asn_SEQUENCE_specifics_t asn_SPC_PrimaryCPICH_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_PrimaryCPICH_Info_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PrimaryCPICH_Info_H_ */
#include <asn_internal.h>
