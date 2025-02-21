/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SSB_ToMeasure_r15_H_
#define	_SSB_ToMeasure_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SSB_ToMeasure_r15_PR {
	SSB_ToMeasure_r15_PR_NOTHING,	/* No components present */
	SSB_ToMeasure_r15_PR_shortBitmap_r15,
	SSB_ToMeasure_r15_PR_mediumBitmap_r15,
	SSB_ToMeasure_r15_PR_longBitmap_r15
} SSB_ToMeasure_r15_PR;

/* SSB-ToMeasure-r15 */
typedef struct SSB_ToMeasure_r15 {
	SSB_ToMeasure_r15_PR present;
	union SSB_ToMeasure_r15_u {
		BIT_STRING_t	 shortBitmap_r15;
		BIT_STRING_t	 mediumBitmap_r15;
		BIT_STRING_t	 longBitmap_r15;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSB_ToMeasure_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SSB_ToMeasure_r15;
extern asn_CHOICE_specifics_t asn_SPC_SSB_ToMeasure_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SSB_ToMeasure_r15_1[3];
extern asn_per_constraints_t asn_PER_type_SSB_ToMeasure_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SSB_ToMeasure_r15_H_ */
#include <asn_internal.h>
