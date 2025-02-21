/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_FreqHoppingParameters_r13_H_
#define	_FreqHoppingParameters_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FreqHoppingParameters_r13__dummy {
	FreqHoppingParameters_r13__dummy_nb2	= 0,
	FreqHoppingParameters_r13__dummy_nb4	= 1
} e_FreqHoppingParameters_r13__dummy;
typedef enum FreqHoppingParameters_r13__dummy2_PR {
	FreqHoppingParameters_r13__dummy2_PR_NOTHING,	/* No components present */
	FreqHoppingParameters_r13__dummy2_PR_interval_FDD_r13,
	FreqHoppingParameters_r13__dummy2_PR_interval_TDD_r13
} FreqHoppingParameters_r13__dummy2_PR;
typedef enum FreqHoppingParameters_r13__dummy2__interval_FDD_r13 {
	FreqHoppingParameters_r13__dummy2__interval_FDD_r13_int1	= 0,
	FreqHoppingParameters_r13__dummy2__interval_FDD_r13_int2	= 1,
	FreqHoppingParameters_r13__dummy2__interval_FDD_r13_int4	= 2,
	FreqHoppingParameters_r13__dummy2__interval_FDD_r13_int8	= 3
} e_FreqHoppingParameters_r13__dummy2__interval_FDD_r13;
typedef enum FreqHoppingParameters_r13__dummy2__interval_TDD_r13 {
	FreqHoppingParameters_r13__dummy2__interval_TDD_r13_int1	= 0,
	FreqHoppingParameters_r13__dummy2__interval_TDD_r13_int5	= 1,
	FreqHoppingParameters_r13__dummy2__interval_TDD_r13_int10	= 2,
	FreqHoppingParameters_r13__dummy2__interval_TDD_r13_int20	= 3
} e_FreqHoppingParameters_r13__dummy2__interval_TDD_r13;
typedef enum FreqHoppingParameters_r13__dummy3_PR {
	FreqHoppingParameters_r13__dummy3_PR_NOTHING,	/* No components present */
	FreqHoppingParameters_r13__dummy3_PR_interval_FDD_r13,
	FreqHoppingParameters_r13__dummy3_PR_interval_TDD_r13
} FreqHoppingParameters_r13__dummy3_PR;
typedef enum FreqHoppingParameters_r13__dummy3__interval_FDD_r13 {
	FreqHoppingParameters_r13__dummy3__interval_FDD_r13_int2	= 0,
	FreqHoppingParameters_r13__dummy3__interval_FDD_r13_int4	= 1,
	FreqHoppingParameters_r13__dummy3__interval_FDD_r13_int8	= 2,
	FreqHoppingParameters_r13__dummy3__interval_FDD_r13_int16	= 3
} e_FreqHoppingParameters_r13__dummy3__interval_FDD_r13;
typedef enum FreqHoppingParameters_r13__dummy3__interval_TDD_r13 {
	FreqHoppingParameters_r13__dummy3__interval_TDD_r13_int5	= 0,
	FreqHoppingParameters_r13__dummy3__interval_TDD_r13_int10	= 1,
	FreqHoppingParameters_r13__dummy3__interval_TDD_r13_int20	= 2,
	FreqHoppingParameters_r13__dummy3__interval_TDD_r13_int40	= 3
} e_FreqHoppingParameters_r13__dummy3__interval_TDD_r13;
typedef enum FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13_PR {
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13_PR_NOTHING,	/* No components present */
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13_PR_interval_FDD_r13,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13_PR_interval_TDD_r13
} FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13_PR;
typedef enum FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13__interval_FDD_r13 {
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13__interval_FDD_r13_int1	= 0,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13__interval_FDD_r13_int2	= 1,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13__interval_FDD_r13_int4	= 2,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13__interval_FDD_r13_int8	= 3
} e_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13__interval_FDD_r13;
typedef enum FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13__interval_TDD_r13 {
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13__interval_TDD_r13_int1	= 0,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13__interval_TDD_r13_int5	= 1,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13__interval_TDD_r13_int10	= 2,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13__interval_TDD_r13_int20	= 3
} e_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13__interval_TDD_r13;
typedef enum FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13_PR {
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13_PR_NOTHING,	/* No components present */
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13_PR_interval_FDD_r13,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13_PR_interval_TDD_r13
} FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13_PR;
typedef enum FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13__interval_FDD_r13 {
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13__interval_FDD_r13_int2	= 0,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13__interval_FDD_r13_int4	= 1,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13__interval_FDD_r13_int8	= 2,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13__interval_FDD_r13_int16	= 3
} e_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13__interval_FDD_r13;
typedef enum FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13__interval_TDD_r13 {
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13__interval_TDD_r13_int5	= 0,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13__interval_TDD_r13_int10	= 1,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13__interval_TDD_r13_int20	= 2,
	FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13__interval_TDD_r13_int40	= 3
} e_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13__interval_TDD_r13;

/* FreqHoppingParameters-r13 */
typedef struct FreqHoppingParameters_r13 {
	long	*dummy	/* OPTIONAL */;
	struct FreqHoppingParameters_r13__dummy2 {
		FreqHoppingParameters_r13__dummy2_PR present;
		union FreqHoppingParameters_r13__dummy2_u {
			long	 interval_FDD_r13;
			long	 interval_TDD_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dummy2;
	struct FreqHoppingParameters_r13__dummy3 {
		FreqHoppingParameters_r13__dummy3_PR present;
		union FreqHoppingParameters_r13__dummy3_u {
			long	 interval_FDD_r13;
			long	 interval_TDD_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dummy3;
	struct FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13 {
		FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13_PR present;
		union FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13_u {
			long	 interval_FDD_r13;
			long	 interval_TDD_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *interval_ULHoppingConfigCommonModeA_r13;
	struct FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13 {
		FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13_PR present;
		union FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13_u {
			long	 interval_FDD_r13;
			long	 interval_TDD_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *interval_ULHoppingConfigCommonModeB_r13;
	long	*dummy4	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqHoppingParameters_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dummy_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interval_FDD_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interval_TDD_r13_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interval_FDD_r13_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interval_TDD_r13_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interval_FDD_r13_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interval_TDD_r13_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interval_FDD_r13_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interval_TDD_r13_44;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FreqHoppingParameters_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_FreqHoppingParameters_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_FreqHoppingParameters_r13_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _FreqHoppingParameters_r13_H_ */
#include <asn_internal.h>
