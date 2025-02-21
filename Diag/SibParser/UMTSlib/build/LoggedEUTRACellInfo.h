/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_LoggedEUTRACellInfo_H_
#define	_LoggedEUTRACellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include <BIT_STRING.h>
#include "EARFCN.h"
#include "EUTRA-PhysicalCellIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LoggedEUTRACellInfo */
typedef struct LoggedEUTRACellInfo {
	PLMN_Identity_t	 plmn_Identity;
	BIT_STRING_t	 trackingAreaCode;
	BIT_STRING_t	 eutraCellIdentity;
	EARFCN_t	 earfcn;
	EUTRA_PhysicalCellIdentity_t	 physicalCellIdentity;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedEUTRACellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedEUTRACellInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_LoggedEUTRACellInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_LoggedEUTRACellInfo_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _LoggedEUTRACellInfo_H_ */
#include <asn_internal.h>
