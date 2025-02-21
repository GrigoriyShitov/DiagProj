/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PDSCH_ConfigCommon_v1310_H_
#define	_PDSCH_ConfigCommon_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeA_r13 {
	PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeA_r13_r16	= 0,
	PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeA_r13_r32	= 1
} e_PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeA_r13;
typedef enum PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeB_r13 {
	PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeB_r13_r192	= 0,
	PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeB_r13_r256	= 1,
	PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeB_r13_r384	= 2,
	PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeB_r13_r512	= 3,
	PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeB_r13_r768	= 4,
	PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeB_r13_r1024	= 5,
	PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeB_r13_r1536	= 6,
	PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeB_r13_r2048	= 7
} e_PDSCH_ConfigCommon_v1310__pdsch_maxNumRepetitionCEmodeB_r13;

/* PDSCH-ConfigCommon-v1310 */
typedef struct PDSCH_ConfigCommon_v1310 {
	long	*pdsch_maxNumRepetitionCEmodeA_r13	/* OPTIONAL */;
	long	*pdsch_maxNumRepetitionCEmodeB_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_ConfigCommon_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_maxNumRepetitionCEmodeA_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_maxNumRepetitionCEmodeB_r13_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigCommon_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigCommon_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_ConfigCommon_v1310_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_ConfigCommon_v1310_H_ */
#include <asn_internal.h>
