/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CPICH_Ec_N0_RSCP_H_
#define	_CPICH_Ec_N0_RSCP_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CPICH-Ec-N0.h"
#include "CPICH-RSCP.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CPICH-Ec-N0-RSCP */
typedef struct CPICH_Ec_N0_RSCP {
	CPICH_Ec_N0_t	 cpich_Ec_N0;
	CPICH_RSCP_t	 cpich_RSCP;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CPICH_Ec_N0_RSCP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CPICH_Ec_N0_RSCP;
extern asn_SEQUENCE_specifics_t asn_SPC_CPICH_Ec_N0_RSCP_specs_1;
extern asn_TYPE_member_t asn_MBR_CPICH_Ec_N0_RSCP_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CPICH_Ec_N0_RSCP_H_ */
#include <asn_internal.h>
