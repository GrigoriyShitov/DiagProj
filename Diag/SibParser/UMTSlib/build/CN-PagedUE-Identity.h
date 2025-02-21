/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CN_PagedUE_Identity_H_
#define	_CN_PagedUE_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IMSI-GSM-MAP.h"
#include "TMSI-GSM-MAP.h"
#include "P-TMSI-GSM-MAP.h"
#include "IMSI-DS-41.h"
#include "TMSI-DS-41.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CN_PagedUE_Identity_PR {
	CN_PagedUE_Identity_PR_NOTHING,	/* No components present */
	CN_PagedUE_Identity_PR_imsi_GSM_MAP,
	CN_PagedUE_Identity_PR_tmsi_GSM_MAP,
	CN_PagedUE_Identity_PR_p_TMSI_GSM_MAP,
	CN_PagedUE_Identity_PR_imsi_DS_41,
	CN_PagedUE_Identity_PR_tmsi_DS_41,
	CN_PagedUE_Identity_PR_spare3,
	CN_PagedUE_Identity_PR_spare2,
	CN_PagedUE_Identity_PR_spare1
} CN_PagedUE_Identity_PR;

/* CN-PagedUE-Identity */
typedef struct CN_PagedUE_Identity {
	CN_PagedUE_Identity_PR present;
	union CN_PagedUE_Identity_u {
		IMSI_GSM_MAP_t	 imsi_GSM_MAP;
		TMSI_GSM_MAP_t	 tmsi_GSM_MAP;
		P_TMSI_GSM_MAP_t	 p_TMSI_GSM_MAP;
		IMSI_DS_41_t	 imsi_DS_41;
		TMSI_DS_41_t	 tmsi_DS_41;
		NULL_t	 spare3;
		NULL_t	 spare2;
		NULL_t	 spare1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CN_PagedUE_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CN_PagedUE_Identity;
extern asn_CHOICE_specifics_t asn_SPC_CN_PagedUE_Identity_specs_1;
extern asn_TYPE_member_t asn_MBR_CN_PagedUE_Identity_1[8];
extern asn_per_constraints_t asn_PER_type_CN_PagedUE_Identity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CN_PagedUE_Identity_H_ */
#include <asn_internal.h>
