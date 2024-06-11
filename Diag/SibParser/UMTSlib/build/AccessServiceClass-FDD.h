/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_AccessServiceClass_FDD_H_
#define	_AccessServiceClass_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccessServiceClass_FDD__assignedSubChannelNumber {
	AccessServiceClass_FDD__assignedSubChannelNumber_b3	= 0,
	AccessServiceClass_FDD__assignedSubChannelNumber_b2	= 1,
	AccessServiceClass_FDD__assignedSubChannelNumber_b1	= 2,
	AccessServiceClass_FDD__assignedSubChannelNumber_b0	= 3
} e_AccessServiceClass_FDD__assignedSubChannelNumber;

/* AccessServiceClass-FDD */
typedef struct AccessServiceClass_FDD {
	long	 availableSignatureStartIndex;
	long	 availableSignatureEndIndex;
	BIT_STRING_t	 assignedSubChannelNumber;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AccessServiceClass_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccessServiceClass_FDD;
extern asn_SEQUENCE_specifics_t asn_SPC_AccessServiceClass_FDD_specs_1;
extern asn_TYPE_member_t asn_MBR_AccessServiceClass_FDD_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _AccessServiceClass_FDD_H_ */
#include <asn_internal.h>
