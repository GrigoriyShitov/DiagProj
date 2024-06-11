/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CondReconfigurationTriggerEUTRA_r16_H_
#define	_CondReconfigurationTriggerEUTRA_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>
#include "ThresholdEUTRA.h"
#include "ReferenceLocation-r18.h"
#include "HysteresisLocation-r18.h"
#include "PhysCellId.h"
#include "TimeOffsetUTC-r17.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR {
	CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_NOTHING,	/* No components present */
	CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_condEventA3_r16,
	CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_condEventA5_r16,
	/* Extensions may appear below */
	CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_condEventA4_r18,
	CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_condEventD1_r18,
	CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_condEventD2_r18,
	CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_condEventT1_r18
} CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR;

/* CondReconfigurationTriggerEUTRA-r16 */
typedef struct CondReconfigurationTriggerEUTRA_r16 {
	struct CondReconfigurationTriggerEUTRA_r16__condEventId_r16 {
		CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR present;
		union CondReconfigurationTriggerEUTRA_r16__condEventId_r16_u {
			struct CondReconfigurationTriggerEUTRA_r16__condEventId_r16__condEventA3_r16 {
				long	 a3_Offset_r16;
				Hysteresis_t	 hysteresis_r16;
				TimeToTrigger_t	 timeToTrigger_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} condEventA3_r16;
			struct CondReconfigurationTriggerEUTRA_r16__condEventId_r16__condEventA5_r16 {
				ThresholdEUTRA_t	 a5_Threshold1_r16;
				ThresholdEUTRA_t	 a5_Threshold2_r16;
				Hysteresis_t	 hysteresis_r16;
				TimeToTrigger_t	 timeToTrigger_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} condEventA5_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct CondReconfigurationTriggerEUTRA_r16__condEventId_r16__condEventA4_r18 {
				ThresholdEUTRA_t	 a4_Threshold_r18;
				Hysteresis_t	 hysteresis_r18;
				TimeToTrigger_t	 timeToTrigger_r18;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} condEventA4_r18;
			struct CondReconfigurationTriggerEUTRA_r16__condEventId_r16__condEventD1_r18 {
				long	 distanceThreshFromReference1_r18;
				long	 distanceThreshFromReference2_r18;
				ReferenceLocation_r18_t	 referenceLocation1_r18;
				ReferenceLocation_r18_t	 referenceLocation2_r18;
				HysteresisLocation_r18_t	 hysteresisLocation_r18;
				TimeToTrigger_t	 timeToTrigger_r18;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} condEventD1_r18;
			struct CondReconfigurationTriggerEUTRA_r16__condEventId_r16__condEventD2_r18 {
				long	 distanceThreshFromReference1_r18;
				long	 distanceThreshFromReference2_r18;
				ReferenceLocation_r18_t	 referenceLocation2_r18;
				HysteresisLocation_r18_t	 hysteresisLocation_r18;
				TimeToTrigger_t	 timeToTrigger_r18;
				PhysCellId_t	 cellForWhichToTriggerD2_r18;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} condEventD2_r18;
			struct CondReconfigurationTriggerEUTRA_r16__condEventId_r16__condEventT1_r18 {
				TimeOffsetUTC_r17_t	 t1_Threshold_r18;
				long	 duration_r18;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} condEventT1_r18;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} condEventId_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CondReconfigurationTriggerEUTRA_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CondReconfigurationTriggerEUTRA_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_CondReconfigurationTriggerEUTRA_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_CondReconfigurationTriggerEUTRA_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CondReconfigurationTriggerEUTRA_r16_H_ */
#include <asn_internal.h>
