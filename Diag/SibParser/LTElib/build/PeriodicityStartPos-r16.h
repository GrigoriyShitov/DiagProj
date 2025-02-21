/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PeriodicityStartPos_r16_H_
#define	_PeriodicityStartPos_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PeriodicityStartPos_r16_PR {
	PeriodicityStartPos_r16_PR_NOTHING,	/* No components present */
	PeriodicityStartPos_r16_PR_periodicity10ms,
	PeriodicityStartPos_r16_PR_periodicity20ms,
	PeriodicityStartPos_r16_PR_periodicity40ms,
	PeriodicityStartPos_r16_PR_periodicity80ms,
	PeriodicityStartPos_r16_PR_periodicity160ms,
	PeriodicityStartPos_r16_PR_spare3,
	PeriodicityStartPos_r16_PR_spare2,
	PeriodicityStartPos_r16_PR_spare1
} PeriodicityStartPos_r16_PR;

/* PeriodicityStartPos-r16 */
typedef struct PeriodicityStartPos_r16 {
	PeriodicityStartPos_r16_PR present;
	union PeriodicityStartPos_r16_u {
		NULL_t	 periodicity10ms;
		long	 periodicity20ms;
		long	 periodicity40ms;
		long	 periodicity80ms;
		long	 periodicity160ms;
		NULL_t	 spare3;
		NULL_t	 spare2;
		NULL_t	 spare1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PeriodicityStartPos_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PeriodicityStartPos_r16;
extern asn_CHOICE_specifics_t asn_SPC_PeriodicityStartPos_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_PeriodicityStartPos_r16_1[8];
extern asn_per_constraints_t asn_PER_type_PeriodicityStartPos_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PeriodicityStartPos_r16_H_ */
#include <asn_internal.h>
