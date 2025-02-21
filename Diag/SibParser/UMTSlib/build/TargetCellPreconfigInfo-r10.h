/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TargetCellPreconfigInfo_r10_H_
#define	_TargetCellPreconfigInfo_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ActivationTimeOffset.h"
#include "H-RNTI.h"
#include "E-RNTI.h"
#include "Serving-HSDSCH-CellInformation-r9.h"
#include "E-DCH-ReconfigurationInfo-r7.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DTX_DRX_TimingInfo_r7;
struct DTX_DRX_Info_r7;
struct HS_SCCH_LessInfo_r7;
struct MIMO_Parameters_r9;
struct DL_SecondaryCellInfoFDD_r10;
struct AdditionalDLSecCellInfoListFDD;
struct UL_SecondaryCellInfoFDD;
struct E_DCH_ReconfigurationInfo_SecULFrequency;

/* TargetCellPreconfigInfo-r10 */
typedef struct TargetCellPreconfigInfo_r10 {
	ActivationTimeOffset_t	*activationTimeOffset	/* OPTIONAL */;
	H_RNTI_t	 new_H_RNTI;
	E_RNTI_t	*newPrimary_E_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newSecondary_E_RNTI	/* OPTIONAL */;
	Serving_HSDSCH_CellInformation_r9_t	 serving_HSDSCH_CellInformation;
	E_DCH_ReconfigurationInfo_r7_t	 e_dch_ReconfigurationInfo;
	struct DTX_DRX_TimingInfo_r7	*dtx_drx_TimingInfo	/* OPTIONAL */;
	struct DTX_DRX_Info_r7	*dtx_drx_Info	/* OPTIONAL */;
	struct HS_SCCH_LessInfo_r7	*hs_scch_LessInfo	/* OPTIONAL */;
	struct MIMO_Parameters_r9	*mimoParameters	/* OPTIONAL */;
	struct DL_SecondaryCellInfoFDD_r10	*dl_SecondaryCellInfoFDD	/* OPTIONAL */;
	struct AdditionalDLSecCellInfoListFDD	*additionalDLSecCellInfoListFDD	/* OPTIONAL */;
	struct UL_SecondaryCellInfoFDD	*ul_SecondaryCellInfoFDD	/* OPTIONAL */;
	struct E_DCH_ReconfigurationInfo_SecULFrequency	*e_dch_ReconfigurationInfo_SecULFrequency	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TargetCellPreconfigInfo_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TargetCellPreconfigInfo_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_TargetCellPreconfigInfo_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_TargetCellPreconfigInfo_r10_1[14];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DTX-DRX-TimingInfo-r7.h"
#include "DTX-DRX-Info-r7.h"
#include "HS-SCCH-LessInfo-r7.h"
#include "MIMO-Parameters-r9.h"
#include "DL-SecondaryCellInfoFDD-r10.h"
#include "AdditionalDLSecCellInfoListFDD.h"
#include "UL-SecondaryCellInfoFDD.h"
#include "E-DCH-ReconfigurationInfo-SecULFrequency.h"

#endif	/* _TargetCellPreconfigInfo_r10_H_ */
#include <asn_internal.h>
