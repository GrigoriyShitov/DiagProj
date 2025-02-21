/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_BandClassListCDMA2000_H_
#define	_BandClassListCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandClassInfoCDMA2000;

/* BandClassListCDMA2000 */
typedef struct BandClassListCDMA2000 {
	A_SEQUENCE_OF(struct BandClassInfoCDMA2000) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandClassListCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandClassListCDMA2000;
extern asn_SET_OF_specifics_t asn_SPC_BandClassListCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_BandClassListCDMA2000_1[1];
extern asn_per_constraints_t asn_PER_type_BandClassListCDMA2000_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandClassInfoCDMA2000.h"

#endif	/* _BandClassListCDMA2000_H_ */
#include <asn_internal.h>
