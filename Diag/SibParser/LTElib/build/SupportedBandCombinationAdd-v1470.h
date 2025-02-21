/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SupportedBandCombinationAdd_v1470_H_
#define	_SupportedBandCombinationAdd_v1470_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandCombinationParameters_v1470;

/* SupportedBandCombinationAdd-v1470 */
typedef struct SupportedBandCombinationAdd_v1470 {
	A_SEQUENCE_OF(struct BandCombinationParameters_v1470) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandCombinationAdd_v1470_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandCombinationAdd_v1470;
extern asn_SET_OF_specifics_t asn_SPC_SupportedBandCombinationAdd_v1470_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedBandCombinationAdd_v1470_1[1];
extern asn_per_constraints_t asn_PER_type_SupportedBandCombinationAdd_v1470_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandCombinationParameters-v1470.h"

#endif	/* _SupportedBandCombinationAdd_v1470_H_ */
#include <asn_internal.h>
