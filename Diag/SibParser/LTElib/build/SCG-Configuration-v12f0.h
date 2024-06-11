/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SCG_Configuration_v12f0_H_
#define	_SCG_Configuration_v12f0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SCG_Configuration_v12f0_PR {
	SCG_Configuration_v12f0_PR_NOTHING,	/* No components present */
	SCG_Configuration_v12f0_PR_release,
	SCG_Configuration_v12f0_PR_setup
} SCG_Configuration_v12f0_PR;

/* Forward declarations */
struct SCG_ConfigPartSCG_v12f0;

/* SCG-Configuration-v12f0 */
typedef struct SCG_Configuration_v12f0 {
	SCG_Configuration_v12f0_PR present;
	union SCG_Configuration_v12f0_u {
		NULL_t	 release;
		struct SCG_Configuration_v12f0__setup {
			struct SCG_ConfigPartSCG_v12f0	*scg_ConfigPartSCG_v12f0	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCG_Configuration_v12f0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCG_Configuration_v12f0;
extern asn_CHOICE_specifics_t asn_SPC_SCG_Configuration_v12f0_specs_1;
extern asn_TYPE_member_t asn_MBR_SCG_Configuration_v12f0_1[2];
extern asn_per_constraints_t asn_PER_type_SCG_Configuration_v12f0_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCG-ConfigPartSCG-v12f0.h"

#endif	/* _SCG_Configuration_v12f0_H_ */
#include <asn_internal.h>
