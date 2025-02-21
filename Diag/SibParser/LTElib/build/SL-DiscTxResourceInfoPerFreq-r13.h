/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SL_DiscTxResourceInfoPerFreq_r13_H_
#define	_SL_DiscTxResourceInfoPerFreq_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_DiscTxResource_r13;
struct SL_DiscTxRefCarrierDedicated_r13;
struct CellSelectionInfoNFreq_r13;

/* SL-DiscTxResourceInfoPerFreq-r13 */
typedef struct SL_DiscTxResourceInfoPerFreq_r13 {
	ARFCN_ValueEUTRA_r9_t	 discTxCarrierFreq_r13;
	struct SL_DiscTxResource_r13	*discTxResources_r13	/* OPTIONAL */;
	struct SL_DiscTxResource_r13	*discTxResourcesPS_r13	/* OPTIONAL */;
	struct SL_DiscTxRefCarrierDedicated_r13	*discTxRefCarrierDedicated_r13	/* OPTIONAL */;
	struct CellSelectionInfoNFreq_r13	*discCellSelectionInfo_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_DiscTxResourceInfoPerFreq_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_DiscTxResourceInfoPerFreq_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_DiscTxResourceInfoPerFreq_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_DiscTxResourceInfoPerFreq_r13_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-DiscTxResource-r13.h"
#include "SL-DiscTxRefCarrierDedicated-r13.h"
#include "CellSelectionInfoNFreq-r13.h"

#endif	/* _SL_DiscTxResourceInfoPerFreq_r13_H_ */
#include <asn_internal.h>
