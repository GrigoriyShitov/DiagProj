/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionRequest_va40ext_IEs_H_
#define	_RRCConnectionRequest_va40ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionRequest_va40ext_IEs__supportOfMoreThanTwoCellsOrMIMO4x4 {
	RRCConnectionRequest_va40ext_IEs__supportOfMoreThanTwoCellsOrMIMO4x4_higherRate	= 0,
	RRCConnectionRequest_va40ext_IEs__supportOfMoreThanTwoCellsOrMIMO4x4_lowerRate	= 1
} e_RRCConnectionRequest_va40ext_IEs__supportOfMoreThanTwoCellsOrMIMO4x4;
typedef enum RRCConnectionRequest_va40ext_IEs__supportOf1stFrequencyBand {
	RRCConnectionRequest_va40ext_IEs__supportOf1stFrequencyBand_true	= 0
} e_RRCConnectionRequest_va40ext_IEs__supportOf1stFrequencyBand;
typedef enum RRCConnectionRequest_va40ext_IEs__supportOf2ndFrequencyBand {
	RRCConnectionRequest_va40ext_IEs__supportOf2ndFrequencyBand_true	= 0
} e_RRCConnectionRequest_va40ext_IEs__supportOf2ndFrequencyBand;

/* RRCConnectionRequest-va40ext-IEs */
typedef struct RRCConnectionRequest_va40ext_IEs {
	long	*supportOfMoreThanTwoCellsOrMIMO4x4	/* OPTIONAL */;
	long	*supportOf1stFrequencyBand	/* OPTIONAL */;
	long	*supportOf2ndFrequencyBand	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRequest_va40ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfMoreThanTwoCellsOrMIMO4x4_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOf1stFrequencyBand_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOf2ndFrequencyBand_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRequest_va40ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRequest_va40ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionRequest_va40ext_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRequest_va40ext_IEs_H_ */
#include <asn_internal.h>
