/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_DL_LogicalChannelMapping_H_
#define	_DL_LogicalChannelMapping_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-TransportChannelType.h"
#include "LogicalChannelIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-LogicalChannelMapping */
typedef struct DL_LogicalChannelMapping {
	DL_TransportChannelType_t	 dl_TransportChannelType;
	LogicalChannelIdentity_t	*logicalChannelIdentity	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_LogicalChannelMapping_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_LogicalChannelMapping;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_LogicalChannelMapping_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_LogicalChannelMapping_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _DL_LogicalChannelMapping_H_ */
#include <asn_internal.h>
