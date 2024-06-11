/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_DownlinkTimeslotsCodes_LCR_r4_H_
#define	_DownlinkTimeslotsCodes_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IndividualTimeslotInfo-LCR-r4.h"
#include "DL-TS-ChannelisationCodesShort.h"
#include <NULL.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DownlinkTimeslotsCodes_LCR_r4__moreTimeslots_PR {
	DownlinkTimeslotsCodes_LCR_r4__moreTimeslots_PR_NOTHING,	/* No components present */
	DownlinkTimeslotsCodes_LCR_r4__moreTimeslots_PR_noMore,
	DownlinkTimeslotsCodes_LCR_r4__moreTimeslots_PR_additionalTimeslots
} DownlinkTimeslotsCodes_LCR_r4__moreTimeslots_PR;
typedef enum DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_PR {
	DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_PR_NOTHING,	/* No components present */
	DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_PR_consecutive,
	DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_PR_timeslotList
} DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_PR;

/* Forward declarations */
struct DownlinkAdditionalTimeslots_LCR_r4;

/* DownlinkTimeslotsCodes-LCR-r4 */
typedef struct DownlinkTimeslotsCodes_LCR_r4 {
	IndividualTimeslotInfo_LCR_r4_t	 firstIndividualTimeslotInfo;
	DL_TS_ChannelisationCodesShort_t	 dl_TS_ChannelisationCodesShort;
	struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots {
		DownlinkTimeslotsCodes_LCR_r4__moreTimeslots_PR present;
		union DownlinkTimeslotsCodes_LCR_r4__moreTimeslots_u {
			NULL_t	 noMore;
			struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots {
				DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_PR present;
				union DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_u {
					long	 consecutive;
					struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots__timeslotList {
						A_SEQUENCE_OF(struct DownlinkAdditionalTimeslots_LCR_r4) list;
						
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
} DownlinkTimeslotsCodes_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DownlinkTimeslotsCodes_LCR_r4;
extern asn_SEQUENCE_specifics_t asn_SPC_DownlinkTimeslotsCodes_LCR_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_DownlinkTimeslotsCodes_LCR_r4_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DownlinkAdditionalTimeslots-LCR-r4.h"

#endif	/* _DownlinkTimeslotsCodes_LCR_r4_H_ */
#include <asn_internal.h>
