/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasurementCommandWithType_r7_H_
#define	_MeasurementCommandWithType_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementType-r7.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementCommandWithType_r7_PR {
	MeasurementCommandWithType_r7_PR_NOTHING,	/* No components present */
	MeasurementCommandWithType_r7_PR_setup,
	MeasurementCommandWithType_r7_PR_modify,
	MeasurementCommandWithType_r7_PR_release
} MeasurementCommandWithType_r7_PR;

/* MeasurementCommandWithType-r7 */
typedef struct MeasurementCommandWithType_r7 {
	MeasurementCommandWithType_r7_PR present;
	union MeasurementCommandWithType_r7_u {
		MeasurementType_r7_t	 setup;
		NULL_t	 modify;
		NULL_t	 release;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementCommandWithType_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementCommandWithType_r7;
extern asn_CHOICE_specifics_t asn_SPC_MeasurementCommandWithType_r7_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementCommandWithType_r7_1[3];
extern asn_per_constraints_t asn_PER_type_MeasurementCommandWithType_r7_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementCommandWithType_r7_H_ */
#include <asn_internal.h>
