/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_EUTRA_Capability_v1690_IEs_H_
#define	_UE_EUTRA_Capability_v1690_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Other-Parameters-v1690.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_EUTRA_Capability_v1700_IEs;

/* UE-EUTRA-Capability-v1690-IEs */
typedef struct UE_EUTRA_Capability_v1690_IEs {
	Other_Parameters_v1690_t	 other_Parameters_v1690;
	struct UE_EUTRA_Capability_v1700_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1690_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1690_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1690_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1690_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-EUTRA-Capability-v1700-IEs.h"

#endif	/* _UE_EUTRA_Capability_v1690_IEs_H_ */
#include <asn_internal.h>
