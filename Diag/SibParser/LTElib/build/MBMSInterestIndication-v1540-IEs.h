/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MBMSInterestIndication_v1540_IEs_H_
#define	_MBMSInterestIndication_v1540_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMSInterestIndication_v1610_IEs;
struct MBMS_ROM_Info_r15;

/* MBMSInterestIndication-v1540-IEs */
typedef struct MBMSInterestIndication_v1540_IEs {
	struct MBMSInterestIndication_v1540_IEs__mbms_ROM_InfoList_r15 {
		A_SEQUENCE_OF(struct MBMS_ROM_Info_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mbms_ROM_InfoList_r15;
	struct MBMSInterestIndication_v1610_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMSInterestIndication_v1540_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMSInterestIndication_v1540_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_MBMSInterestIndication_v1540_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMSInterestIndication_v1540_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMSInterestIndication-v1610-IEs.h"
#include "MBMS-ROM-Info-r15.h"

#endif	/* _MBMSInterestIndication_v1540_IEs_H_ */
#include <asn_internal.h>
