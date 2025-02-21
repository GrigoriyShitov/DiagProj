/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IRAT_ParametersNR_v1710_H_
#define	_IRAT_ParametersNR_v1710_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersNR_v1710__extendedBand_n77_2_r17 {
	IRAT_ParametersNR_v1710__extendedBand_n77_2_r17_supported	= 0
} e_IRAT_ParametersNR_v1710__extendedBand_n77_2_r17;

/* IRAT-ParametersNR-v1710 */
typedef struct IRAT_ParametersNR_v1710 {
	long	*extendedBand_n77_2_r17	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersNR_v1710_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedBand_n77_2_r17_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersNR_v1710;
extern asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersNR_v1710_specs_1;
extern asn_TYPE_member_t asn_MBR_IRAT_ParametersNR_v1710_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersNR_v1710_H_ */
#include <asn_internal.h>
