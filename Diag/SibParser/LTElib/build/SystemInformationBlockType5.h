/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SystemInformationBlockType5_H_
#define	_SystemInformationBlockType5_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCarrierFreqList.h"
#include <OCTET_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqList_v1250;
struct InterFreqCarrierFreqListExt_r12;
struct InterFreqCarrierFreqListExt_v1280;
struct InterFreqCarrierFreqList_v1310;
struct InterFreqCarrierFreqListExt_v1310;
struct InterFreqCarrierFreqList_v1350;
struct InterFreqCarrierFreqListExt_v1350;
struct InterFreqCarrierFreqListExt_v1360;
struct InterFreqCarrierFreqList_v1530;
struct InterFreqCarrierFreqListExt_v1530;
struct MeasIdleConfigSIB_r15;
struct InterFreqCarrierFreqList_v1610;
struct InterFreqCarrierFreqListExt_v1610;
struct MeasIdleConfigSIB_NR_r16;
struct InterFreqCarrierFreqList_v1800;
struct InterFreqCarrierFreqListExt_v1800;

/* SystemInformationBlockType5 */
typedef struct SystemInformationBlockType5 {
	InterFreqCarrierFreqList_t	 interFreqCarrierFreqList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct InterFreqCarrierFreqList_v1250	*interFreqCarrierFreqList_v1250	/* OPTIONAL */;
	struct InterFreqCarrierFreqListExt_r12	*interFreqCarrierFreqListExt_r12	/* OPTIONAL */;
	struct InterFreqCarrierFreqListExt_v1280	*interFreqCarrierFreqListExt_v1280	/* OPTIONAL */;
	struct InterFreqCarrierFreqList_v1310	*interFreqCarrierFreqList_v1310	/* OPTIONAL */;
	struct InterFreqCarrierFreqListExt_v1310	*interFreqCarrierFreqListExt_v1310	/* OPTIONAL */;
	struct InterFreqCarrierFreqList_v1350	*interFreqCarrierFreqList_v1350	/* OPTIONAL */;
	struct InterFreqCarrierFreqListExt_v1350	*interFreqCarrierFreqListExt_v1350	/* OPTIONAL */;
	struct InterFreqCarrierFreqListExt_v1360	*interFreqCarrierFreqListExt_v1360	/* OPTIONAL */;
	long	*scptm_FreqOffset_r14	/* OPTIONAL */;
	struct InterFreqCarrierFreqList_v1530	*interFreqCarrierFreqList_v1530	/* OPTIONAL */;
	struct InterFreqCarrierFreqListExt_v1530	*interFreqCarrierFreqListExt_v1530	/* OPTIONAL */;
	struct MeasIdleConfigSIB_r15	*measIdleConfigSIB_r15	/* OPTIONAL */;
	struct InterFreqCarrierFreqList_v1610	*interFreqCarrierFreqList_v1610	/* OPTIONAL */;
	struct InterFreqCarrierFreqListExt_v1610	*interFreqCarrierFreqListExt_v1610	/* OPTIONAL */;
	struct MeasIdleConfigSIB_NR_r16	*measIdleConfigSIB_NR_r16	/* OPTIONAL */;
	struct InterFreqCarrierFreqList_v1800	*interFreqCarrierFreqList_v1800	/* OPTIONAL */;
	struct InterFreqCarrierFreqListExt_v1800	*interFreqCarrierFreqListExt_v1800	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType5;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType5_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType5_1[19];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCarrierFreqList-v1250.h"
#include "InterFreqCarrierFreqListExt-r12.h"
#include "InterFreqCarrierFreqListExt-v1280.h"
#include "InterFreqCarrierFreqList-v1310.h"
#include "InterFreqCarrierFreqListExt-v1310.h"
#include "InterFreqCarrierFreqList-v1350.h"
#include "InterFreqCarrierFreqListExt-v1350.h"
#include "InterFreqCarrierFreqListExt-v1360.h"
#include "InterFreqCarrierFreqList-v1530.h"
#include "InterFreqCarrierFreqListExt-v1530.h"
#include "MeasIdleConfigSIB-r15.h"
#include "InterFreqCarrierFreqList-v1610.h"
#include "InterFreqCarrierFreqListExt-v1610.h"
#include "MeasIdleConfigSIB-NR-r16.h"
#include "InterFreqCarrierFreqList-v1800.h"
#include "InterFreqCarrierFreqListExt-v1800.h"

#endif	/* _SystemInformationBlockType5_H_ */
#include <asn_internal.h>
