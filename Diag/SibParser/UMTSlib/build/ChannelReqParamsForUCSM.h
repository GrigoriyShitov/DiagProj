/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ChannelReqParamsForUCSM_H_
#define	_ChannelReqParamsForUCSM_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AvailableAP-SignatureList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AvailableAP_SubchannelList;

/* ChannelReqParamsForUCSM */
typedef struct ChannelReqParamsForUCSM {
	AvailableAP_SignatureList_t	 availableAP_SignatureList;
	struct AvailableAP_SubchannelList	*availableAP_SubchannelList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ChannelReqParamsForUCSM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ChannelReqParamsForUCSM;
extern asn_SEQUENCE_specifics_t asn_SPC_ChannelReqParamsForUCSM_specs_1;
extern asn_TYPE_member_t asn_MBR_ChannelReqParamsForUCSM_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AvailableAP-SubchannelList.h"

#endif	/* _ChannelReqParamsForUCSM_H_ */
#include <asn_internal.h>
