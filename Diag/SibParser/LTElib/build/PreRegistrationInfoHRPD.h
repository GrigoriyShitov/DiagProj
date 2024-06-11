/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PreRegistrationInfoHRPD_H_
#define	_PreRegistrationInfoHRPD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "PreRegistrationZoneIdHRPD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SecondaryPreRegistrationZoneIdListHRPD;

/* PreRegistrationInfoHRPD */
typedef struct PreRegistrationInfoHRPD {
	BOOLEAN_t	 preRegistrationAllowed;
	PreRegistrationZoneIdHRPD_t	*preRegistrationZoneId	/* OPTIONAL */;
	struct SecondaryPreRegistrationZoneIdListHRPD	*secondaryPreRegistrationZoneIdList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PreRegistrationInfoHRPD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PreRegistrationInfoHRPD;
extern asn_SEQUENCE_specifics_t asn_SPC_PreRegistrationInfoHRPD_specs_1;
extern asn_TYPE_member_t asn_MBR_PreRegistrationInfoHRPD_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SecondaryPreRegistrationZoneIdListHRPD.h"

#endif	/* _PreRegistrationInfoHRPD_H_ */
#include <asn_internal.h>
