/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RF_Capability_v860ext_H_
#define	_RF_Capability_v860ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RadioFrequencyBandTDDextList;

/* RF-Capability-v860ext */
typedef struct RF_Capability_v860ext {
	struct RadioFrequencyBandTDDextList	*tdd128RF_Capability	/* OPTIONAL */;
	struct RadioFrequencyBandTDDextList	*tdd384RF_Capability	/* OPTIONAL */;
	struct RadioFrequencyBandTDDextList	*tdd768RF_Capability	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Capability_v860ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Capability_v860ext;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Capability_v860ext_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Capability_v860ext_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RadioFrequencyBandTDDextList.h"

#endif	/* _RF_Capability_v860ext_H_ */
#include <asn_internal.h>
