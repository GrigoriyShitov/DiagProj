/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UL_TimingAdvanceControl_r7_H_
#define	_UL_TimingAdvanceControl_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "UL-TimingAdvance.h"
#include "ActivationTime.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_TimingAdvanceControl_r7_PR {
	UL_TimingAdvanceControl_r7_PR_NOTHING,	/* No components present */
	UL_TimingAdvanceControl_r7_PR_disabled,
	UL_TimingAdvanceControl_r7_PR_enabled
} UL_TimingAdvanceControl_r7_PR;
typedef enum UL_TimingAdvanceControl_r7__enabled__tddOption_PR {
	UL_TimingAdvanceControl_r7__enabled__tddOption_PR_NOTHING,	/* No components present */
	UL_TimingAdvanceControl_r7__enabled__tddOption_PR_tdd384,
	UL_TimingAdvanceControl_r7__enabled__tddOption_PR_tdd768,
	UL_TimingAdvanceControl_r7__enabled__tddOption_PR_tdd128
} UL_TimingAdvanceControl_r7__enabled__tddOption_PR;

/* Forward declarations */
struct EXT_UL_TimingAdvance;
struct UL_SynchronisationParameters_r4;
struct SynchronisationParameters_r4;

/* UL-TimingAdvanceControl-r7 */
typedef struct UL_TimingAdvanceControl_r7 {
	UL_TimingAdvanceControl_r7_PR present;
	union UL_TimingAdvanceControl_r7_u {
		NULL_t	 disabled;
		struct UL_TimingAdvanceControl_r7__enabled {
			struct UL_TimingAdvanceControl_r7__enabled__tddOption {
				UL_TimingAdvanceControl_r7__enabled__tddOption_PR present;
				union UL_TimingAdvanceControl_r7__enabled__tddOption_u {
					struct UL_TimingAdvanceControl_r7__enabled__tddOption__tdd384 {
						UL_TimingAdvance_t	*ul_TimingAdvance	/* OPTIONAL */;
						struct EXT_UL_TimingAdvance	*ext_UL_TimingAdvance	/* OPTIONAL */;
						ActivationTime_t	*activationTime	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} tdd384;
					struct UL_TimingAdvanceControl_r7__enabled__tddOption__tdd768 {
						struct EXT_UL_TimingAdvance	*ext_UL_TimingAdvance	/* OPTIONAL */;
						ActivationTime_t	*activationTime	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} tdd768;
					struct UL_TimingAdvanceControl_r7__enabled__tddOption__tdd128 {
						struct UL_SynchronisationParameters_r4	*ul_SynchronisationParameters	/* OPTIONAL */;
						struct SynchronisationParameters_r4	*synchronisationParameters	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} tdd128;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tddOption;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} enabled;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_TimingAdvanceControl_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_TimingAdvanceControl_r7;
extern asn_CHOICE_specifics_t asn_SPC_UL_TimingAdvanceControl_r7_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_TimingAdvanceControl_r7_1[2];
extern asn_per_constraints_t asn_PER_type_UL_TimingAdvanceControl_r7_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EXT-UL-TimingAdvance.h"
#include "UL-SynchronisationParameters-r4.h"
#include "SynchronisationParameters-r4.h"

#endif	/* _UL_TimingAdvanceControl_r7_H_ */
#include <asn_internal.h>
