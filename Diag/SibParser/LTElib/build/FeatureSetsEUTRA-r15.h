/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_FeatureSetsEUTRA_r15_H_
#define	_FeatureSetsEUTRA_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FeatureSetDL_r15;
struct FeatureSetDL_PerCC_r15;
struct FeatureSetUL_r15;
struct FeatureSetUL_PerCC_r15;
struct FeatureSetDL_v1550;

/* FeatureSetsEUTRA-r15 */
typedef struct FeatureSetsEUTRA_r15 {
	struct FeatureSetsEUTRA_r15__featureSetsDL_r15 {
		A_SEQUENCE_OF(struct FeatureSetDL_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsDL_r15;
	struct FeatureSetsEUTRA_r15__featureSetsDL_PerCC_r15 {
		A_SEQUENCE_OF(struct FeatureSetDL_PerCC_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsDL_PerCC_r15;
	struct FeatureSetsEUTRA_r15__featureSetsUL_r15 {
		A_SEQUENCE_OF(struct FeatureSetUL_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsUL_r15;
	struct FeatureSetsEUTRA_r15__featureSetsUL_PerCC_r15 {
		A_SEQUENCE_OF(struct FeatureSetUL_PerCC_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsUL_PerCC_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct FeatureSetsEUTRA_r15__featureSetsDL_v1550 {
		A_SEQUENCE_OF(struct FeatureSetDL_v1550) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsDL_v1550;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FeatureSetsEUTRA_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FeatureSetsEUTRA_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_FeatureSetsEUTRA_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_FeatureSetsEUTRA_r15_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FeatureSetDL-r15.h"
#include "FeatureSetDL-PerCC-r15.h"
#include "FeatureSetUL-r15.h"
#include "FeatureSetUL-PerCC-r15.h"
#include "FeatureSetDL-v1550.h"

#endif	/* _FeatureSetsEUTRA_r15_H_ */
#include <asn_internal.h>
