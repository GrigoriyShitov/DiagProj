/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasurementControlSysInfo_vc50ext_H_
#define	_MeasurementControlSysInfo_vc50ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqReportingQuantityForRACH_vc50ext;
struct RMP_Frequency_List;

/* MeasurementControlSysInfo-vc50ext */
typedef struct MeasurementControlSysInfo_vc50ext {
	struct IntraFreqReportingQuantityForRACH_vc50ext	*intraFreqReportingQuantityForRACH	/* OPTIONAL */;
	struct RMP_Frequency_List	*rmp_Frequency_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementControlSysInfo_vc50ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementControlSysInfo_vc50ext;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementControlSysInfo_vc50ext_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementControlSysInfo_vc50ext_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqReportingQuantityForRACH-vc50ext.h"
#include "RMP-Frequency-List.h"

#endif	/* _MeasurementControlSysInfo_vc50ext_H_ */
#include <asn_internal.h>
