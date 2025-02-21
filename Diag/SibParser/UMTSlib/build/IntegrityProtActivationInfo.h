/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IntegrityProtActivationInfo_H_
#define	_IntegrityProtActivationInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-MessageSequenceNumberList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IntegrityProtActivationInfo */
typedef struct IntegrityProtActivationInfo {
	RRC_MessageSequenceNumberList_t	 rrc_MessageSequenceNumberList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntegrityProtActivationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntegrityProtActivationInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_IntegrityProtActivationInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_IntegrityProtActivationInfo_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _IntegrityProtActivationInfo_H_ */
#include <asn_internal.h>
