/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MBMS_Parameters_r11_H_
#define	_MBMS_Parameters_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_Parameters_r11__mbms_SCell_r11 {
	MBMS_Parameters_r11__mbms_SCell_r11_supported	= 0
} e_MBMS_Parameters_r11__mbms_SCell_r11;
typedef enum MBMS_Parameters_r11__mbms_NonServingCell_r11 {
	MBMS_Parameters_r11__mbms_NonServingCell_r11_supported	= 0
} e_MBMS_Parameters_r11__mbms_NonServingCell_r11;

/* MBMS-Parameters-r11 */
typedef struct MBMS_Parameters_r11 {
	long	*mbms_SCell_r11	/* OPTIONAL */;
	long	*mbms_NonServingCell_r11	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_Parameters_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mbms_SCell_r11_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mbms_NonServingCell_r11_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_Parameters_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_MBMS_Parameters_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMS_Parameters_r11_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_Parameters_r11_H_ */
#include <asn_internal.h>
