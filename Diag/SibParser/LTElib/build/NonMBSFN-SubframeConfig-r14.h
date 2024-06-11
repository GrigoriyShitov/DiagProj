/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_NonMBSFN_SubframeConfig_r14_H_
#define	_NonMBSFN_SubframeConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14 {
	NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf4	= 0,
	NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf8	= 1,
	NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf16	= 2,
	NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf32	= 3,
	NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf64	= 4,
	NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf128	= 5,
	NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf512	= 6
} e_NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14;

/* NonMBSFN-SubframeConfig-r14 */
typedef struct NonMBSFN_SubframeConfig_r14 {
	long	 radioFrameAllocationPeriod_r14;
	long	 radioFrameAllocationOffset_r14;
	BIT_STRING_t	 subframeAllocation_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NonMBSFN_SubframeConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_radioFrameAllocationPeriod_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NonMBSFN_SubframeConfig_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_NonMBSFN_SubframeConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_NonMBSFN_SubframeConfig_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NonMBSFN_SubframeConfig_r14_H_ */
#include <asn_internal.h>
