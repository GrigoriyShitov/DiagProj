/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SecondaryCPICH_Info_H_
#define	_SecondaryCPICH_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SecondaryScramblingCode.h"
#include "ChannelisationCode256.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SecondaryCPICH-Info */
typedef struct SecondaryCPICH_Info {
	SecondaryScramblingCode_t	*secondaryDL_ScramblingCode	/* OPTIONAL */;
	ChannelisationCode256_t	 channelisationCode;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecondaryCPICH_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecondaryCPICH_Info;
extern asn_SEQUENCE_specifics_t asn_SPC_SecondaryCPICH_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_SecondaryCPICH_Info_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SecondaryCPICH_Info_H_ */
#include <asn_internal.h>
