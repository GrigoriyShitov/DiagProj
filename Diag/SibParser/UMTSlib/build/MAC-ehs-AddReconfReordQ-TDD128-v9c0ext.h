/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MAC_ehs_AddReconfReordQ_TDD128_v9c0ext_H_
#define	_MAC_ehs_AddReconfReordQ_TDD128_v9c0ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MAC-ehs-WindowSize-TDD128-v9c0ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MAC-ehs-AddReconfReordQ-TDD128-v9c0ext */
typedef struct MAC_ehs_AddReconfReordQ_TDD128_v9c0ext {
	MAC_ehs_WindowSize_TDD128_v9c0ext_t	*mac_ehsWindowSize_extension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_ehs_AddReconfReordQ_TDD128_v9c0ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_ehs_AddReconfReordQ_TDD128_v9c0ext;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_ehs_AddReconfReordQ_TDD128_v9c0ext_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_ehs_AddReconfReordQ_TDD128_v9c0ext_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_ehs_AddReconfReordQ_TDD128_v9c0ext_H_ */
#include <asn_internal.h>
