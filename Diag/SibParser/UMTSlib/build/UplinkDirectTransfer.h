/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UplinkDirectTransfer_H_
#define	_UplinkDirectTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CN-DomainIdentity.h"
#include "NAS-Message.h"
#include <BIT_STRING.h>
#include "UplinkDirectTransfer-v690ext-IEs.h"
#include "UplinkDirectTransfer-v7g0ext-IEs.h"
#include "UplinkDirectTransfer-vb50ext-IEs.h"
#include "UplinkDirectTransfer-vc50ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasuredResultsOnRACH;

/* UplinkDirectTransfer */
typedef struct UplinkDirectTransfer {
	CN_DomainIdentity_t	 cn_DomainIdentity;
	NAS_Message_t	 nas_Message;
	struct MeasuredResultsOnRACH	*measuredResultsOnRACH	/* OPTIONAL */;
	struct UplinkDirectTransfer__laterNonCriticalExtensions {
		BIT_STRING_t	*uplinkDirectTransfer_r3_add_ext	/* OPTIONAL */;
		struct UplinkDirectTransfer__laterNonCriticalExtensions__v690NonCriticalExtensions {
			UplinkDirectTransfer_v690ext_IEs_t	 uplinkDirectTransfer_v690ext;
			struct UplinkDirectTransfer__laterNonCriticalExtensions__v690NonCriticalExtensions__v7g0NonCriticalExtensions {
				UplinkDirectTransfer_v7g0ext_IEs_t	 uplinkDirectTransfer_v7g0ext;
				struct UplinkDirectTransfer__laterNonCriticalExtensions__v690NonCriticalExtensions__v7g0NonCriticalExtensions__vb50NonCriticalExtensions {
					UplinkDirectTransfer_vb50ext_IEs_t	 uplinkDirectTransfer_vb50ext;
					struct UplinkDirectTransfer__laterNonCriticalExtensions__v690NonCriticalExtensions__v7g0NonCriticalExtensions__vb50NonCriticalExtensions__vc50NonCriticalExtensions {
						UplinkDirectTransfer_vc50ext_IEs_t	 uplinkDirectTransfer_vc50ext;
						struct UplinkDirectTransfer__laterNonCriticalExtensions__v690NonCriticalExtensions__v7g0NonCriticalExtensions__vb50NonCriticalExtensions__vc50NonCriticalExtensions__nonCriticalExtensions {
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *nonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *vc50NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *vb50NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v7g0NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v690NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkDirectTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkDirectTransfer;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkDirectTransfer_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkDirectTransfer_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasuredResultsOnRACH.h"

#endif	/* _UplinkDirectTransfer_H_ */
#include <asn_internal.h>
