/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RF_Capability_r4_H_
#define	_RF_Capability_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-PowerClassExt.h"
#include "TxRxFrequencySeparation.h"
#include <constr_SEQUENCE.h>
#include "RadioFrequencyBandTDDList.h"
#include "ChipRateCapability.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RF-Capability-r4 */
typedef struct RF_Capability_r4 {
	struct RF_Capability_r4__fddRF_Capability {
		UE_PowerClassExt_t	 ue_PowerClass;
		TxRxFrequencySeparation_t	 txRxFrequencySeparation;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *fddRF_Capability;
	struct RF_Capability_r4__tdd384_RF_Capability {
		UE_PowerClassExt_t	 ue_PowerClass;
		RadioFrequencyBandTDDList_t	 radioFrequencyBandTDDList;
		ChipRateCapability_t	 chipRateCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tdd384_RF_Capability;
	struct RF_Capability_r4__tdd128_RF_Capability {
		UE_PowerClassExt_t	 ue_PowerClass;
		RadioFrequencyBandTDDList_t	 radioFrequencyBandTDDList;
		ChipRateCapability_t	 chipRateCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tdd128_RF_Capability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Capability_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Capability_r4;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Capability_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Capability_r4_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_Capability_r4_H_ */
#include <asn_internal.h>
