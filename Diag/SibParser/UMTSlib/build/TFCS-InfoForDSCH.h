/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TFCS_InfoForDSCH_H_
#define	_TFCS_InfoForDSCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TFCS_InfoForDSCH_PR {
	TFCS_InfoForDSCH_PR_NOTHING,	/* No components present */
	TFCS_InfoForDSCH_PR_ctfc2bit,
	TFCS_InfoForDSCH_PR_ctfc4bit,
	TFCS_InfoForDSCH_PR_ctfc6bit,
	TFCS_InfoForDSCH_PR_ctfc8bit,
	TFCS_InfoForDSCH_PR_ctfc12bit,
	TFCS_InfoForDSCH_PR_ctfc16bit,
	TFCS_InfoForDSCH_PR_ctfc24bit
} TFCS_InfoForDSCH_PR;

/* TFCS-InfoForDSCH */
typedef struct TFCS_InfoForDSCH {
	TFCS_InfoForDSCH_PR present;
	union TFCS_InfoForDSCH_u {
		long	 ctfc2bit;
		long	 ctfc4bit;
		long	 ctfc6bit;
		long	 ctfc8bit;
		long	 ctfc12bit;
		long	 ctfc16bit;
		long	 ctfc24bit;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TFCS_InfoForDSCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TFCS_InfoForDSCH;
extern asn_CHOICE_specifics_t asn_SPC_TFCS_InfoForDSCH_specs_1;
extern asn_TYPE_member_t asn_MBR_TFCS_InfoForDSCH_1[7];
extern asn_per_constraints_t asn_PER_type_TFCS_InfoForDSCH_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TFCS_InfoForDSCH_H_ */
#include <asn_internal.h>
