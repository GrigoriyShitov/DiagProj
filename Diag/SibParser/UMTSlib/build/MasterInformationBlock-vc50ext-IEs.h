/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MasterInformationBlock_vc50ext_IEs_H_
#define	_MasterInformationBlock_vc50ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MIB-ValueTagExt.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SIBSb_ReferenceList2;
struct ExtSIBTypeInfoSchedulingInfo_List3;
struct SB3_Information;

/* MasterInformationBlock-vc50ext-IEs */
typedef struct MasterInformationBlock_vc50ext_IEs {
	MIB_ValueTagExt_t	*mib_ValueTagExt	/* OPTIONAL */;
	struct SIBSb_ReferenceList2	*sibSb_ReferenceList	/* OPTIONAL */;
	struct ExtSIBTypeInfoSchedulingInfo_List3	*extSIBTypeInfoSchedulingInfo_List	/* OPTIONAL */;
	struct SB3_Information	*sb3_Information	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MasterInformationBlock_vc50ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MasterInformationBlock_vc50ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_MasterInformationBlock_vc50ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_MasterInformationBlock_vc50ext_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SIBSb-ReferenceList2.h"
#include "ExtSIBTypeInfoSchedulingInfo-List3.h"
#include "SB3-Information.h"

#endif	/* _MasterInformationBlock_vc50ext_IEs_H_ */
#include <asn_internal.h>
