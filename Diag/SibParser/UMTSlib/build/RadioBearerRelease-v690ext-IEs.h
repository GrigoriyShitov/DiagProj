/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RadioBearerRelease_v690ext_IEs_H_
#define	_RadioBearerRelease_v690ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HARQ-Preamble-Mode.h"
#include "BEACON-PL-Est.h"
#include <NativeEnumerated.h>
#include "DHS-Sync.h"
#include "TimingMaintainedSynchInd.h"
#include "MBMS-PL-ServiceRestrictInfo-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioBearerRelease_v690ext_IEs__postVerificationPeriod {
	RadioBearerRelease_v690ext_IEs__postVerificationPeriod_true	= 0
} e_RadioBearerRelease_v690ext_IEs__postVerificationPeriod;

/* Forward declarations */
struct PLMN_Identity;
struct RB_InformationReleaseList;

/* RadioBearerRelease-v690ext-IEs */
typedef struct RadioBearerRelease_v690ext_IEs {
	struct PLMN_Identity	*primary_plmn_Identity	/* OPTIONAL */;
	HARQ_Preamble_Mode_t	*harq_Preamble_Mode	/* OPTIONAL */;
	BEACON_PL_Est_t	*beaconPLEst	/* OPTIONAL */;
	long	*postVerificationPeriod	/* OPTIONAL */;
	DHS_Sync_t	*dhs_sync	/* OPTIONAL */;
	TimingMaintainedSynchInd_t	*timingMaintainedSynchInd	/* OPTIONAL */;
	MBMS_PL_ServiceRestrictInfo_r6_t	*mbms_PL_ServiceRestrictInfo	/* OPTIONAL */;
	struct RB_InformationReleaseList	*mbms_RB_ListReleasedToChangeTransferMode	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerRelease_v690ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_postVerificationPeriod_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerRelease_v690ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioBearerRelease_v690ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioBearerRelease_v690ext_IEs_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-Identity.h"
#include "RB-InformationReleaseList.h"

#endif	/* _RadioBearerRelease_v690ext_IEs_H_ */
#include <asn_internal.h>
