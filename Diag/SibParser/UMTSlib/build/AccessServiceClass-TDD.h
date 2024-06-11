/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_AccessServiceClass_TDD_H_
#define	_AccessServiceClass_TDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccessServiceClass_TDD__channelisationCodeIndices {
	AccessServiceClass_TDD__channelisationCodeIndices_chCodeIndex7	= 0,
	AccessServiceClass_TDD__channelisationCodeIndices_chCodeIndex6	= 1,
	AccessServiceClass_TDD__channelisationCodeIndices_chCodeIndex5	= 2,
	AccessServiceClass_TDD__channelisationCodeIndices_chCodeIndex4	= 3,
	AccessServiceClass_TDD__channelisationCodeIndices_chCodeIndex3	= 4,
	AccessServiceClass_TDD__channelisationCodeIndices_chCodeIndex2	= 5,
	AccessServiceClass_TDD__channelisationCodeIndices_chCodeIndex1	= 6,
	AccessServiceClass_TDD__channelisationCodeIndices_chCodeIndex0	= 7
} e_AccessServiceClass_TDD__channelisationCodeIndices;
typedef enum AccessServiceClass_TDD__subchannelSize_PR {
	AccessServiceClass_TDD__subchannelSize_PR_NOTHING,	/* No components present */
	AccessServiceClass_TDD__subchannelSize_PR_size1,
	AccessServiceClass_TDD__subchannelSize_PR_size2,
	AccessServiceClass_TDD__subchannelSize_PR_size4,
	AccessServiceClass_TDD__subchannelSize_PR_size8
} AccessServiceClass_TDD__subchannelSize_PR;
typedef enum AccessServiceClass_TDD__subchannelSize__size2__subchannels {
	AccessServiceClass_TDD__subchannelSize__size2__subchannels_subch0	= 0,
	AccessServiceClass_TDD__subchannelSize__size2__subchannels_subch1	= 1
} e_AccessServiceClass_TDD__subchannelSize__size2__subchannels;
typedef enum AccessServiceClass_TDD__subchannelSize__size4__subchannels {
	AccessServiceClass_TDD__subchannelSize__size4__subchannels_subCh3	= 0,
	AccessServiceClass_TDD__subchannelSize__size4__subchannels_subCh2	= 1,
	AccessServiceClass_TDD__subchannelSize__size4__subchannels_subCh1	= 2,
	AccessServiceClass_TDD__subchannelSize__size4__subchannels_subCh0	= 3
} e_AccessServiceClass_TDD__subchannelSize__size4__subchannels;
typedef enum AccessServiceClass_TDD__subchannelSize__size8__subchannels {
	AccessServiceClass_TDD__subchannelSize__size8__subchannels_subCh7	= 0,
	AccessServiceClass_TDD__subchannelSize__size8__subchannels_subCh6	= 1,
	AccessServiceClass_TDD__subchannelSize__size8__subchannels_subCh5	= 2,
	AccessServiceClass_TDD__subchannelSize__size8__subchannels_subCh4	= 3,
	AccessServiceClass_TDD__subchannelSize__size8__subchannels_subCh3	= 4,
	AccessServiceClass_TDD__subchannelSize__size8__subchannels_subCh2	= 5,
	AccessServiceClass_TDD__subchannelSize__size8__subchannels_subCh1	= 6,
	AccessServiceClass_TDD__subchannelSize__size8__subchannels_subCh0	= 7
} e_AccessServiceClass_TDD__subchannelSize__size8__subchannels;

/* AccessServiceClass-TDD */
typedef struct AccessServiceClass_TDD {
	BIT_STRING_t	*channelisationCodeIndices	/* OPTIONAL */;
	struct AccessServiceClass_TDD__subchannelSize {
		AccessServiceClass_TDD__subchannelSize_PR present;
		union AccessServiceClass_TDD__subchannelSize_u {
			NULL_t	 size1;
			struct AccessServiceClass_TDD__subchannelSize__size2 {
				long	*subchannels	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} size2;
			struct AccessServiceClass_TDD__subchannelSize__size4 {
				BIT_STRING_t	*subchannels	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} size4;
			struct AccessServiceClass_TDD__subchannelSize__size8 {
				BIT_STRING_t	*subchannels	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} size8;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} subchannelSize;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AccessServiceClass_TDD_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_subchannels_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AccessServiceClass_TDD;
extern asn_SEQUENCE_specifics_t asn_SPC_AccessServiceClass_TDD_specs_1;
extern asn_TYPE_member_t asn_MBR_AccessServiceClass_TDD_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _AccessServiceClass_TDD_H_ */
#include <asn_internal.h>
