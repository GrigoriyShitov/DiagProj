/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SCCPCH_SystemInformation_MBMS_r6_H_
#define	_SCCPCH_SystemInformation_MBMS_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SecondaryCCPCHInfo-MBMS-r6.h"
#include "TFCS.h"
#include "TransportFormatSet.h"
#include "MBMS-MCCH-ConfigurationInfo-r6.h"
#include <constr_SEQUENCE.h>
#include "MBMS-MSCH-ConfigurationInfo-r6.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_FACHCarryingMTCH_List;

/* SCCPCH-SystemInformation-MBMS-r6 */
typedef struct SCCPCH_SystemInformation_MBMS_r6 {
	SecondaryCCPCHInfo_MBMS_r6_t	 secondaryCCPCHInfo_MBMS;
	TFCS_t	 transportFormatCombinationSet;
	struct SCCPCH_SystemInformation_MBMS_r6__fachCarryingMCCH {
		TransportFormatSet_t	 mcch_transportFormatSet;
		MBMS_MCCH_ConfigurationInfo_r6_t	 mcch_ConfigurationInfo;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} fachCarryingMCCH;
	struct MBMS_FACHCarryingMTCH_List	*fachCarryingMTCH_List	/* OPTIONAL */;
	struct SCCPCH_SystemInformation_MBMS_r6__fachCarryingMSCH {
		TransportFormatSet_t	 msch_transportFormatSet;
		MBMS_MSCH_ConfigurationInfo_r6_t	 dummy;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *fachCarryingMSCH;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCCPCH_SystemInformation_MBMS_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCCPCH_SystemInformation_MBMS_r6;
extern asn_SEQUENCE_specifics_t asn_SPC_SCCPCH_SystemInformation_MBMS_r6_specs_1;
extern asn_TYPE_member_t asn_MBR_SCCPCH_SystemInformation_MBMS_r6_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMS-FACHCarryingMTCH-List.h"

#endif	/* _SCCPCH_SystemInformation_MBMS_r6_H_ */
#include <asn_internal.h>
