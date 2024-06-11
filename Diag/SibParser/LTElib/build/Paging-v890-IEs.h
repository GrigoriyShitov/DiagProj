/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_Paging_v890_IEs_H_
#define	_Paging_v890_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Paging_v920_IEs;

/* Paging-v890-IEs */
typedef struct Paging_v890_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct Paging_v920_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Paging_v890_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Paging_v890_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_Paging_v890_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_Paging_v890_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Paging-v920-IEs.h"

#endif	/* _Paging_v890_IEs_H_ */
#include <asn_internal.h>
