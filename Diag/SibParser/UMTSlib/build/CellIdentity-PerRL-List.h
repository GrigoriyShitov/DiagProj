/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CellIdentity_PerRL_List_H_
#define	_CellIdentity_PerRL_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIdentity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellIdentity-PerRL-List */
typedef struct CellIdentity_PerRL_List {
	A_SEQUENCE_OF(CellIdentity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellIdentity_PerRL_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellIdentity_PerRL_List;
extern asn_SET_OF_specifics_t asn_SPC_CellIdentity_PerRL_List_specs_1;
extern asn_TYPE_member_t asn_MBR_CellIdentity_PerRL_List_1[1];
extern asn_per_constraints_t asn_PER_type_CellIdentity_PerRL_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CellIdentity_PerRL_List_H_ */
#include <asn_internal.h>
