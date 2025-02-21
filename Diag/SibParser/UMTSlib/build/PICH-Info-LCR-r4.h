/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PICH_Info_LCR_r4_H_
#define	_PICH_Info_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeslotNumber-LCR-r4.h"
#include "PichChannelisationCodeList-LCR-r4.h"
#include "MidambleShiftAndBurstType-LCR-r4.h"
#include "PagingIndicatorLength.h"
#include "N-GAP.h"
#include "N-PCH.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RepPerLengthOffset_PICH;

/* PICH-Info-LCR-r4 */
typedef struct PICH_Info_LCR_r4 {
	TimeslotNumber_LCR_r4_t	*timeslot	/* OPTIONAL */;
	PichChannelisationCodeList_LCR_r4_t	 pichChannelisationCodeList_LCR_r4;
	MidambleShiftAndBurstType_LCR_r4_t	 midambleShiftAndBurstType;
	struct RepPerLengthOffset_PICH	*repetitionPeriodLengthOffset	/* OPTIONAL */;
	PagingIndicatorLength_t	 pagingIndicatorLength	/* DEFAULT 0 */;
	N_GAP_t	*n_GAP	/* DEFAULT 1 */;
	N_PCH_t	*n_PCH	/* DEFAULT 2 */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PICH_Info_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PICH_Info_LCR_r4;
extern asn_SEQUENCE_specifics_t asn_SPC_PICH_Info_LCR_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_PICH_Info_LCR_r4_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RepPerLengthOffset-PICH.h"

#endif	/* _PICH_Info_LCR_r4_H_ */
#include <asn_internal.h>
