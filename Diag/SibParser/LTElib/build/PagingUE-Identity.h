/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PagingUE_Identity_H_
#define	_PagingUE_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S-TMSI.h"
#include "IMSI.h"
#include "NG-5G-S-TMSI-r15.h"
#include "I-RNTI-r15.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PagingUE_Identity_PR {
	PagingUE_Identity_PR_NOTHING,	/* No components present */
	PagingUE_Identity_PR_s_TMSI,
	PagingUE_Identity_PR_imsi,
	/* Extensions may appear below */
	PagingUE_Identity_PR_ng_5G_S_TMSI_r15,
	PagingUE_Identity_PR_fullI_RNTI_r15
} PagingUE_Identity_PR;

/* PagingUE-Identity */
typedef struct PagingUE_Identity {
	PagingUE_Identity_PR present;
	union PagingUE_Identity_u {
		S_TMSI_t	 s_TMSI;
		IMSI_t	 imsi;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		NG_5G_S_TMSI_r15_t	 ng_5G_S_TMSI_r15;
		I_RNTI_r15_t	 fullI_RNTI_r15;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PagingUE_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PagingUE_Identity;
extern asn_CHOICE_specifics_t asn_SPC_PagingUE_Identity_specs_1;
extern asn_TYPE_member_t asn_MBR_PagingUE_Identity_1[4];
extern asn_per_constraints_t asn_PER_type_PagingUE_Identity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PagingUE_Identity_H_ */
#include <asn_internal.h>
