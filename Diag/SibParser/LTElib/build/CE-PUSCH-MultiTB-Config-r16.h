/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CE_PUSCH_MultiTB_Config_r16_H_
#define	_CE_PUSCH_MultiTB_Config_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CE_PUSCH_MultiTB_Config_r16__interleaving_r16 {
	CE_PUSCH_MultiTB_Config_r16__interleaving_r16_on	= 0
} e_CE_PUSCH_MultiTB_Config_r16__interleaving_r16;

/* CE-PUSCH-MultiTB-Config-r16 */
typedef struct CE_PUSCH_MultiTB_Config_r16 {
	long	*interleaving_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CE_PUSCH_MultiTB_Config_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_interleaving_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CE_PUSCH_MultiTB_Config_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_CE_PUSCH_MultiTB_Config_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_CE_PUSCH_MultiTB_Config_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CE_PUSCH_MultiTB_Config_r16_H_ */
#include <asn_internal.h>
