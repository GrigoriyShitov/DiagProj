/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_KeplerianParameters_H_
#define	_KeplerianParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* KeplerianParameters */
typedef struct KeplerianParameters {
	BIT_STRING_t	 toe_nav;
	BIT_STRING_t	 ganss_omega_nav;
	BIT_STRING_t	 delta_n_nav;
	BIT_STRING_t	 m_zero_nav;
	BIT_STRING_t	 omegadot_nav;
	BIT_STRING_t	 ganss_e_nav;
	BIT_STRING_t	 idot_nav;
	BIT_STRING_t	 a_sqrt_nav;
	BIT_STRING_t	 i_zero_nav;
	BIT_STRING_t	 omega_zero_nav;
	BIT_STRING_t	 c_rs_nav;
	BIT_STRING_t	 c_is_nav;
	BIT_STRING_t	 c_us_nav;
	BIT_STRING_t	 c_rc_nav;
	BIT_STRING_t	 c_ic_nav;
	BIT_STRING_t	 c_uc_nav;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} KeplerianParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_KeplerianParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_KeplerianParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_KeplerianParameters_1[16];

#ifdef __cplusplus
}
#endif

#endif	/* _KeplerianParameters_H_ */
#include <asn_internal.h>
