/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CSGProximityIndication_H_
#define	_CSGProximityIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "FrequencyInfo.h"
#include <constr_SEQUENCE.h>
#include "EARFCN.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSGProximityIndication__cSGproximityInd {
	CSGProximityIndication__cSGproximityInd_entering	= 0,
	CSGProximityIndication__cSGproximityInd_leaving	= 1
} e_CSGProximityIndication__cSGproximityInd;
typedef enum CSGProximityIndication__radioAccessTechnology_PR {
	CSGProximityIndication__radioAccessTechnology_PR_NOTHING,	/* No components present */
	CSGProximityIndication__radioAccessTechnology_PR_uTRA,
	CSGProximityIndication__radioAccessTechnology_PR_e_UTRA
} CSGProximityIndication__radioAccessTechnology_PR;

/* CSGProximityIndication */
typedef struct CSGProximityIndication {
	long	 cSGproximityInd;
	struct CSGProximityIndication__radioAccessTechnology {
		CSGProximityIndication__radioAccessTechnology_PR present;
		union CSGProximityIndication__radioAccessTechnology_u {
			struct CSGProximityIndication__radioAccessTechnology__uTRA {
				FrequencyInfo_t	 cSGFrequencyInfoUTRA;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} uTRA;
			struct CSGProximityIndication__radioAccessTechnology__e_UTRA {
				EARFCN_t	 cSGFrequencyInfoEUTRA;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} e_UTRA;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} radioAccessTechnology;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSGProximityIndication_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cSGproximityInd_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSGProximityIndication;
extern asn_SEQUENCE_specifics_t asn_SPC_CSGProximityIndication_specs_1;
extern asn_TYPE_member_t asn_MBR_CSGProximityIndication_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CSGProximityIndication_H_ */
#include <asn_internal.h>
