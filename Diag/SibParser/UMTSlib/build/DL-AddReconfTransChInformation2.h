/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_DL_AddReconfTransChInformation2_H_
#define	_DL_AddReconfTransChInformation2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-TrCH-Type.h"
#include "TransportChannelIdentity.h"
#include "TransportFormatSet.h"
#include "UL-TransportChannelIdentity.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_AddReconfTransChInformation2__tfs_SignallingMode_PR {
	DL_AddReconfTransChInformation2__tfs_SignallingMode_PR_NOTHING,	/* No components present */
	DL_AddReconfTransChInformation2__tfs_SignallingMode_PR_explicit_config,
	DL_AddReconfTransChInformation2__tfs_SignallingMode_PR_sameAsULTrCH
} DL_AddReconfTransChInformation2__tfs_SignallingMode_PR;

/* Forward declarations */
struct QualityTarget;

/* DL-AddReconfTransChInformation2 */
typedef struct DL_AddReconfTransChInformation2 {
	DL_TrCH_Type_t	 dl_TransportChannelType;
	TransportChannelIdentity_t	 transportChannelIdentity;
	struct DL_AddReconfTransChInformation2__tfs_SignallingMode {
		DL_AddReconfTransChInformation2__tfs_SignallingMode_PR present;
		union DL_AddReconfTransChInformation2__tfs_SignallingMode_u {
			TransportFormatSet_t	 explicit_config;
			UL_TransportChannelIdentity_t	 sameAsULTrCH;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tfs_SignallingMode;
	struct QualityTarget	*qualityTarget	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_AddReconfTransChInformation2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_AddReconfTransChInformation2;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_AddReconfTransChInformation2_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_AddReconfTransChInformation2_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "QualityTarget.h"

#endif	/* _DL_AddReconfTransChInformation2_H_ */
#include <asn_internal.h>
