/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CrossCarrierSchedulingConfig_r13_H_
#define	_CrossCarrierSchedulingConfig_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include "ServCellIndex-r13.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13_PR {
	CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13_PR_NOTHING,	/* No components present */
	CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13_PR_own_r13,
	CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13_PR_other_r13
} CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13_PR;

/* CrossCarrierSchedulingConfig-r13 */
typedef struct CrossCarrierSchedulingConfig_r13 {
	struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13 {
		CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13_PR present;
		union CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13_u {
			struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__own_r13 {
				BOOLEAN_t	 cif_Presence_r13;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} own_r13;
			struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__other_r13 {
				ServCellIndex_r13_t	 schedulingCellId_r13;
				long	 pdsch_Start_r13;
				long	 cif_InSchedulingCell_r13;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} other_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} schedulingCellInfo_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CrossCarrierSchedulingConfig_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CrossCarrierSchedulingConfig_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_CrossCarrierSchedulingConfig_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_CrossCarrierSchedulingConfig_r13_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CrossCarrierSchedulingConfig_r13_H_ */
#include <asn_internal.h>
