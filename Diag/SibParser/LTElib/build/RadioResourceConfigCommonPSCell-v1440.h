/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RadioResourceConfigCommonPSCell_v1440_H_
#define	_RadioResourceConfigCommonPSCell_v1440_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioResourceConfigCommonSCell-v1440.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RadioResourceConfigCommonPSCell-v1440 */
typedef struct RadioResourceConfigCommonPSCell_v1440 {
	RadioResourceConfigCommonSCell_v1440_t	 basicFields_v1440;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigCommonPSCell_v1440_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonPSCell_v1440;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonPSCell_v1440_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonPSCell_v1440_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioResourceConfigCommonPSCell_v1440_H_ */
#include <asn_internal.h>
