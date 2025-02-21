/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterRAT_BandInfoNR_r16_H_
#define	_InterRAT_BandInfoNR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InterRAT-BandInfoNR-r16 */
typedef struct InterRAT_BandInfoNR_r16 {
	BOOLEAN_t	 interRAT_NeedForGapsNR_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRAT_BandInfoNR_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRAT_BandInfoNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_InterRAT_BandInfoNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_InterRAT_BandInfoNR_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _InterRAT_BandInfoNR_r16_H_ */
#include <asn_internal.h>
