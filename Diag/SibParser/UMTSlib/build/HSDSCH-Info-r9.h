/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HSDSCH_Info_r9_H_
#define	_HSDSCH_Info_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AddOrReconfMAC-dFlow.h"
#include "AddOrReconfMAC-ehs-ReordQ-r9.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HSDSCH_Info_r9__dl_MAC_HeaderType_PR {
	HSDSCH_Info_r9__dl_MAC_HeaderType_PR_NOTHING,	/* No components present */
	HSDSCH_Info_r9__dl_MAC_HeaderType_PR_mac_hs,
	HSDSCH_Info_r9__dl_MAC_HeaderType_PR_mac_ehs
} HSDSCH_Info_r9__dl_MAC_HeaderType_PR;

/* Forward declarations */
struct HARQ_Info_r7;

/* HSDSCH-Info-r9 */
typedef struct HSDSCH_Info_r9 {
	struct HARQ_Info_r7	*harqInfo	/* OPTIONAL */;
	struct HSDSCH_Info_r9__dl_MAC_HeaderType {
		HSDSCH_Info_r9__dl_MAC_HeaderType_PR present;
		union HSDSCH_Info_r9__dl_MAC_HeaderType_u {
			AddOrReconfMAC_dFlow_t	 mac_hs;
			AddOrReconfMAC_ehs_ReordQ_r9_t	 mac_ehs;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dl_MAC_HeaderType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HSDSCH_Info_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HSDSCH_Info_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_HSDSCH_Info_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_HSDSCH_Info_r9_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "HARQ-Info-r7.h"

#endif	/* _HSDSCH_Info_r9_H_ */
#include <asn_internal.h>
