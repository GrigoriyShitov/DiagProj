/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PowerOffsetInformation_H_
#define	_PowerOffsetInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GainFactorInformation.h"
#include "PowerOffsetPp-m.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PowerOffsetInformation */
typedef struct PowerOffsetInformation {
	GainFactorInformation_t	 gainFactorInformation;
	PowerOffsetPp_m_t	*powerOffsetPp_m	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PowerOffsetInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PowerOffsetInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_PowerOffsetInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_PowerOffsetInformation_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PowerOffsetInformation_H_ */
#include <asn_internal.h>
