/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IRAT_ParametersCDMA2000_v1130_H_
#define	_IRAT_ParametersCDMA2000_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersCDMA2000_v1130__cdma2000_NW_Sharing_r11 {
	IRAT_ParametersCDMA2000_v1130__cdma2000_NW_Sharing_r11_supported	= 0
} e_IRAT_ParametersCDMA2000_v1130__cdma2000_NW_Sharing_r11;

/* IRAT-ParametersCDMA2000-v1130 */
typedef struct IRAT_ParametersCDMA2000_v1130 {
	long	*cdma2000_NW_Sharing_r11	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersCDMA2000_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cdma2000_NW_Sharing_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersCDMA2000_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersCDMA2000_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_IRAT_ParametersCDMA2000_v1130_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersCDMA2000_v1130_H_ */
#include <asn_internal.h>
