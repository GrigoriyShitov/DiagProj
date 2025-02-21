/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UL_TransportChannelIdentity_r6_H_
#define	_UL_TransportChannelIdentity_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-DCH-MAC-d-FlowIdentity.h"
#include "UL-TrCH-Type.h"
#include "TransportChannelIdentity.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_TransportChannelIdentity_r6_PR {
	UL_TransportChannelIdentity_r6_PR_NOTHING,	/* No components present */
	UL_TransportChannelIdentity_r6_PR_dch_usch,
	UL_TransportChannelIdentity_r6_PR_e_dch
} UL_TransportChannelIdentity_r6_PR;

/* UL-TransportChannelIdentity-r6 */
typedef struct UL_TransportChannelIdentity_r6 {
	UL_TransportChannelIdentity_r6_PR present;
	union UL_TransportChannelIdentity_r6_u {
		struct UL_TransportChannelIdentity_r6__dch_usch {
			UL_TrCH_Type_t	 ul_TransportChannelType;
			TransportChannelIdentity_t	 ul_TransportChannelIdentity;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} dch_usch;
		E_DCH_MAC_d_FlowIdentity_t	 e_dch;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_TransportChannelIdentity_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_TransportChannelIdentity_r6;
extern asn_CHOICE_specifics_t asn_SPC_UL_TransportChannelIdentity_r6_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_TransportChannelIdentity_r6_1[2];
extern asn_per_constraints_t asn_PER_type_UL_TransportChannelIdentity_r6_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_TransportChannelIdentity_r6_H_ */
#include <asn_internal.h>
