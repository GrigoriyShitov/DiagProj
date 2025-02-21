/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PCPCH_ChannelInfo_H_
#define	_PCPCH_ChannelInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SecondaryScramblingCode.h"
#include "PCP-Length.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UCSM_Info;

/* PCPCH-ChannelInfo */
typedef struct PCPCH_ChannelInfo {
	long	 pcpch_UL_ScramblingCode;
	long	 pcpch_DL_ChannelisationCode;
	SecondaryScramblingCode_t	*pcpch_DL_ScramblingCode	/* OPTIONAL */;
	PCP_Length_t	 pcp_Length;
	struct UCSM_Info	*ucsm_Info	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCPCH_ChannelInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PCPCH_ChannelInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_PCPCH_ChannelInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_PCPCH_ChannelInfo_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UCSM-Info.h"

#endif	/* _PCPCH_ChannelInfo_H_ */
#include <asn_internal.h>
