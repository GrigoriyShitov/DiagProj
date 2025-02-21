/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_AP_Signature_VCAM_H_
#define	_AP_Signature_VCAM_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AP-Signature.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AvailableAP_SubchannelList;

/* AP-Signature-VCAM */
typedef struct AP_Signature_VCAM {
	AP_Signature_t	 ap_Signature;
	struct AvailableAP_SubchannelList	*availableAP_SubchannelList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AP_Signature_VCAM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AP_Signature_VCAM;
extern asn_SEQUENCE_specifics_t asn_SPC_AP_Signature_VCAM_specs_1;
extern asn_TYPE_member_t asn_MBR_AP_Signature_VCAM_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AvailableAP-SubchannelList.h"

#endif	/* _AP_Signature_VCAM_H_ */
#include <asn_internal.h>
