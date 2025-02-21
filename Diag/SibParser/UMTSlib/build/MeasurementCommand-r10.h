/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasurementCommand_r10_H_
#define	_MeasurementCommand_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementType-r10.h"
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementCommand_r10_PR {
	MeasurementCommand_r10_PR_NOTHING,	/* No components present */
	MeasurementCommand_r10_PR_setup,
	MeasurementCommand_r10_PR_modify,
	MeasurementCommand_r10_PR_release
} MeasurementCommand_r10_PR;

/* Forward declarations */
struct MeasurementType_r10;

/* MeasurementCommand-r10 */
typedef struct MeasurementCommand_r10 {
	MeasurementCommand_r10_PR present;
	union MeasurementCommand_r10_u {
		MeasurementType_r10_t	 setup;
		struct MeasurementCommand_r10__modify {
			struct MeasurementType_r10	*measurementType	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} modify;
		NULL_t	 release;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementCommand_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementCommand_r10;
extern asn_CHOICE_specifics_t asn_SPC_MeasurementCommand_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementCommand_r10_1[3];
extern asn_per_constraints_t asn_PER_type_MeasurementCommand_r10_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasurementType-r10.h"

#endif	/* _MeasurementCommand_r10_H_ */
#include <asn_internal.h>
