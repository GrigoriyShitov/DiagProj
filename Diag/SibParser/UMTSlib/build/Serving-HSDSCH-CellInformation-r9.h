/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_Serving_HSDSCH_CellInformation_r9_H_
#define	_Serving_HSDSCH_CellInformation_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DeltaACK.h"
#include "DeltaNACK.h"
#include "HARQ-Preamble-Mode.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Serving_HSDSCH_CellInformation_r9__mac_hsResetIndicator {
	Serving_HSDSCH_CellInformation_r9__mac_hsResetIndicator_true	= 0
} e_Serving_HSDSCH_CellInformation_r9__mac_hsResetIndicator;

/* Forward declarations */
struct PrimaryCPICH_Info;
struct DL_HSPDSCH_Information_r9;
struct HARQ_Info_r7;

/* Serving-HSDSCH-CellInformation-r9 */
typedef struct Serving_HSDSCH_CellInformation_r9 {
	DeltaACK_t	*deltaACK	/* OPTIONAL */;
	DeltaNACK_t	*deltaNACK	/* OPTIONAL */;
	HARQ_Preamble_Mode_t	 harq_Preamble_Mode;
	struct PrimaryCPICH_Info	*primaryCPICH_Info	/* OPTIONAL */;
	struct DL_HSPDSCH_Information_r9	*dl_hspdsch_Information	/* OPTIONAL */;
	struct HARQ_Info_r7	*harqInfo	/* OPTIONAL */;
	long	*mac_hsResetIndicator	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Serving_HSDSCH_CellInformation_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mac_hsResetIndicator_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Serving_HSDSCH_CellInformation_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_Serving_HSDSCH_CellInformation_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_Serving_HSDSCH_CellInformation_r9_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PrimaryCPICH-Info.h"
#include "DL-HSPDSCH-Information-r9.h"
#include "HARQ-Info-r7.h"

#endif	/* _Serving_HSDSCH_CellInformation_r9_H_ */
#include <asn_internal.h>
