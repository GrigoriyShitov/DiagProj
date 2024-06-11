/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_V2X_SupportedBandCombinationEUTRA_NR_v1630_H_
#define	_V2X_SupportedBandCombinationEUTRA_NR_v1630_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct V2X_BandCombinationParametersEUTRA_NR_v1630;

/* V2X-SupportedBandCombinationEUTRA-NR-v1630 */
typedef struct V2X_SupportedBandCombinationEUTRA_NR_v1630 {
	A_SEQUENCE_OF(struct V2X_BandCombinationParametersEUTRA_NR_v1630) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} V2X_SupportedBandCombinationEUTRA_NR_v1630_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_V2X_SupportedBandCombinationEUTRA_NR_v1630;
extern asn_SET_OF_specifics_t asn_SPC_V2X_SupportedBandCombinationEUTRA_NR_v1630_specs_1;
extern asn_TYPE_member_t asn_MBR_V2X_SupportedBandCombinationEUTRA_NR_v1630_1[1];
extern asn_per_constraints_t asn_PER_type_V2X_SupportedBandCombinationEUTRA_NR_v1630_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "V2X-BandCombinationParametersEUTRA-NR-v1630.h"

#endif	/* _V2X_SupportedBandCombinationEUTRA_NR_v1630_H_ */
#include <asn_internal.h>
