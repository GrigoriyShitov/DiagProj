/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasurementControlSysInfoExtension_H_
#define	_MeasurementControlSysInfoExtension_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementControlSysInfoExtension__use_of_HCS_PR {
	MeasurementControlSysInfoExtension__use_of_HCS_PR_NOTHING,	/* No components present */
	MeasurementControlSysInfoExtension__use_of_HCS_PR_hcs_not_used,
	MeasurementControlSysInfoExtension__use_of_HCS_PR_hcs_used
} MeasurementControlSysInfoExtension__use_of_HCS_PR;
typedef enum MeasurementControlSysInfoExtension__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_PR {
	MeasurementControlSysInfoExtension__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_PR_NOTHING,	/* No components present */
	MeasurementControlSysInfoExtension__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_PR_cpich_RSCP,
	MeasurementControlSysInfoExtension__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_PR_cpich_Ec_N0
} MeasurementControlSysInfoExtension__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_PR;
typedef enum MeasurementControlSysInfoExtension__use_of_HCS__hcs_used__cellSelectQualityMeasure_PR {
	MeasurementControlSysInfoExtension__use_of_HCS__hcs_used__cellSelectQualityMeasure_PR_NOTHING,	/* No components present */
	MeasurementControlSysInfoExtension__use_of_HCS__hcs_used__cellSelectQualityMeasure_PR_cpich_RSCP,
	MeasurementControlSysInfoExtension__use_of_HCS__hcs_used__cellSelectQualityMeasure_PR_cpich_Ec_N0
} MeasurementControlSysInfoExtension__use_of_HCS__hcs_used__cellSelectQualityMeasure_PR;

/* Forward declarations */
struct NewInterRATCellList;
struct NewIntraFreqCellSI_List_RSCP;
struct NewInterFreqCellSI_List_RSCP;
struct NewIntraFreqCellSI_List_ECN0;
struct NewInterFreqCellSI_List_ECN0;
struct NewIntraFreqCellSI_List_HCS_RSCP;
struct NewInterFreqCellSI_List_HCS_RSCP;
struct NewIntraFreqCellSI_List_HCS_ECN0;
struct NewInterFreqCellSI_List_HCS_ECN0;

/* MeasurementControlSysInfoExtension */
typedef struct MeasurementControlSysInfoExtension {
	struct MeasurementControlSysInfoExtension__use_of_HCS {
		MeasurementControlSysInfoExtension__use_of_HCS_PR present;
		union MeasurementControlSysInfoExtension__use_of_HCS_u {
			struct MeasurementControlSysInfoExtension__use_of_HCS__hcs_not_used {
				struct MeasurementControlSysInfoExtension__use_of_HCS__hcs_not_used__cellSelectQualityMeasure {
					MeasurementControlSysInfoExtension__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_PR present;
					union MeasurementControlSysInfoExtension__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_u {
						struct MeasurementControlSysInfoExtension__use_of_HCS__hcs_not_used__cellSelectQualityMeasure__cpich_RSCP {
							struct NewIntraFreqCellSI_List_RSCP	*newIntraFreqCellList	/* OPTIONAL */;
							struct NewInterFreqCellSI_List_RSCP	*newInterFreqCellList	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} cpich_RSCP;
						struct MeasurementControlSysInfoExtension__use_of_HCS__hcs_not_used__cellSelectQualityMeasure__cpich_Ec_N0 {
							struct NewIntraFreqCellSI_List_ECN0	*newIntraFreqCellList	/* OPTIONAL */;
							struct NewInterFreqCellSI_List_ECN0	*newInterFreqCellList	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} cpich_Ec_N0;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} cellSelectQualityMeasure;
				struct NewInterRATCellList	*newInterRATCellList	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} hcs_not_used;
			struct MeasurementControlSysInfoExtension__use_of_HCS__hcs_used {
				struct MeasurementControlSysInfoExtension__use_of_HCS__hcs_used__cellSelectQualityMeasure {
					MeasurementControlSysInfoExtension__use_of_HCS__hcs_used__cellSelectQualityMeasure_PR present;
					union MeasurementControlSysInfoExtension__use_of_HCS__hcs_used__cellSelectQualityMeasure_u {
						struct MeasurementControlSysInfoExtension__use_of_HCS__hcs_used__cellSelectQualityMeasure__cpich_RSCP {
							struct NewIntraFreqCellSI_List_HCS_RSCP	*newIntraFreqCellList	/* OPTIONAL */;
							struct NewInterFreqCellSI_List_HCS_RSCP	*newInterFreqCellList	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} cpich_RSCP;
						struct MeasurementControlSysInfoExtension__use_of_HCS__hcs_used__cellSelectQualityMeasure__cpich_Ec_N0 {
							struct NewIntraFreqCellSI_List_HCS_ECN0	*newIntraFreqCellList	/* OPTIONAL */;
							struct NewInterFreqCellSI_List_HCS_ECN0	*newInterFreqCellList	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} cpich_Ec_N0;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} cellSelectQualityMeasure;
				struct NewInterRATCellList	*newInterRATCellList	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} hcs_used;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} use_of_HCS;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementControlSysInfoExtension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementControlSysInfoExtension;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementControlSysInfoExtension_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementControlSysInfoExtension_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NewInterRATCellList.h"
#include "NewIntraFreqCellSI-List-RSCP.h"
#include "NewInterFreqCellSI-List-RSCP.h"
#include "NewIntraFreqCellSI-List-ECN0.h"
#include "NewInterFreqCellSI-List-ECN0.h"
#include "NewIntraFreqCellSI-List-HCS-RSCP.h"
#include "NewInterFreqCellSI-List-HCS-RSCP.h"
#include "NewIntraFreqCellSI-List-HCS-ECN0.h"
#include "NewInterFreqCellSI-List-HCS-ECN0.h"

#endif	/* _MeasurementControlSysInfoExtension_H_ */
#include <asn_internal.h>
