/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SCellGroupToAddMod_r15_H_
#define	_SCellGroupToAddMod_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SCellGroupIndex-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCellConfigCommon_r15;
struct SCellToReleaseListExt_r13;
struct SCellToAddModListExt_r13;

/* SCellGroupToAddMod-r15 */
typedef struct SCellGroupToAddMod_r15 {
	SCellGroupIndex_r15_t	 sCellGroupIndex_r15;
	struct SCellConfigCommon_r15	*sCellConfigCommon_r15	/* OPTIONAL */;
	struct SCellToReleaseListExt_r13	*sCellToReleaseList_r15	/* OPTIONAL */;
	struct SCellToAddModListExt_r13	*sCellToAddModList_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellGroupToAddMod_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCellGroupToAddMod_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SCellGroupToAddMod_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SCellGroupToAddMod_r15_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCellConfigCommon-r15.h"
#include "SCellToReleaseListExt-r13.h"
#include "SCellToAddModListExt-r13.h"

#endif	/* _SCellGroupToAddMod_r15_H_ */
#include <asn_internal.h>
