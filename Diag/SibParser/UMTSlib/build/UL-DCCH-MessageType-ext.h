/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Class-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UL_DCCH_MessageType_ext_H_
#define	_UL_DCCH_MessageType_ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UEInformationResponse.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_DCCH_MessageType_ext_PR {
	UL_DCCH_MessageType_ext_PR_NOTHING,	/* No components present */
	UL_DCCH_MessageType_ext_PR_ueInformationResponse,
	UL_DCCH_MessageType_ext_PR_spare15,
	UL_DCCH_MessageType_ext_PR_spare14,
	UL_DCCH_MessageType_ext_PR_spare13,
	UL_DCCH_MessageType_ext_PR_spare12,
	UL_DCCH_MessageType_ext_PR_spare11,
	UL_DCCH_MessageType_ext_PR_spare10,
	UL_DCCH_MessageType_ext_PR_spare9,
	UL_DCCH_MessageType_ext_PR_spare8,
	UL_DCCH_MessageType_ext_PR_spare7,
	UL_DCCH_MessageType_ext_PR_spare6,
	UL_DCCH_MessageType_ext_PR_spare5,
	UL_DCCH_MessageType_ext_PR_spare4,
	UL_DCCH_MessageType_ext_PR_spare3,
	UL_DCCH_MessageType_ext_PR_spare2,
	UL_DCCH_MessageType_ext_PR_spare1
} UL_DCCH_MessageType_ext_PR;

/* UL-DCCH-MessageType-ext */
typedef struct UL_DCCH_MessageType_ext {
	UL_DCCH_MessageType_ext_PR present;
	union UL_DCCH_MessageType_ext_u {
		UEInformationResponse_t	 ueInformationResponse;
		NULL_t	 spare15;
		NULL_t	 spare14;
		NULL_t	 spare13;
		NULL_t	 spare12;
		NULL_t	 spare11;
		NULL_t	 spare10;
		NULL_t	 spare9;
		NULL_t	 spare8;
		NULL_t	 spare7;
		NULL_t	 spare6;
		NULL_t	 spare5;
		NULL_t	 spare4;
		NULL_t	 spare3;
		NULL_t	 spare2;
		NULL_t	 spare1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DCCH_MessageType_ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DCCH_MessageType_ext;
extern asn_CHOICE_specifics_t asn_SPC_UL_DCCH_MessageType_ext_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_DCCH_MessageType_ext_1[16];
extern asn_per_constraints_t asn_PER_type_UL_DCCH_MessageType_ext_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_DCCH_MessageType_ext_H_ */
#include <asn_internal.h>
