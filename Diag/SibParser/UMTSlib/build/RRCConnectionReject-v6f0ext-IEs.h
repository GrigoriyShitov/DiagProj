/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionReject_v6f0ext_IEs_H_
#define	_RRCConnectionReject_v6f0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReject_v6f0ext_IEs__countingCompletion {
	RRCConnectionReject_v6f0ext_IEs__countingCompletion_true	= 0
} e_RRCConnectionReject_v6f0ext_IEs__countingCompletion;

/* RRCConnectionReject-v6f0ext-IEs */
typedef struct RRCConnectionReject_v6f0ext_IEs {
	long	*countingCompletion	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReject_v6f0ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_countingCompletion_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject_v6f0ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReject_v6f0ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReject_v6f0ext_IEs_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReject_v6f0ext_IEs_H_ */
#include <asn_internal.h>
