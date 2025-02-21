/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TDD_MBSFNTSlotInfo_H_
#define	_TDD_MBSFNTSlotInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeslotNumber.h"
#include "CellParametersID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TDD-MBSFNTSlotInfo */
typedef struct TDD_MBSFNTSlotInfo {
	TimeslotNumber_t	 timeSlotNumber;
	CellParametersID_t	 cellParametersID;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDD_MBSFNTSlotInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TDD_MBSFNTSlotInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_TDD_MBSFNTSlotInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_TDD_MBSFNTSlotInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TDD_MBSFNTSlotInfo_H_ */
#include <asn_internal.h>
