/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRC_InactiveConfig_r15_H_
#define	_RRC_InactiveConfig_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "I-RNTI-r15.h"
#include "ShortI-RNTI-r15.h"
#include <NativeEnumerated.h>
#include "NextHopChainingCount.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_InactiveConfig_r15__ran_PagingCycle_r15 {
	RRC_InactiveConfig_r15__ran_PagingCycle_r15_rf32	= 0,
	RRC_InactiveConfig_r15__ran_PagingCycle_r15_rf64	= 1,
	RRC_InactiveConfig_r15__ran_PagingCycle_r15_rf128	= 2,
	RRC_InactiveConfig_r15__ran_PagingCycle_r15_rf256	= 3
} e_RRC_InactiveConfig_r15__ran_PagingCycle_r15;
typedef enum RRC_InactiveConfig_r15__periodic_RNAU_timer_r15 {
	RRC_InactiveConfig_r15__periodic_RNAU_timer_r15_min5	= 0,
	RRC_InactiveConfig_r15__periodic_RNAU_timer_r15_min10	= 1,
	RRC_InactiveConfig_r15__periodic_RNAU_timer_r15_min20	= 2,
	RRC_InactiveConfig_r15__periodic_RNAU_timer_r15_min30	= 3,
	RRC_InactiveConfig_r15__periodic_RNAU_timer_r15_min60	= 4,
	RRC_InactiveConfig_r15__periodic_RNAU_timer_r15_min120	= 5,
	RRC_InactiveConfig_r15__periodic_RNAU_timer_r15_min360	= 6,
	RRC_InactiveConfig_r15__periodic_RNAU_timer_r15_min720	= 7
} e_RRC_InactiveConfig_r15__periodic_RNAU_timer_r15;

/* Forward declarations */
struct RAN_NotificationAreaInfo_r15;

/* RRC-InactiveConfig-r15 */
typedef struct RRC_InactiveConfig_r15 {
	I_RNTI_r15_t	 fullI_RNTI_r15;
	ShortI_RNTI_r15_t	 shortI_RNTI_r15;
	long	*ran_PagingCycle_r15	/* OPTIONAL */;
	struct RAN_NotificationAreaInfo_r15	*ran_NotificationAreaInfo_r15	/* OPTIONAL */;
	long	*periodic_RNAU_timer_r15	/* OPTIONAL */;
	NextHopChainingCount_t	*nextHopChainingCount_r15	/* OPTIONAL */;
	struct RRC_InactiveConfig_r15__dummy {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dummy;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_InactiveConfig_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ran_PagingCycle_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_periodic_RNAU_timer_r15_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_InactiveConfig_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_InactiveConfig_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_InactiveConfig_r15_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RAN-NotificationAreaInfo-r15.h"

#endif	/* _RRC_InactiveConfig_r15_H_ */
#include <asn_internal.h>
