/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SPUCCH_Config_v1550_H_
#define	_SPUCCH_Config_v1550_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SPUCCH_Config_v1550_PR {
	SPUCCH_Config_v1550_PR_NOTHING,	/* No components present */
	SPUCCH_Config_v1550_PR_release,
	SPUCCH_Config_v1550_PR_setup
} SPUCCH_Config_v1550_PR;

/* SPUCCH-Config-v1550 */
typedef struct SPUCCH_Config_v1550 {
	SPUCCH_Config_v1550_PR present;
	union SPUCCH_Config_v1550_u {
		NULL_t	 release;
		struct SPUCCH_Config_v1550__setup {
			struct SPUCCH_Config_v1550__setup__twoAntennaPortActivatedSPUCCH_Format3_v1550 {
				struct SPUCCH_Config_v1550__setup__twoAntennaPortActivatedSPUCCH_Format3_v1550__n3SPUCCH_AN_List_v1550 {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} n3SPUCCH_AN_List_v1550;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} twoAntennaPortActivatedSPUCCH_Format3_v1550;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPUCCH_Config_v1550_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SPUCCH_Config_v1550;
extern asn_CHOICE_specifics_t asn_SPC_SPUCCH_Config_v1550_specs_1;
extern asn_TYPE_member_t asn_MBR_SPUCCH_Config_v1550_1[2];
extern asn_per_constraints_t asn_PER_type_SPUCCH_Config_v1550_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SPUCCH_Config_v1550_H_ */
#include <asn_internal.h>
