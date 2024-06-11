/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ZeroTxPowerCSI_RS_r12_H_
#define	_ZeroTxPowerCSI_RS_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ZeroTxPowerCSI-RS-r12 */
typedef struct ZeroTxPowerCSI_RS_r12 {
	BIT_STRING_t	 zeroTxPowerResourceConfigList_r12;
	long	 zeroTxPowerSubframeConfig_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ZeroTxPowerCSI_RS_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ZeroTxPowerCSI_RS_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_ZeroTxPowerCSI_RS_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_ZeroTxPowerCSI_RS_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ZeroTxPowerCSI_RS_r12_H_ */
#include <asn_internal.h>
