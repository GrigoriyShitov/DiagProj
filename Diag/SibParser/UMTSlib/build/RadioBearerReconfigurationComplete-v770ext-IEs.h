/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RadioBearerReconfigurationComplete_v770ext_IEs_H_
#define	_RadioBearerReconfigurationComplete_v770ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioBearerReconfigurationComplete_v770ext_IEs__deferredMeasurementControlReading {
	RadioBearerReconfigurationComplete_v770ext_IEs__deferredMeasurementControlReading_true	= 0
} e_RadioBearerReconfigurationComplete_v770ext_IEs__deferredMeasurementControlReading;

/* Forward declarations */
struct EXT_UL_TimingAdvance;

/* RadioBearerReconfigurationComplete-v770ext-IEs */
typedef struct RadioBearerReconfigurationComplete_v770ext_IEs {
	struct EXT_UL_TimingAdvance	*ext_UL_TimingAdvance	/* OPTIONAL */;
	long	*deferredMeasurementControlReading	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerReconfigurationComplete_v770ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_deferredMeasurementControlReading_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerReconfigurationComplete_v770ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioBearerReconfigurationComplete_v770ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioBearerReconfigurationComplete_v770ext_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EXT-UL-TimingAdvance.h"

#endif	/* _RadioBearerReconfigurationComplete_v770ext_IEs_H_ */
#include <asn_internal.h>
