/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_NAVclockModel_H_
#define	_NAVclockModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NAVclockModel */
typedef struct NAVclockModel {
	BIT_STRING_t	 navToc;
	BIT_STRING_t	 navaf2;
	BIT_STRING_t	 navaf1;
	BIT_STRING_t	 navaf0;
	BIT_STRING_t	 navTgd;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NAVclockModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NAVclockModel;
extern asn_SEQUENCE_specifics_t asn_SPC_NAVclockModel_specs_1;
extern asn_TYPE_member_t asn_MBR_NAVclockModel_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NAVclockModel_H_ */
#include <asn_internal.h>
