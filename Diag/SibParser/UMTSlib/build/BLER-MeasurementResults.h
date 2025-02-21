/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_BLER_MeasurementResults_H_
#define	_BLER_MeasurementResults_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransportChannelIdentity.h"
#include "DL-TransportChannelBLER.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BLER-MeasurementResults */
typedef struct BLER_MeasurementResults {
	TransportChannelIdentity_t	 transportChannelIdentity;
	DL_TransportChannelBLER_t	*dl_TransportChannelBLER	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BLER_MeasurementResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BLER_MeasurementResults;
extern asn_SEQUENCE_specifics_t asn_SPC_BLER_MeasurementResults_specs_1;
extern asn_TYPE_member_t asn_MBR_BLER_MeasurementResults_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BLER_MeasurementResults_H_ */
#include <asn_internal.h>
