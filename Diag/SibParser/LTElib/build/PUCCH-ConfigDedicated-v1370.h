/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PUCCH_ConfigDedicated_v1370_H_
#define	_PUCCH_ConfigDedicated_v1370_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "PUCCH-Format3-Conf-r13.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_PR {
	PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_PR_NOTHING,	/* No components present */
	PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_PR_release,
	PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_PR_setup
} PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_PR;

/* PUCCH-ConfigDedicated-v1370 */
typedef struct PUCCH_ConfigDedicated_v1370 {
	struct PUCCH_ConfigDedicated_v1370__pucch_Format_v1370 {
		PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_PR present;
		union PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_u {
			NULL_t	 release;
			PUCCH_Format3_Conf_r13_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pucch_Format_v1370;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_ConfigDedicated_v1370_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigDedicated_v1370;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_ConfigDedicated_v1370_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_ConfigDedicated_v1370_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_ConfigDedicated_v1370_H_ */
#include <asn_internal.h>
