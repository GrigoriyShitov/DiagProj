/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IntraUTRAANR_H_
#define	_IntraUTRAANR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LoggingAbsoluteThreshold.h"
#include "LoggingRelativeThreshold.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IntraUTRAANR */
typedef struct IntraUTRAANR {
	LoggingAbsoluteThreshold_t	 loggingAbsoluteThreshold;
	LoggingRelativeThreshold_t	*loggingRelativeThreshold	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraUTRAANR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraUTRAANR;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraUTRAANR_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraUTRAANR_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IntraUTRAANR_H_ */
#include <asn_internal.h>
