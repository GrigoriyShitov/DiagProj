/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_GANSS_SAT_Info_Almanac_Kp_H_
#define	_GANSS_SAT_Info_Almanac_Kp_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSS-SAT-Info-Almanac-Kp */
typedef struct GANSS_SAT_Info_Almanac_Kp {
	long	 svId;
	BIT_STRING_t	 ganss_alm_e;
	BIT_STRING_t	 ganss_delta_I_alm;
	BIT_STRING_t	 ganss_omegadot_alm;
	BIT_STRING_t	 ganss_svstatusINAV_alm;
	BIT_STRING_t	*ganss_svstatusFNAV_alm	/* OPTIONAL */;
	BIT_STRING_t	 ganss_delta_a_sqrt_alm;
	BIT_STRING_t	 ganss_omegazero_alm;
	BIT_STRING_t	 ganss_m_zero_alm;
	BIT_STRING_t	 ganss_omega_alm;
	BIT_STRING_t	 ganss_af_zero_alm;
	BIT_STRING_t	 ganss_af_one_alm;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSS_SAT_Info_Almanac_Kp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSS_SAT_Info_Almanac_Kp;
extern asn_SEQUENCE_specifics_t asn_SPC_GANSS_SAT_Info_Almanac_Kp_specs_1;
extern asn_TYPE_member_t asn_MBR_GANSS_SAT_Info_Almanac_Kp_1[12];

#ifdef __cplusplus
}
#endif

#endif	/* _GANSS_SAT_Info_Almanac_Kp_H_ */
#include <asn_internal.h>
