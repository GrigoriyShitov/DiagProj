/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CellSynchronisationInfo_H_
#define	_CellSynchronisationInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellSynchronisationInfo__modeSpecificInfo_PR {
	CellSynchronisationInfo__modeSpecificInfo_PR_NOTHING,	/* No components present */
	CellSynchronisationInfo__modeSpecificInfo_PR_fdd,
	CellSynchronisationInfo__modeSpecificInfo_PR_tdd
} CellSynchronisationInfo__modeSpecificInfo_PR;

/* Forward declarations */
struct CountC_SFN_Frame_difference;

/* CellSynchronisationInfo */
typedef struct CellSynchronisationInfo {
	struct CellSynchronisationInfo__modeSpecificInfo {
		CellSynchronisationInfo__modeSpecificInfo_PR present;
		union CellSynchronisationInfo__modeSpecificInfo_u {
			struct CellSynchronisationInfo__modeSpecificInfo__fdd {
				struct CountC_SFN_Frame_difference	*countC_SFN_Frame_difference	/* OPTIONAL */;
				long	 tm;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct CellSynchronisationInfo__modeSpecificInfo__tdd {
				struct CountC_SFN_Frame_difference	*countC_SFN_Frame_difference	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellSynchronisationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellSynchronisationInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_CellSynchronisationInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_CellSynchronisationInfo_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CountC-SFN-Frame-difference.h"

#endif	/* _CellSynchronisationInfo_H_ */
#include <asn_internal.h>
