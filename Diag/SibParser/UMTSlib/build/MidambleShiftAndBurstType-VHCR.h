/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_MidambleShiftAndBurstType_VHCR_H_
#define	_MidambleShiftAndBurstType_VHCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MidambleConfigurationBurstType1and3.h"
#include <NULL.h>
#include "MidambleShiftLong.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "MidambleConfigurationBurstType2-VHCR.h"
#include "MidambleShiftShort-VHCR.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MidambleShiftAndBurstType_VHCR__burstType_PR {
	MidambleShiftAndBurstType_VHCR__burstType_PR_NOTHING,	/* No components present */
	MidambleShiftAndBurstType_VHCR__burstType_PR_type1,
	MidambleShiftAndBurstType_VHCR__burstType_PR_type2,
	MidambleShiftAndBurstType_VHCR__burstType_PR_type3
} MidambleShiftAndBurstType_VHCR__burstType_PR;
typedef enum MidambleShiftAndBurstType_VHCR__burstType__type1__midambleAllocationMode_PR {
	MidambleShiftAndBurstType_VHCR__burstType__type1__midambleAllocationMode_PR_NOTHING,	/* No components present */
	MidambleShiftAndBurstType_VHCR__burstType__type1__midambleAllocationMode_PR_defaultMidamble,
	MidambleShiftAndBurstType_VHCR__burstType__type1__midambleAllocationMode_PR_commonMidamble,
	MidambleShiftAndBurstType_VHCR__burstType__type1__midambleAllocationMode_PR_ueSpecificMidamble
} MidambleShiftAndBurstType_VHCR__burstType__type1__midambleAllocationMode_PR;
typedef enum MidambleShiftAndBurstType_VHCR__burstType__type2__midambleAllocationMode_PR {
	MidambleShiftAndBurstType_VHCR__burstType__type2__midambleAllocationMode_PR_NOTHING,	/* No components present */
	MidambleShiftAndBurstType_VHCR__burstType__type2__midambleAllocationMode_PR_defaultMidamble,
	MidambleShiftAndBurstType_VHCR__burstType__type2__midambleAllocationMode_PR_commonMidamble,
	MidambleShiftAndBurstType_VHCR__burstType__type2__midambleAllocationMode_PR_ueSpecificMidamble
} MidambleShiftAndBurstType_VHCR__burstType__type2__midambleAllocationMode_PR;
typedef enum MidambleShiftAndBurstType_VHCR__burstType__type3__midambleAllocationMode_PR {
	MidambleShiftAndBurstType_VHCR__burstType__type3__midambleAllocationMode_PR_NOTHING,	/* No components present */
	MidambleShiftAndBurstType_VHCR__burstType__type3__midambleAllocationMode_PR_defaultMidamble,
	MidambleShiftAndBurstType_VHCR__burstType__type3__midambleAllocationMode_PR_ueSpecificMidamble
} MidambleShiftAndBurstType_VHCR__burstType__type3__midambleAllocationMode_PR;

/* MidambleShiftAndBurstType-VHCR */
typedef struct MidambleShiftAndBurstType_VHCR {
	struct MidambleShiftAndBurstType_VHCR__burstType {
		MidambleShiftAndBurstType_VHCR__burstType_PR present;
		union MidambleShiftAndBurstType_VHCR__burstType_u {
			struct MidambleShiftAndBurstType_VHCR__burstType__type1 {
				MidambleConfigurationBurstType1and3_t	 midambleConfigurationBurstType1and3;
				struct MidambleShiftAndBurstType_VHCR__burstType__type1__midambleAllocationMode {
					MidambleShiftAndBurstType_VHCR__burstType__type1__midambleAllocationMode_PR present;
					union MidambleShiftAndBurstType_VHCR__burstType__type1__midambleAllocationMode_u {
						NULL_t	 defaultMidamble;
						NULL_t	 commonMidamble;
						struct MidambleShiftAndBurstType_VHCR__burstType__type1__midambleAllocationMode__ueSpecificMidamble {
							MidambleShiftLong_t	 midambleShift;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} ueSpecificMidamble;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} midambleAllocationMode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} type1;
			struct MidambleShiftAndBurstType_VHCR__burstType__type2 {
				MidambleConfigurationBurstType2_VHCR_t	 midambleConfigurationBurstType2;
				struct MidambleShiftAndBurstType_VHCR__burstType__type2__midambleAllocationMode {
					MidambleShiftAndBurstType_VHCR__burstType__type2__midambleAllocationMode_PR present;
					union MidambleShiftAndBurstType_VHCR__burstType__type2__midambleAllocationMode_u {
						NULL_t	 defaultMidamble;
						NULL_t	 commonMidamble;
						struct MidambleShiftAndBurstType_VHCR__burstType__type2__midambleAllocationMode__ueSpecificMidamble {
							MidambleShiftShort_VHCR_t	 midambleShift;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} ueSpecificMidamble;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} midambleAllocationMode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} type2;
			struct MidambleShiftAndBurstType_VHCR__burstType__type3 {
				MidambleConfigurationBurstType1and3_t	 midambleConfigurationBurstType1and3;
				struct MidambleShiftAndBurstType_VHCR__burstType__type3__midambleAllocationMode {
					MidambleShiftAndBurstType_VHCR__burstType__type3__midambleAllocationMode_PR present;
					union MidambleShiftAndBurstType_VHCR__burstType__type3__midambleAllocationMode_u {
						NULL_t	 defaultMidamble;
						struct MidambleShiftAndBurstType_VHCR__burstType__type3__midambleAllocationMode__ueSpecificMidamble {
							MidambleShiftLong_t	 midambleShift;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} ueSpecificMidamble;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} midambleAllocationMode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} type3;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} burstType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MidambleShiftAndBurstType_VHCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MidambleShiftAndBurstType_VHCR;
extern asn_SEQUENCE_specifics_t asn_SPC_MidambleShiftAndBurstType_VHCR_specs_1;
extern asn_TYPE_member_t asn_MBR_MidambleShiftAndBurstType_VHCR_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MidambleShiftAndBurstType_VHCR_H_ */
#include <asn_internal.h>
