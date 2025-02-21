/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SL_Parameters_v1710_H_
#define	_SL_Parameters_v1710_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct V2X_SupportedBandCombinationEUTRA_NR_v1710;

/* SL-Parameters-v1710 */
typedef struct SL_Parameters_v1710 {
	struct V2X_SupportedBandCombinationEUTRA_NR_v1710	*v2x_SupportedBandCombinationListEUTRA_NR_v1710	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_Parameters_v1710_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_Parameters_v1710;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_Parameters_v1710_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_Parameters_v1710_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "V2X-SupportedBandCombinationEUTRA-NR-v1710.h"

#endif	/* _SL_Parameters_v1710_H_ */
#include <asn_internal.h>
