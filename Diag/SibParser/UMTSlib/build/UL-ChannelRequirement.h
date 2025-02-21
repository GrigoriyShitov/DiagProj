/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UL_ChannelRequirement_H_
#define	_UL_ChannelRequirement_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-DPCH-Info.h"
#include "CPCH-SetInfo.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_ChannelRequirement_PR {
	UL_ChannelRequirement_PR_NOTHING,	/* No components present */
	UL_ChannelRequirement_PR_ul_DPCH_Info,
	UL_ChannelRequirement_PR_dummy
} UL_ChannelRequirement_PR;

/* UL-ChannelRequirement */
typedef struct UL_ChannelRequirement {
	UL_ChannelRequirement_PR present;
	union UL_ChannelRequirement_u {
		UL_DPCH_Info_t	 ul_DPCH_Info;
		CPCH_SetInfo_t	 dummy;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_ChannelRequirement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_ChannelRequirement;
extern asn_CHOICE_specifics_t asn_SPC_UL_ChannelRequirement_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_ChannelRequirement_1[2];
extern asn_per_constraints_t asn_PER_type_UL_ChannelRequirement_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_ChannelRequirement_H_ */
#include <asn_internal.h>
