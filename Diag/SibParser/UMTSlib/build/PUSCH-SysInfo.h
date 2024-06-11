/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PUSCH_SysInfo_H_
#define	_PUSCH_SysInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PUSCH-Identity.h"
#include "PUSCH-Info.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TransportFormatSet;
struct TFCS;

/* PUSCH-SysInfo */
typedef struct PUSCH_SysInfo {
	PUSCH_Identity_t	 pusch_Identity;
	PUSCH_Info_t	 pusch_Info;
	struct TransportFormatSet	*usch_TFS	/* OPTIONAL */;
	struct TFCS	*usch_TFCS	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_SysInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_SysInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_SysInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_SysInfo_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TransportFormatSet.h"
#include "TFCS.h"

#endif	/* _PUSCH_SysInfo_H_ */
#include <asn_internal.h>
