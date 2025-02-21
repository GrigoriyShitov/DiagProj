/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InitialDirectTransfer_H_
#define	_InitialDirectTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CN-DomainIdentity.h"
#include "IntraDomainNasNodeSelector.h"
#include "NAS-Message.h"
#include "InitialDirectTransfer-v3a0ext.h"
#include <BIT_STRING.h>
#include "InitialDirectTransfer-v590ext.h"
#include "InitialDirectTransfer-v690ext-IEs.h"
#include "InitialDirectTransfer-v770ext-IEs.h"
#include "InitialDirectTransfer-v860ext-IEs.h"
#include "InitialDirectTransfer-vb50ext-IEs.h"
#include "InitialDirectTransfer-vc50ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasuredResultsOnRACH;
struct InitialDirectTransfer_ve30ext_IEs;

/* InitialDirectTransfer */
typedef struct InitialDirectTransfer {
	CN_DomainIdentity_t	 cn_DomainIdentity;
	IntraDomainNasNodeSelector_t	 intraDomainNasNodeSelector;
	NAS_Message_t	 nas_Message;
	struct MeasuredResultsOnRACH	*measuredResultsOnRACH	/* OPTIONAL */;
	struct InitialDirectTransfer__v3a0NonCriticalExtensions {
		InitialDirectTransfer_v3a0ext_t	 initialDirectTransfer_v3a0ext;
		struct InitialDirectTransfer__v3a0NonCriticalExtensions__laterNonCriticalExtensions {
			BIT_STRING_t	*initialDirectTransfer_r3_add_ext	/* OPTIONAL */;
			struct InitialDirectTransfer__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v590NonCriticalExtensions {
				InitialDirectTransfer_v590ext_t	 initialDirectTransfer_v590ext;
				struct InitialDirectTransfer__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions {
					InitialDirectTransfer_v690ext_IEs_t	 initialDirectTransfer_v690ext;
					struct InitialDirectTransfer__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v770NonCriticalExtensions {
						InitialDirectTransfer_v770ext_IEs_t	 initialDirectTransfer_v770ext;
						struct InitialDirectTransfer__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions {
							InitialDirectTransfer_v860ext_IEs_t	 initialDirectTransfer_v860ext;
							struct InitialDirectTransfer__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__vb50NonCriticalExtensions {
								InitialDirectTransfer_vb50ext_IEs_t	 initialDirectTransfer_vb50ext;
								struct InitialDirectTransfer__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__vb50NonCriticalExtensions__vc50NonCriticalExtensions {
									InitialDirectTransfer_vc50ext_IEs_t	 initialDirectTransfer_vc50ext;
									struct InitialDirectTransfer_ve30ext_IEs	*ve30NonCriticalExtensions	/* OPTIONAL */;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *vc50NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *vb50NonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v860NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *v770NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *v690NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v590NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *laterNonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v3a0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitialDirectTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitialDirectTransfer;
extern asn_SEQUENCE_specifics_t asn_SPC_InitialDirectTransfer_specs_1;
extern asn_TYPE_member_t asn_MBR_InitialDirectTransfer_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasuredResultsOnRACH.h"
#include "InitialDirectTransfer-ve30ext-IEs.h"

#endif	/* _InitialDirectTransfer_H_ */
#include <asn_internal.h>
