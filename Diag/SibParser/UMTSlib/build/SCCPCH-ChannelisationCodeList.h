/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SCCPCH_ChannelisationCodeList_H_
#define	_SCCPCH_ChannelisationCodeList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SCCPCH-ChannelisationCode.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SCCPCH-ChannelisationCodeList */
typedef struct SCCPCH_ChannelisationCodeList {
	A_SEQUENCE_OF(SCCPCH_ChannelisationCode_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCCPCH_ChannelisationCodeList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCCPCH_ChannelisationCodeList;
extern asn_SET_OF_specifics_t asn_SPC_SCCPCH_ChannelisationCodeList_specs_1;
extern asn_TYPE_member_t asn_MBR_SCCPCH_ChannelisationCodeList_1[1];
extern asn_per_constraints_t asn_PER_type_SCCPCH_ChannelisationCodeList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SCCPCH_ChannelisationCodeList_H_ */
#include <asn_internal.h>
