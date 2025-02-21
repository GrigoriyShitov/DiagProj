/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TGPS_ConfigurationParams_H_
#define	_TGPS_ConfigurationParams_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TGMP.h"
#include "TGPRC.h"
#include "TGSN.h"
#include "TGL.h"
#include "TGD.h"
#include "TGPL.h"
#include "RPP.h"
#include "ITP.h"
#include "UL-DL-Mode.h"
#include "DL-FrameType.h"
#include "DeltaSIR.h"
#include "NidentifyAbort.h"
#include "TreconfirmAbort.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TGPS-ConfigurationParams */
typedef struct TGPS_ConfigurationParams {
	TGMP_t	 tgmp;
	TGPRC_t	 tgprc;
	TGSN_t	 tgsn;
	TGL_t	 tgl1;
	TGL_t	*tgl2	/* OPTIONAL */;
	TGD_t	 tgd;
	TGPL_t	 tgpl1;
	TGPL_t	*dummy	/* OPTIONAL */;
	RPP_t	 rpp;
	ITP_t	 itp;
	UL_DL_Mode_t	 ul_DL_Mode;
	DL_FrameType_t	 dl_FrameType;
	DeltaSIR_t	 deltaSIR1;
	DeltaSIR_t	 deltaSIRAfter1;
	DeltaSIR_t	*deltaSIR2	/* OPTIONAL */;
	DeltaSIR_t	*deltaSIRAfter2	/* OPTIONAL */;
	NidentifyAbort_t	*nidentifyAbort	/* OPTIONAL */;
	TreconfirmAbort_t	*treconfirmAbort	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TGPS_ConfigurationParams_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TGPS_ConfigurationParams;
extern asn_SEQUENCE_specifics_t asn_SPC_TGPS_ConfigurationParams_specs_1;
extern asn_TYPE_member_t asn_MBR_TGPS_ConfigurationParams_1[18];

#ifdef __cplusplus
}
#endif

#endif	/* _TGPS_ConfigurationParams_H_ */
#include <asn_internal.h>
