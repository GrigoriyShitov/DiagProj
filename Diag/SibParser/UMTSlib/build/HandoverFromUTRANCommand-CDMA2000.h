/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HandoverFromUTRANCommand_CDMA2000_H_
#define	_HandoverFromUTRANCommand_CDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HandoverFromUTRANCommand-CDMA2000-r3-IEs.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverFromUTRANCommand_CDMA2000_PR {
	HandoverFromUTRANCommand_CDMA2000_PR_NOTHING,	/* No components present */
	HandoverFromUTRANCommand_CDMA2000_PR_r3,
	HandoverFromUTRANCommand_CDMA2000_PR_later_than_r3
} HandoverFromUTRANCommand_CDMA2000_PR;

/* HandoverFromUTRANCommand-CDMA2000 */
typedef struct HandoverFromUTRANCommand_CDMA2000 {
	HandoverFromUTRANCommand_CDMA2000_PR present;
	union HandoverFromUTRANCommand_CDMA2000_u {
		struct HandoverFromUTRANCommand_CDMA2000__r3 {
			HandoverFromUTRANCommand_CDMA2000_r3_IEs_t	 handoverFromUTRANCommand_CDMA2000_r3;
			struct HandoverFromUTRANCommand_CDMA2000__r3__laterNonCriticalExtensions {
				BIT_STRING_t	*handoverFromUTRANCommand_CDMA2000_r3_add_ext	/* OPTIONAL */;
				struct HandoverFromUTRANCommand_CDMA2000__r3__laterNonCriticalExtensions__nonCriticalExtensions {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *nonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *laterNonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct HandoverFromUTRANCommand_CDMA2000__later_than_r3 {
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct HandoverFromUTRANCommand_CDMA2000__later_than_r3__criticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverFromUTRANCommand_CDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverFromUTRANCommand_CDMA2000;
extern asn_CHOICE_specifics_t asn_SPC_HandoverFromUTRANCommand_CDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverFromUTRANCommand_CDMA2000_1[2];
extern asn_per_constraints_t asn_PER_type_HandoverFromUTRANCommand_CDMA2000_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverFromUTRANCommand_CDMA2000_H_ */
#include <asn_internal.h>
