/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CFI_Config_r15_H_
#define	_CFI_Config_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CFI-Config-r15 */
typedef struct CFI_Config_r15 {
	long	*cfi_SubframeNonMBSFN_r15	/* OPTIONAL */;
	long	*cfi_SlotSubslotNonMBSFN_r15	/* OPTIONAL */;
	long	*cfi_SubframeMBSFN_r15	/* OPTIONAL */;
	long	*cfi_SlotSubslotMBSFN_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CFI_Config_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CFI_Config_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_CFI_Config_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_CFI_Config_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CFI_Config_r15_H_ */
#include <asn_internal.h>
