/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UL_AddReconfTransChInformation_r7_H_
#define	_UL_AddReconfTransChInformation_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-TrCH-Type.h"
#include "TransportChannelIdentity.h"
#include "TransportFormatSet.h"
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>
#include <NULL.h>
#include "E-DCH-TTI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_AddReconfTransChInformation_r7_PR {
	UL_AddReconfTransChInformation_r7_PR_NOTHING,	/* No components present */
	UL_AddReconfTransChInformation_r7_PR_dch_usch,
	UL_AddReconfTransChInformation_r7_PR_e_dch
} UL_AddReconfTransChInformation_r7_PR;
typedef enum UL_AddReconfTransChInformation_r7__e_dch__modeSpecific_PR {
	UL_AddReconfTransChInformation_r7__e_dch__modeSpecific_PR_NOTHING,	/* No components present */
	UL_AddReconfTransChInformation_r7__e_dch__modeSpecific_PR_fdd,
	UL_AddReconfTransChInformation_r7__e_dch__modeSpecific_PR_tdd
} UL_AddReconfTransChInformation_r7__e_dch__modeSpecific_PR;
typedef enum UL_AddReconfTransChInformation_r7__e_dch__harq_Info {
	UL_AddReconfTransChInformation_r7__e_dch__harq_Info_rv0	= 0,
	UL_AddReconfTransChInformation_r7__e_dch__harq_Info_rvtable	= 1
} e_UL_AddReconfTransChInformation_r7__e_dch__harq_Info;

/* Forward declarations */
struct E_DCH_AddReconf_MAC_d_FlowList_r7;

/* UL-AddReconfTransChInformation-r7 */
typedef struct UL_AddReconfTransChInformation_r7 {
	UL_AddReconfTransChInformation_r7_PR present;
	union UL_AddReconfTransChInformation_r7_u {
		struct UL_AddReconfTransChInformation_r7__dch_usch {
			UL_TrCH_Type_t	 ul_TransportChannelType;
			TransportChannelIdentity_t	 transportChannelIdentity;
			TransportFormatSet_t	 transportFormatSet;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} dch_usch;
		struct UL_AddReconfTransChInformation_r7__e_dch {
			struct UL_AddReconfTransChInformation_r7__e_dch__modeSpecific {
				UL_AddReconfTransChInformation_r7__e_dch__modeSpecific_PR present;
				union UL_AddReconfTransChInformation_r7__e_dch__modeSpecific_u {
					struct UL_AddReconfTransChInformation_r7__e_dch__modeSpecific__fdd {
						E_DCH_TTI_t	 tti;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} fdd;
					NULL_t	 tdd;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} modeSpecific;
			long	 harq_Info;
			struct E_DCH_AddReconf_MAC_d_FlowList_r7	*addReconf_MAC_d_FlowList	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} e_dch;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_AddReconfTransChInformation_r7_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_harq_Info_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UL_AddReconfTransChInformation_r7;
extern asn_CHOICE_specifics_t asn_SPC_UL_AddReconfTransChInformation_r7_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_AddReconfTransChInformation_r7_1[2];
extern asn_per_constraints_t asn_PER_type_UL_AddReconfTransChInformation_r7_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "E-DCH-AddReconf-MAC-d-FlowList-r7.h"

#endif	/* _UL_AddReconfTransChInformation_r7_H_ */
#include <asn_internal.h>
