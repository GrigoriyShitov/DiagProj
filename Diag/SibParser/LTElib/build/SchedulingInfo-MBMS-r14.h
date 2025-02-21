/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SchedulingInfo_MBMS_r14_H_
#define	_SchedulingInfo_MBMS_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "SIB-MappingInfo-MBMS-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SchedulingInfo_MBMS_r14__si_Periodicity_r14 {
	SchedulingInfo_MBMS_r14__si_Periodicity_r14_rf16	= 0,
	SchedulingInfo_MBMS_r14__si_Periodicity_r14_rf32	= 1,
	SchedulingInfo_MBMS_r14__si_Periodicity_r14_rf64	= 2,
	SchedulingInfo_MBMS_r14__si_Periodicity_r14_rf128	= 3,
	SchedulingInfo_MBMS_r14__si_Periodicity_r14_rf256	= 4,
	SchedulingInfo_MBMS_r14__si_Periodicity_r14_rf512	= 5
} e_SchedulingInfo_MBMS_r14__si_Periodicity_r14;

/* SchedulingInfo-MBMS-r14 */
typedef struct SchedulingInfo_MBMS_r14 {
	long	 si_Periodicity_r14;
	SIB_MappingInfo_MBMS_r14_t	 sib_MappingInfo_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingInfo_MBMS_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_si_Periodicity_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingInfo_MBMS_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SchedulingInfo_MBMS_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingInfo_MBMS_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingInfo_MBMS_r14_H_ */
#include <asn_internal.h>
