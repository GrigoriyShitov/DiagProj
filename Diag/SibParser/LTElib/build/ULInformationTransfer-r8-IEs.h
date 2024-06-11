/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ULInformationTransfer_r8_IEs_H_
#define	_ULInformationTransfer_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DedicatedInfoNAS.h"
#include "DedicatedInfoCDMA2000.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ULInformationTransfer_r8_IEs__dedicatedInfoType_PR {
	ULInformationTransfer_r8_IEs__dedicatedInfoType_PR_NOTHING,	/* No components present */
	ULInformationTransfer_r8_IEs__dedicatedInfoType_PR_dedicatedInfoNAS,
	ULInformationTransfer_r8_IEs__dedicatedInfoType_PR_dedicatedInfoCDMA2000_1XRTT,
	ULInformationTransfer_r8_IEs__dedicatedInfoType_PR_dedicatedInfoCDMA2000_HRPD
} ULInformationTransfer_r8_IEs__dedicatedInfoType_PR;

/* Forward declarations */
struct ULInformationTransfer_v8a0_IEs;

/* ULInformationTransfer-r8-IEs */
typedef struct ULInformationTransfer_r8_IEs {
	struct ULInformationTransfer_r8_IEs__dedicatedInfoType {
		ULInformationTransfer_r8_IEs__dedicatedInfoType_PR present;
		union ULInformationTransfer_r8_IEs__dedicatedInfoType_u {
			DedicatedInfoNAS_t	 dedicatedInfoNAS;
			DedicatedInfoCDMA2000_t	 dedicatedInfoCDMA2000_1XRTT;
			DedicatedInfoCDMA2000_t	 dedicatedInfoCDMA2000_HRPD;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} dedicatedInfoType;
	struct ULInformationTransfer_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULInformationTransfer_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULInformationTransfer_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_ULInformationTransfer_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_ULInformationTransfer_r8_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ULInformationTransfer-v8a0-IEs.h"

#endif	/* _ULInformationTransfer_r8_IEs_H_ */
#include <asn_internal.h>
