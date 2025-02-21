/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UplinkTimeslotsCodes_LCR_r7_H_
#define	_UplinkTimeslotsCodes_LCR_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "IndividualTimeslotInfo-LCR-r4.h"
#include "UL-TS-ChannelisationCodeList-r7.h"
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UplinkTimeslotsCodes_LCR_r7__moreTimeslots_PR {
	UplinkTimeslotsCodes_LCR_r7__moreTimeslots_PR_NOTHING,	/* No components present */
	UplinkTimeslotsCodes_LCR_r7__moreTimeslots_PR_noMore,
	UplinkTimeslotsCodes_LCR_r7__moreTimeslots_PR_additionalTimeslots
} UplinkTimeslotsCodes_LCR_r7__moreTimeslots_PR;
typedef enum UplinkTimeslotsCodes_LCR_r7__moreTimeslots__additionalTimeslots_PR {
	UplinkTimeslotsCodes_LCR_r7__moreTimeslots__additionalTimeslots_PR_NOTHING,	/* No components present */
	UplinkTimeslotsCodes_LCR_r7__moreTimeslots__additionalTimeslots_PR_consecutive,
	UplinkTimeslotsCodes_LCR_r7__moreTimeslots__additionalTimeslots_PR_timeslotList
} UplinkTimeslotsCodes_LCR_r7__moreTimeslots__additionalTimeslots_PR;

/* Forward declarations */
struct UplinkAdditionalTimeslots_LCR_r7;

/* UplinkTimeslotsCodes-LCR-r7 */
typedef struct UplinkTimeslotsCodes_LCR_r7 {
	BOOLEAN_t	 dynamicSFusage;
	IndividualTimeslotInfo_LCR_r4_t	 firstIndividualTimeslotInfo;
	UL_TS_ChannelisationCodeList_r7_t	 ul_TS_ChannelisationCodeList;
	struct UplinkTimeslotsCodes_LCR_r7__moreTimeslots {
		UplinkTimeslotsCodes_LCR_r7__moreTimeslots_PR present;
		union UplinkTimeslotsCodes_LCR_r7__moreTimeslots_u {
			NULL_t	 noMore;
			struct UplinkTimeslotsCodes_LCR_r7__moreTimeslots__additionalTimeslots {
				UplinkTimeslotsCodes_LCR_r7__moreTimeslots__additionalTimeslots_PR present;
				union UplinkTimeslotsCodes_LCR_r7__moreTimeslots__additionalTimeslots_u {
					struct UplinkTimeslotsCodes_LCR_r7__moreTimeslots__additionalTimeslots__consecutive {
						long	 numAdditionalTimeslots;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} consecutive;
					struct UplinkTimeslotsCodes_LCR_r7__moreTimeslots__additionalTimeslots__timeslotList {
						A_SEQUENCE_OF(struct UplinkAdditionalTimeslots_LCR_r7) list;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} timeslotList;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} additionalTimeslots;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} moreTimeslots;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkTimeslotsCodes_LCR_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkTimeslotsCodes_LCR_r7;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkTimeslotsCodes_LCR_r7_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkTimeslotsCodes_LCR_r7_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UplinkAdditionalTimeslots-LCR-r7.h"

#endif	/* _UplinkTimeslotsCodes_LCR_r7_H_ */
#include <asn_internal.h>
