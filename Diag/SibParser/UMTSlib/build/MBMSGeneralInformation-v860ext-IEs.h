/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MBMSGeneralInformation_v860ext_IEs_H_
#define	_MBMSGeneralInformation_v860ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBSFN_InterFrequencyNeighbourList_v860ext;

/* MBMSGeneralInformation-v860ext-IEs */
typedef struct MBMSGeneralInformation_v860ext_IEs {
	struct MBSFN_InterFrequencyNeighbourList_v860ext	*mbsfnInterFrequencyNeighbourList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMSGeneralInformation_v860ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMSGeneralInformation_v860ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_MBMSGeneralInformation_v860ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMSGeneralInformation_v860ext_IEs_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBSFN-InterFrequencyNeighbourList-v860ext.h"

#endif	/* _MBMSGeneralInformation_v860ext_IEs_H_ */
#include <asn_internal.h>
