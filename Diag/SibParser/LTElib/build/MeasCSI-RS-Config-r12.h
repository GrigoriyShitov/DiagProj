/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasCSI_RS_Config_r12_H_
#define	_MeasCSI_RS_Config_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasCSI-RS-Id-r12.h"
#include <NativeInteger.h>
#include "Q-OffsetRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasCSI-RS-Config-r12 */
typedef struct MeasCSI_RS_Config_r12 {
	MeasCSI_RS_Id_r12_t	 measCSI_RS_Id_r12;
	long	 physCellId_r12;
	long	 scramblingIdentity_r12;
	long	 resourceConfig_r12;
	long	 subframeOffset_r12;
	Q_OffsetRange_t	 csi_RS_IndividualOffset_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasCSI_RS_Config_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasCSI_RS_Config_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasCSI_RS_Config_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasCSI_RS_Config_r12_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasCSI_RS_Config_r12_H_ */
#include <asn_internal.h>
