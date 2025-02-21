/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PURConfigurationRequest_r16_IEs_H_
#define	_PURConfigurationRequest_r16_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16_PR {
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16_PR_NOTHING,	/* No components present */
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16_PR_pur_ReleaseRequest,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16_PR_pur_SetupRequest
} PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16_PR;
typedef enum PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedNumOccasions_r16 {
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedNumOccasions_r16_one	= 0,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedNumOccasions_r16_infinite	= 1
} e_PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedNumOccasions_r16;
typedef enum PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16 {
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b328	= 0,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b344	= 1,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b376	= 2,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b392	= 3,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b408	= 4,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b424	= 5,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b440	= 6,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b456	= 7,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b472	= 8,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b488	= 9,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b504	= 10,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b536	= 11,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b568	= 12,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b584	= 13,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b616	= 14,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b648	= 15,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b680	= 16,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b712	= 17,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b744	= 18,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b776	= 19,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b808	= 20,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b840	= 21,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b872	= 22,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b904	= 23,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b936	= 24,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b968	= 25,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1000	= 26,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1032	= 27,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1064	= 28,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1096	= 29,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1128	= 30,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1160	= 31,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1192	= 32,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1224	= 33,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1256	= 34,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1288	= 35,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1320	= 36,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1352	= 37,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1384	= 38,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1416	= 39,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1480	= 40,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1544	= 41,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1608	= 42,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1672	= 43,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1736	= 44,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1800	= 45,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1864	= 46,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1928	= 47,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b1992	= 48,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2024	= 49,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2088	= 50,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2152	= 51,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2216	= 52,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2280	= 53,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2344	= 54,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2408	= 55,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2472	= 56,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2536	= 57,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2600	= 58,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2664	= 59,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2728	= 60,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2792	= 61,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2856	= 62,
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16_b2984	= 63
} e_PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__requestedTBS_r16;
typedef enum PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__rrc_ACK_r16 {
	PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__rrc_ACK_r16_true	= 0
} e_PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest__rrc_ACK_r16;

/* Forward declarations */
struct PUR_PeriodicityAndOffset_r16;

/* PURConfigurationRequest-r16-IEs */
typedef struct PURConfigurationRequest_r16_IEs {
	struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16 {
		PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16_PR present;
		union PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16_u {
			NULL_t	 pur_ReleaseRequest;
			struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest {
				long	 requestedNumOccasions_r16;
				struct PUR_PeriodicityAndOffset_r16	*requestedPeriodicityAndOffset_r16	/* OPTIONAL */;
				long	 requestedTBS_r16;
				long	*rrc_ACK_r16	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} pur_SetupRequest;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pur_ConfigRequest_r16;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct PURConfigurationRequest_r16_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PURConfigurationRequest_r16_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_requestedNumOccasions_r16_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_requestedTBS_r16_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rrc_ACK_r16_74;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PURConfigurationRequest_r16_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_PURConfigurationRequest_r16_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_PURConfigurationRequest_r16_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PUR-PeriodicityAndOffset-r16.h"

#endif	/* _PURConfigurationRequest_r16_IEs_H_ */
#include <asn_internal.h>
