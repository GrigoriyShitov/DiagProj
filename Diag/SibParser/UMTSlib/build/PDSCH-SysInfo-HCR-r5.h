/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PDSCH_SysInfo_HCR_r5_H_
#define	_PDSCH_SysInfo_HCR_r5_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDSCH-Identity.h"
#include "PDSCH-Info.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DSCH_TransportChannelsInfo;
struct TFCS;

/* PDSCH-SysInfo-HCR-r5 */
typedef struct PDSCH_SysInfo_HCR_r5 {
	PDSCH_Identity_t	 pdsch_Identity;
	PDSCH_Info_t	 pdsch_Info;
	struct DSCH_TransportChannelsInfo	*dsch_TransportChannelsInfo	/* OPTIONAL */;
	struct TFCS	*dsch_TFCS	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_SysInfo_HCR_r5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_SysInfo_HCR_r5;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_SysInfo_HCR_r5_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_SysInfo_HCR_r5_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DSCH-TransportChannelsInfo.h"
#include "TFCS.h"

#endif	/* _PDSCH_SysInfo_HCR_r5_H_ */
#include <asn_internal.h>
