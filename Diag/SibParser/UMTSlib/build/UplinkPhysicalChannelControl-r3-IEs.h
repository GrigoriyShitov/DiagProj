/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UplinkPhysicalChannelControl_r3_IEs_H_
#define	_UplinkPhysicalChannelControl_r3_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "Alpha.h"
#include "SpecialBurstScheduling.h"
#include "ConstantValueTdd.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CCTrCH_PowerControlInfo;
struct UL_TimingAdvanceControl;

/* UplinkPhysicalChannelControl-r3-IEs */
typedef struct UplinkPhysicalChannelControl_r3_IEs {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct CCTrCH_PowerControlInfo	*ccTrCH_PowerControlInfo	/* OPTIONAL */;
	struct UL_TimingAdvanceControl	*timingAdvance	/* OPTIONAL */;
	Alpha_t	*alpha	/* OPTIONAL */;
	SpecialBurstScheduling_t	*specialBurstScheduling	/* OPTIONAL */;
	ConstantValueTdd_t	*prach_ConstantValue	/* OPTIONAL */;
	ConstantValueTdd_t	*pusch_ConstantValue	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPhysicalChannelControl_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPhysicalChannelControl_r3_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkPhysicalChannelControl_r3_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkPhysicalChannelControl_r3_IEs_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CCTrCH-PowerControlInfo.h"
#include "UL-TimingAdvanceControl.h"

#endif	/* _UplinkPhysicalChannelControl_r3_IEs_H_ */
#include <asn_internal.h>
