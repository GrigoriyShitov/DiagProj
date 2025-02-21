/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RepPerLengthOffset_MICH_H_
#define	_RepPerLengthOffset_MICH_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RepPerLengthOffset_MICH_PR {
	RepPerLengthOffset_MICH_PR_NOTHING,	/* No components present */
	RepPerLengthOffset_MICH_PR_rpp4_2,
	RepPerLengthOffset_MICH_PR_rpp8_2,
	RepPerLengthOffset_MICH_PR_rpp8_4,
	RepPerLengthOffset_MICH_PR_rpp16_2,
	RepPerLengthOffset_MICH_PR_rpp16_4,
	RepPerLengthOffset_MICH_PR_rpp32_2,
	RepPerLengthOffset_MICH_PR_rpp32_4,
	RepPerLengthOffset_MICH_PR_rpp64_2,
	RepPerLengthOffset_MICH_PR_rpp64_4
} RepPerLengthOffset_MICH_PR;

/* RepPerLengthOffset-MICH */
typedef struct RepPerLengthOffset_MICH {
	RepPerLengthOffset_MICH_PR present;
	union RepPerLengthOffset_MICH_u {
		long	 rpp4_2;
		long	 rpp8_2;
		long	 rpp8_4;
		long	 rpp16_2;
		long	 rpp16_4;
		long	 rpp32_2;
		long	 rpp32_4;
		long	 rpp64_2;
		long	 rpp64_4;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RepPerLengthOffset_MICH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RepPerLengthOffset_MICH;
extern asn_CHOICE_specifics_t asn_SPC_RepPerLengthOffset_MICH_specs_1;
extern asn_TYPE_member_t asn_MBR_RepPerLengthOffset_MICH_1[9];
extern asn_per_constraints_t asn_PER_type_RepPerLengthOffset_MICH_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RepPerLengthOffset_MICH_H_ */
#include <asn_internal.h>
