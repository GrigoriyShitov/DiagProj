/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasurementControl_v390ext_H_
#define	_MeasurementControl_v390ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_Measurement_v390ext;

/* MeasurementControl-v390ext */
typedef struct MeasurementControl_v390ext {
	struct UE_Positioning_Measurement_v390ext	*ue_Positioning_Measurement_v390ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementControl_v390ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementControl_v390ext;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementControl_v390ext_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementControl_v390ext_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-Measurement-v390ext.h"

#endif	/* _MeasurementControl_v390ext_H_ */
#include <asn_internal.h>
