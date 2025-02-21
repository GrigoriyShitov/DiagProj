/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CGI_InfoNR_r15_H_
#define	_CGI_InfoNR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_IdentityInfoListNR_r15;
struct MultiFrequencyBandListNR_r15;
struct PLMN_IdentityInfoListNR_v1710;

/* CGI-InfoNR-r15 */
typedef struct CGI_InfoNR_r15 {
	struct PLMN_IdentityInfoListNR_r15	*plmn_IdentityInfoList_r15	/* OPTIONAL */;
	struct MultiFrequencyBandListNR_r15	*frequencyBandList_r15	/* OPTIONAL */;
	struct CGI_InfoNR_r15__noSIB1_r15 {
		long	 ssb_SubcarrierOffset_r15;
		long	 pdcch_ConfigSIB1_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *noSIB1_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PLMN_IdentityInfoListNR_v1710	*plmn_IdentityInfoList_v1710	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CGI_InfoNR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CGI_InfoNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_CGI_InfoNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_CGI_InfoNR_r15_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-IdentityInfoListNR-r15.h"
#include "MultiFrequencyBandListNR-r15.h"
#include "PLMN-IdentityInfoListNR-v1710.h"

#endif	/* _CGI_InfoNR_r15_H_ */
#include <asn_internal.h>
