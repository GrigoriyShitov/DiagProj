/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_UE_Positioning_GPS_UTC_Model_H_
#define	_UE_Positioning_GPS_UTC_Model_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-Positioning-GPS-UTC-Model */
typedef struct UE_Positioning_GPS_UTC_Model {
	BIT_STRING_t	 a1;
	BIT_STRING_t	 a0;
	BIT_STRING_t	 t_ot;
	BIT_STRING_t	 wn_t;
	BIT_STRING_t	 delta_t_LS;
	BIT_STRING_t	 wn_lsf;
	BIT_STRING_t	 dn;
	BIT_STRING_t	 delta_t_LSF;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GPS_UTC_Model_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GPS_UTC_Model;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_GPS_UTC_Model_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Positioning_GPS_UTC_Model_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_GPS_UTC_Model_H_ */
#include <asn_internal.h>
