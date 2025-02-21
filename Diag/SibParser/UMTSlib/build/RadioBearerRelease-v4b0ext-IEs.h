/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RadioBearerRelease_v4b0ext_IEs_H_
#define	_RadioBearerRelease_v4b0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SSDT-UL.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellIdentity_PerRL_List;

/* RadioBearerRelease-v4b0ext-IEs */
typedef struct RadioBearerRelease_v4b0ext_IEs {
	SSDT_UL_t	*dummy	/* OPTIONAL */;
	struct CellIdentity_PerRL_List	*cell_id_PerRL_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerRelease_v4b0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerRelease_v4b0ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioBearerRelease_v4b0ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioBearerRelease_v4b0ext_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellIdentity-PerRL-List.h"

#endif	/* _RadioBearerRelease_v4b0ext_IEs_H_ */
#include <asn_internal.h>
