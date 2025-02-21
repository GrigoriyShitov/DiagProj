/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_GSM_PriorityInfo_H_
#define	_GSM_PriorityInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GSM-CellGroup.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GSM-PriorityInfo */
typedef struct GSM_PriorityInfo {
	GSM_CellGroup_t	 gsmCellGroup;
	long	 priority;
	long	 qRxLevMinGSM;
	long	 threshXhigh;
	long	 threshXlow;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GSM_PriorityInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSM_PriorityInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_GSM_PriorityInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_GSM_PriorityInfo_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _GSM_PriorityInfo_H_ */
#include <asn_internal.h>
