/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SysInfoType5_vb50ext_IEs_H_
#define	_SysInfoType5_vb50ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SysInfoType5_vb50ext_IEs__cellUpdateMessageOptimisedEncoding {
	SysInfoType5_vb50ext_IEs__cellUpdateMessageOptimisedEncoding_true	= 0
} e_SysInfoType5_vb50ext_IEs__cellUpdateMessageOptimisedEncoding;

/* SysInfoType5-vb50ext-IEs */
typedef struct SysInfoType5_vb50ext_IEs {
	BOOLEAN_t	 sib22indicator;
	long	*cellUpdateMessageOptimisedEncoding	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType5_vb50ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cellUpdateMessageOptimisedEncoding_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType5_vb50ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SysInfoType5_vb50ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SysInfoType5_vb50ext_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType5_vb50ext_IEs_H_ */
#include <asn_internal.h>
