/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_v1180_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_v1180_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMS-Parameters-r11.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-EUTRA-CapabilityAddXDD-Mode-v1180 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1180 {
	MBMS_Parameters_r11_t	 mbms_Parameters_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_v1180_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1180;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1180_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1180_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_v1180_H_ */
#include <asn_internal.h>
