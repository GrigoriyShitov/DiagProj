/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CompressedModeMeasCapabTDD_H_
#define	_CompressedModeMeasCapabTDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioFrequencyBandTDD.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CompressedModeMeasCapabTDD */
typedef struct CompressedModeMeasCapabTDD {
	RadioFrequencyBandTDD_t	 radioFrequencyBandTDD;
	BOOLEAN_t	 dl_MeasurementsTDD;
	BOOLEAN_t	 ul_MeasurementsTDD;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompressedModeMeasCapabTDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompressedModeMeasCapabTDD;
extern asn_SEQUENCE_specifics_t asn_SPC_CompressedModeMeasCapabTDD_specs_1;
extern asn_TYPE_member_t asn_MBR_CompressedModeMeasCapabTDD_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CompressedModeMeasCapabTDD_H_ */
#include <asn_internal.h>
