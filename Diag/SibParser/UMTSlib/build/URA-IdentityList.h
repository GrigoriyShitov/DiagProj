/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_URA_IdentityList_H_
#define	_URA_IdentityList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "URA-Identity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* URA-IdentityList */
typedef struct URA_IdentityList {
	A_SEQUENCE_OF(URA_Identity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} URA_IdentityList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_URA_IdentityList;
extern asn_SET_OF_specifics_t asn_SPC_URA_IdentityList_specs_1;
extern asn_TYPE_member_t asn_MBR_URA_IdentityList_1[1];
extern asn_per_constraints_t asn_PER_type_URA_IdentityList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _URA_IdentityList_H_ */
#include <asn_internal.h>
