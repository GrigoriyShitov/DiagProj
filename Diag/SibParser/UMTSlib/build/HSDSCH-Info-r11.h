/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HSDSCH_Info_r11_H_
#define	_HSDSCH_Info_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AddOrReconfMAC-dFlow.h"
#include "AddOrReconfMAC-ehs-ReordQ-r11.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HSDSCH_Info_r11__dl_MAC_HeaderType_PR {
	HSDSCH_Info_r11__dl_MAC_HeaderType_PR_NOTHING,	/* No components present */
	HSDSCH_Info_r11__dl_MAC_HeaderType_PR_mac_hs,
	HSDSCH_Info_r11__dl_MAC_HeaderType_PR_mac_ehs
} HSDSCH_Info_r11__dl_MAC_HeaderType_PR;

/* Forward declarations */
struct HARQ_Info_r11;

/* HSDSCH-Info-r11 */
typedef struct HSDSCH_Info_r11 {
	struct HARQ_Info_r11	*harqInfo	/* OPTIONAL */;
	struct HSDSCH_Info_r11__dl_MAC_HeaderType {
		HSDSCH_Info_r11__dl_MAC_HeaderType_PR present;
		union HSDSCH_Info_r11__dl_MAC_HeaderType_u {
			AddOrReconfMAC_dFlow_t	 mac_hs;
			AddOrReconfMAC_ehs_ReordQ_r11_t	 mac_ehs;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dl_MAC_HeaderType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HSDSCH_Info_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HSDSCH_Info_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_HSDSCH_Info_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_HSDSCH_Info_r11_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "HARQ-Info-r11.h"

#endif	/* _HSDSCH_Info_r11_H_ */
#include <asn_internal.h>
