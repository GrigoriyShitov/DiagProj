/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ChannelCodingType_H_
#define	_ChannelCodingType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "CodingRate.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ChannelCodingType_PR {
	ChannelCodingType_PR_NOTHING,	/* No components present */
	ChannelCodingType_PR_noCoding,
	ChannelCodingType_PR_convolutional,
	ChannelCodingType_PR_turbo
} ChannelCodingType_PR;

/* ChannelCodingType */
typedef struct ChannelCodingType {
	ChannelCodingType_PR present;
	union ChannelCodingType_u {
		NULL_t	 noCoding;
		CodingRate_t	 convolutional;
		NULL_t	 turbo;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ChannelCodingType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ChannelCodingType;
extern asn_CHOICE_specifics_t asn_SPC_ChannelCodingType_specs_1;
extern asn_TYPE_member_t asn_MBR_ChannelCodingType_1[3];
extern asn_per_constraints_t asn_PER_type_ChannelCodingType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ChannelCodingType_H_ */
#include <asn_internal.h>
