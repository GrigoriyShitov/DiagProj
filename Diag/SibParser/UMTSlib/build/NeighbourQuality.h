/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_NeighbourQuality_H_
#define	_NeighbourQuality_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-Positioning-OTDOA-Quality.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NeighbourQuality */
typedef struct NeighbourQuality {
	UE_Positioning_OTDOA_Quality_t	 ue_Positioning_OTDOA_Quality;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighbourQuality_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighbourQuality;
extern asn_SEQUENCE_specifics_t asn_SPC_NeighbourQuality_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighbourQuality_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NeighbourQuality_H_ */
#include <asn_internal.h>
