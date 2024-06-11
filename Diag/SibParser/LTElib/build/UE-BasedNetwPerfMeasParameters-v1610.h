/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_BasedNetwPerfMeasParameters_v1610_H_
#define	_UE_BasedNetwPerfMeasParameters_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_BasedNetwPerfMeasParameters_v1610__ul_PDCP_AvgDelay_r16 {
	UE_BasedNetwPerfMeasParameters_v1610__ul_PDCP_AvgDelay_r16_supported	= 0
} e_UE_BasedNetwPerfMeasParameters_v1610__ul_PDCP_AvgDelay_r16;

/* UE-BasedNetwPerfMeasParameters-v1610 */
typedef struct UE_BasedNetwPerfMeasParameters_v1610 {
	long	*ul_PDCP_AvgDelay_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_BasedNetwPerfMeasParameters_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_PDCP_AvgDelay_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_BasedNetwPerfMeasParameters_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_BasedNetwPerfMeasParameters_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_BasedNetwPerfMeasParameters_v1610_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_BasedNetwPerfMeasParameters_v1610_H_ */
#include <asn_internal.h>
