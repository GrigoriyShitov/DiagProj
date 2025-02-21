/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_RadioAccessCapabilityComp_v770ext_H_
#define	_UE_RadioAccessCapabilityComp_v770ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RF-CapabilityComp-v770ext.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_RadioAccessCapabilityComp_v770ext__securityCapabilityIndication {
	UE_RadioAccessCapabilityComp_v770ext__securityCapabilityIndication_true	= 0
} e_UE_RadioAccessCapabilityComp_v770ext__securityCapabilityIndication;
typedef enum UE_RadioAccessCapabilityComp_v770ext__ganssSupportIndication {
	UE_RadioAccessCapabilityComp_v770ext__ganssSupportIndication_true	= 0
} e_UE_RadioAccessCapabilityComp_v770ext__ganssSupportIndication;
typedef enum UE_RadioAccessCapabilityComp_v770ext__mac_ehsSupport {
	UE_RadioAccessCapabilityComp_v770ext__mac_ehsSupport_true	= 0
} e_UE_RadioAccessCapabilityComp_v770ext__mac_ehsSupport;

/* UE-RadioAccessCapabilityComp-v770ext */
typedef struct UE_RadioAccessCapabilityComp_v770ext {
	RF_CapabilityComp_v770ext_t	 rf_CapabilityComp;
	long	*securityCapabilityIndication	/* OPTIONAL */;
	long	*ganssSupportIndication	/* OPTIONAL */;
	long	*mac_ehsSupport	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioAccessCapabilityComp_v770ext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_securityCapabilityIndication_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ganssSupportIndication_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mac_ehsSupport_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapabilityComp_v770ext;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapabilityComp_v770ext_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_RadioAccessCapabilityComp_v770ext_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_RadioAccessCapabilityComp_v770ext_H_ */
#include <asn_internal.h>
