/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_InternalMeasQuantity_H_
#define	_UE_InternalMeasQuantity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-MeasurementQuantity.h"
#include "FilterCoefficient.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-InternalMeasQuantity */
typedef struct UE_InternalMeasQuantity {
	UE_MeasurementQuantity_t	 measurementQuantity;
	FilterCoefficient_t	 filterCoefficient	/* DEFAULT 0 */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_InternalMeasQuantity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_InternalMeasQuantity;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_InternalMeasQuantity_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_InternalMeasQuantity_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_InternalMeasQuantity_H_ */
#include <asn_internal.h>
