/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HS_SCCH_DrxCellfach_info_H_
#define	_HS_SCCH_DrxCellfach_info_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HS_SCCH_DrxCellfach_info__hs_scch_DrxCycleFach {
	HS_SCCH_DrxCellfach_info__hs_scch_DrxCycleFach_sf20	= 0,
	HS_SCCH_DrxCellfach_info__hs_scch_DrxCycleFach_sf40	= 1,
	HS_SCCH_DrxCellfach_info__hs_scch_DrxCycleFach_sf80	= 2,
	HS_SCCH_DrxCellfach_info__hs_scch_DrxCycleFach_sf160	= 3,
	HS_SCCH_DrxCellfach_info__hs_scch_DrxCycleFach_sf320	= 4,
	HS_SCCH_DrxCellfach_info__hs_scch_DrxCycleFach_sf640	= 5,
	HS_SCCH_DrxCellfach_info__hs_scch_DrxCycleFach_spare2	= 6,
	HS_SCCH_DrxCellfach_info__hs_scch_DrxCycleFach_spare1	= 7
} e_HS_SCCH_DrxCellfach_info__hs_scch_DrxCycleFach;
typedef enum HS_SCCH_DrxCellfach_info__hs_scch_RxBurstFach {
	HS_SCCH_DrxCellfach_info__hs_scch_RxBurstFach_sf1	= 0,
	HS_SCCH_DrxCellfach_info__hs_scch_RxBurstFach_sf2	= 1
} e_HS_SCCH_DrxCellfach_info__hs_scch_RxBurstFach;
typedef enum HS_SCCH_DrxCellfach_info__t333 {
	HS_SCCH_DrxCellfach_info__t333_ms100	= 0,
	HS_SCCH_DrxCellfach_info__t333_ms200	= 1,
	HS_SCCH_DrxCellfach_info__t333_ms400	= 2,
	HS_SCCH_DrxCellfach_info__t333_ms800	= 3
} e_HS_SCCH_DrxCellfach_info__t333;

/* HS-SCCH-DrxCellfach-info */
typedef struct HS_SCCH_DrxCellfach_info {
	long	 hs_scch_DrxCycleFach;
	long	 hs_scch_RxBurstFach;
	long	 t333;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_SCCH_DrxCellfach_info_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_hs_scch_DrxCycleFach_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_hs_scch_RxBurstFach_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t333_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HS_SCCH_DrxCellfach_info;
extern asn_SEQUENCE_specifics_t asn_SPC_HS_SCCH_DrxCellfach_info_specs_1;
extern asn_TYPE_member_t asn_MBR_HS_SCCH_DrxCellfach_info_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _HS_SCCH_DrxCellfach_info_H_ */
#include <asn_internal.h>
