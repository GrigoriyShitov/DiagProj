/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RACH_Report_v1610_H_
#define	_RACH_Report_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RACH-Report-v1610 */
typedef struct RACH_Report_v1610 {
	long	 initialCEL_r16;
	BOOLEAN_t	 edt_Fallback_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RACH_Report_v1610_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RACH_Report_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_RACH_Report_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_RACH_Report_v1610_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RACH_Report_v1610_H_ */
#include <asn_internal.h>
