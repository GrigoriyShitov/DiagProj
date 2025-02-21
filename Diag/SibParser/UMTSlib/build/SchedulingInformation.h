/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SchedulingInformation_H_
#define	_SchedulingInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SegCount.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SchedulingInformation__scheduling__sib_Pos_PR {
	SchedulingInformation__scheduling__sib_Pos_PR_NOTHING,	/* No components present */
	SchedulingInformation__scheduling__sib_Pos_PR_rep4,
	SchedulingInformation__scheduling__sib_Pos_PR_rep8,
	SchedulingInformation__scheduling__sib_Pos_PR_rep16,
	SchedulingInformation__scheduling__sib_Pos_PR_rep32,
	SchedulingInformation__scheduling__sib_Pos_PR_rep64,
	SchedulingInformation__scheduling__sib_Pos_PR_rep128,
	SchedulingInformation__scheduling__sib_Pos_PR_rep256,
	SchedulingInformation__scheduling__sib_Pos_PR_rep512,
	SchedulingInformation__scheduling__sib_Pos_PR_rep1024,
	SchedulingInformation__scheduling__sib_Pos_PR_rep2048,
	SchedulingInformation__scheduling__sib_Pos_PR_rep4096
} SchedulingInformation__scheduling__sib_Pos_PR;

/* Forward declarations */
struct SibOFF_List;

/* SchedulingInformation */
typedef struct SchedulingInformation {
	struct SchedulingInformation__scheduling {
		SegCount_t	*segCount	/* DEFAULT 1 */;
		struct SchedulingInformation__scheduling__sib_Pos {
			SchedulingInformation__scheduling__sib_Pos_PR present;
			union SchedulingInformation__scheduling__sib_Pos_u {
				long	 rep4;
				long	 rep8;
				long	 rep16;
				long	 rep32;
				long	 rep64;
				long	 rep128;
				long	 rep256;
				long	 rep512;
				long	 rep1024;
				long	 rep2048;
				long	 rep4096;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} sib_Pos;
		struct SibOFF_List	*sib_PosOffsetInfo	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} scheduling;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_SchedulingInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingInformation_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SibOFF-List.h"

#endif	/* _SchedulingInformation_H_ */
#include <asn_internal.h>
