/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UL_64QAM_Config_H_
#define	_UL_64QAM_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_64QAM_Config__mac_is_i_resetIndicator {
	UL_64QAM_Config__mac_is_i_resetIndicator_true	= 0
} e_UL_64QAM_Config__mac_is_i_resetIndicator;

/* Forward declarations */
struct UL_64QAM_Settings;

/* UL-64QAM-Config */
typedef struct UL_64QAM_Config {
	struct UL_64QAM_Settings	*ul_64QAM_Settings	/* OPTIONAL */;
	long	*mac_is_i_resetIndicator	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_64QAM_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mac_is_i_resetIndicator_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UL_64QAM_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_64QAM_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_64QAM_Config_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-64QAM-Settings.h"

#endif	/* _UL_64QAM_Config_H_ */
#include <asn_internal.h>
