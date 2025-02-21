/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_BandCombinationParameters_v1390_H_
#define	_BandCombinationParameters_v1390_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandCombinationParameters_v1390__ue_CA_PowerClass_N_r13 {
	BandCombinationParameters_v1390__ue_CA_PowerClass_N_r13_class2	= 0
} e_BandCombinationParameters_v1390__ue_CA_PowerClass_N_r13;

/* BandCombinationParameters-v1390 */
typedef struct BandCombinationParameters_v1390 {
	long	*ue_CA_PowerClass_N_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParameters_v1390_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_CA_PowerClass_N_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1390;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParameters_v1390_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombinationParameters_v1390_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombinationParameters_v1390_H_ */
#include <asn_internal.h>
