/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionRequest_v770ext_IEs_H_
#define	_RRCConnectionRequest_v770ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "High-MobilityDetected.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionRequest_v770ext_IEs__hspdschReception_CellFach {
	RRCConnectionRequest_v770ext_IEs__hspdschReception_CellFach_true	= 0
} e_RRCConnectionRequest_v770ext_IEs__hspdschReception_CellFach;
typedef enum RRCConnectionRequest_v770ext_IEs__mac_ehsSupport {
	RRCConnectionRequest_v770ext_IEs__mac_ehsSupport_true	= 0
} e_RRCConnectionRequest_v770ext_IEs__mac_ehsSupport;
typedef enum RRCConnectionRequest_v770ext_IEs__discontinuousDpcchTransmission {
	RRCConnectionRequest_v770ext_IEs__discontinuousDpcchTransmission_true	= 0
} e_RRCConnectionRequest_v770ext_IEs__discontinuousDpcchTransmission;

/* RRCConnectionRequest-v770ext-IEs */
typedef struct RRCConnectionRequest_v770ext_IEs {
	High_MobilityDetected_t	*ueMobilityStateIndicator	/* OPTIONAL */;
	long	*hspdschReception_CellFach	/* OPTIONAL */;
	long	*mac_ehsSupport	/* OPTIONAL */;
	long	*discontinuousDpcchTransmission	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRequest_v770ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_hspdschReception_CellFach_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mac_ehsSupport_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_discontinuousDpcchTransmission_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRequest_v770ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRequest_v770ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionRequest_v770ext_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRequest_v770ext_IEs_H_ */
#include <asn_internal.h>
