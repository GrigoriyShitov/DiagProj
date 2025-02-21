/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PICH_Info_H_
#define	_PICH_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ChannelisationCode256.h"
#include "PI-CountPerFrame.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include "TDD-PICH-CCode.h"
#include "TimeslotNumber.h"
#include "MidambleShiftAndBurstType.h"
#include "PagingIndicatorLength.h"
#include "N-GAP.h"
#include "N-PCH.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PICH_Info_PR {
	PICH_Info_PR_NOTHING,	/* No components present */
	PICH_Info_PR_fdd,
	PICH_Info_PR_tdd
} PICH_Info_PR;

/* Forward declarations */
struct RepPerLengthOffset_PICH;

/* PICH-Info */
typedef struct PICH_Info {
	PICH_Info_PR present;
	union PICH_Info_u {
		struct PICH_Info__fdd {
			ChannelisationCode256_t	 channelisationCode256;
			PI_CountPerFrame_t	 pi_CountPerFrame;
			BOOLEAN_t	 sttd_Indicator;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} fdd;
		struct PICH_Info__tdd {
			TDD_PICH_CCode_t	*channelisationCode	/* OPTIONAL */;
			TimeslotNumber_t	*timeslot	/* OPTIONAL */;
			MidambleShiftAndBurstType_t	 midambleShiftAndBurstType;
			struct RepPerLengthOffset_PICH	*repetitionPeriodLengthOffset	/* OPTIONAL */;
			PagingIndicatorLength_t	 pagingIndicatorLength	/* DEFAULT 0 */;
			N_GAP_t	*n_GAP	/* DEFAULT 1 */;
			N_PCH_t	*n_PCH	/* DEFAULT 2 */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PICH_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PICH_Info;
extern asn_CHOICE_specifics_t asn_SPC_PICH_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_PICH_Info_1[2];
extern asn_per_constraints_t asn_PER_type_PICH_Info_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RepPerLengthOffset-PICH.h"

#endif	/* _PICH_Info_H_ */
#include <asn_internal.h>
