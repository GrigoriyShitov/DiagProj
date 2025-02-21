/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HARQ_Info_H_
#define	_HARQ_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NULL.h>
#include "HARQMemorySize.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HARQ_Info__memoryPartitioning_PR {
	HARQ_Info__memoryPartitioning_PR_NOTHING,	/* No components present */
	HARQ_Info__memoryPartitioning_PR_implicit,
	HARQ_Info__memoryPartitioning_PR_explicit
} HARQ_Info__memoryPartitioning_PR;

/* HARQ-Info */
typedef struct HARQ_Info {
	long	 numberOfProcesses;
	struct HARQ_Info__memoryPartitioning {
		HARQ_Info__memoryPartitioning_PR present;
		union HARQ_Info__memoryPartitioning_u {
			NULL_t	 implicit;
			struct HARQ_Info__memoryPartitioning__explicit {
				A_SEQUENCE_OF(HARQMemorySize_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} Explicit;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} memoryPartitioning;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HARQ_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HARQ_Info;
extern asn_SEQUENCE_specifics_t asn_SPC_HARQ_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_HARQ_Info_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HARQ_Info_H_ */
#include <asn_internal.h>
