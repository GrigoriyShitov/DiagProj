/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_QuantityConfigNR_r15_H_
#define	_QuantityConfigNR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "QuantityConfigRS-NR-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QuantityConfigRS_NR_r15;

/* QuantityConfigNR-r15 */
typedef struct QuantityConfigNR_r15 {
	QuantityConfigRS_NR_r15_t	 measQuantityCellNR_r15;
	struct QuantityConfigRS_NR_r15	*measQuantityRS_IndexNR_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfigNR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfigNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_QuantityConfigNR_r15_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "QuantityConfigRS-NR-r15.h"

#endif	/* _QuantityConfigNR_r15_H_ */
#include <asn_internal.h>
