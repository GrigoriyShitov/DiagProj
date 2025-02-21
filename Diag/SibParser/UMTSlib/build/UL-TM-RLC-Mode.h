/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UL_TM_RLC_Mode_H_
#define	_UL_TM_RLC_Mode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TransmissionRLC_Discard;

/* UL-TM-RLC-Mode */
typedef struct UL_TM_RLC_Mode {
	struct TransmissionRLC_Discard	*transmissionRLC_Discard	/* OPTIONAL */;
	BOOLEAN_t	 segmentationIndication;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_TM_RLC_Mode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_TM_RLC_Mode;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_TM_RLC_Mode_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_TM_RLC_Mode_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TransmissionRLC-Discard.h"

#endif	/* _UL_TM_RLC_Mode_H_ */
#include <asn_internal.h>
