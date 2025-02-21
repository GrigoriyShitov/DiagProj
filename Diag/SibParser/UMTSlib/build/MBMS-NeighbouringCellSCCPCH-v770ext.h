/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MBMS_NeighbouringCellSCCPCH_v770ext_H_
#define	_MBMS_NeighbouringCellSCCPCH_v770ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMS-CommonPhyChIdentity.h"
#include "SecondaryCCPCHInfoDiff-MBMS.h"
#include "MBMS-SCCPCHPwrOffsetDiff.h"
#include "MBMS-L23Configuration.h"
#include <NULL.h>
#include "MBMS-SoftComb-TimingOffset.h"
#include "MBMS-L1CombiningTransmTimeDiff.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_NeighbouringCellSCCPCH_v770ext__layer1Combining_PR {
	MBMS_NeighbouringCellSCCPCH_v770ext__layer1Combining_PR_NOTHING,	/* No components present */
	MBMS_NeighbouringCellSCCPCH_v770ext__layer1Combining_PR_fdd,
	MBMS_NeighbouringCellSCCPCH_v770ext__layer1Combining_PR_tdd
} MBMS_NeighbouringCellSCCPCH_v770ext__layer1Combining_PR;

/* Forward declarations */
struct MBMS_L1CombiningSchedule;

/* MBMS-NeighbouringCellSCCPCH-v770ext */
typedef struct MBMS_NeighbouringCellSCCPCH_v770ext {
	MBMS_CommonPhyChIdentity_t	*secondaryCCPCH_Info	/* OPTIONAL */;
	SecondaryCCPCHInfoDiff_MBMS_t	 secondaryCCPCH_InfoDiff;
	MBMS_SCCPCHPwrOffsetDiff_t	*secondaryCCPCHPwrOffsetDiff	/* OPTIONAL */;
	struct MBMS_NeighbouringCellSCCPCH_v770ext__layer1Combining {
		MBMS_NeighbouringCellSCCPCH_v770ext__layer1Combining_PR present;
		union MBMS_NeighbouringCellSCCPCH_v770ext__layer1Combining_u {
			struct MBMS_NeighbouringCellSCCPCH_v770ext__layer1Combining__fdd {
				MBMS_SoftComb_TimingOffset_t	 softComb_TimingOffset;
				MBMS_L1CombiningTransmTimeDiff_t	 mbms_L1CombiningTransmTimeDiff;
				struct MBMS_L1CombiningSchedule	*mbms_L1CombiningSchedule	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *layer1Combining;
	MBMS_L23Configuration_t	 mbms_L23Configuration;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_NeighbouringCellSCCPCH_v770ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_NeighbouringCellSCCPCH_v770ext;
extern asn_SEQUENCE_specifics_t asn_SPC_MBMS_NeighbouringCellSCCPCH_v770ext_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMS_NeighbouringCellSCCPCH_v770ext_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMS-L1CombiningSchedule.h"

#endif	/* _MBMS_NeighbouringCellSCCPCH_v770ext_H_ */
#include <asn_internal.h>
