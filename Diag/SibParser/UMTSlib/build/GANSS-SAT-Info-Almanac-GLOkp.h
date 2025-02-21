/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_GANSS_SAT_Info_Almanac_GLOkp_H_
#define	_GANSS_SAT_Info_Almanac_GLOkp_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSS-SAT-Info-Almanac-GLOkp */
typedef struct GANSS_SAT_Info_Almanac_GLOkp {
	BIT_STRING_t	 gloAlmNA;
	BIT_STRING_t	 gloAlmnA;
	BIT_STRING_t	 gloAlmHA;
	BIT_STRING_t	 gloAlmLambdaA;
	BIT_STRING_t	 gloAlmTlambdaA;
	BIT_STRING_t	 gloAlmDeltaIA;
	BIT_STRING_t	 gloAkmDeltaTA;
	BIT_STRING_t	 gloAlmDeltaTdotA;
	BIT_STRING_t	 gloAlmEpsilonA;
	BIT_STRING_t	 gloAlmOmegaA;
	BIT_STRING_t	 gloAlmTauA;
	BIT_STRING_t	 gloAlmCA;
	BIT_STRING_t	*gloAlmMA	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSS_SAT_Info_Almanac_GLOkp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSS_SAT_Info_Almanac_GLOkp;
extern asn_SEQUENCE_specifics_t asn_SPC_GANSS_SAT_Info_Almanac_GLOkp_specs_1;
extern asn_TYPE_member_t asn_MBR_GANSS_SAT_Info_Almanac_GLOkp_1[13];

#ifdef __cplusplus
}
#endif

#endif	/* _GANSS_SAT_Info_Almanac_GLOkp_H_ */
#include <asn_internal.h>
