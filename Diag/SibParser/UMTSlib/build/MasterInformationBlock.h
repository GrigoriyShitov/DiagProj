/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MasterInformationBlock_H_
#define	_MasterInformationBlock_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MIB-ValueTag.h"
#include "PLMN-Type.h"
#include "SIBSb-ReferenceList.h"
#include "MasterInformationBlock-v690ext.h"
#include "MasterInformationBlock-v6b0ext-IEs.h"
#include "MasterInformationBlock-v860ext-IEs.h"
#include "MasterInformationBlock-vc50ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MasterInformationBlock */
typedef struct MasterInformationBlock {
	MIB_ValueTag_t	 mib_ValueTag;
	PLMN_Type_t	 plmn_Type;
	SIBSb_ReferenceList_t	 sibSb_ReferenceList;
	struct MasterInformationBlock__v690NonCriticalExtensions {
		MasterInformationBlock_v690ext_t	 masterInformationBlock_v690ext;
		struct MasterInformationBlock__v690NonCriticalExtensions__v6b0NonCriticalExtensions {
			MasterInformationBlock_v6b0ext_IEs_t	 masterInformationBlock_v6b0ext;
			struct MasterInformationBlock__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v860NonCriticalExtensions {
				MasterInformationBlock_v860ext_IEs_t	 masterInformationBlock_v860ext;
				struct MasterInformationBlock__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v860NonCriticalExtensions__vc50NonCriticalExtensions {
					MasterInformationBlock_vc50ext_IEs_t	 masterInformationBlock_vc50ext;
					struct MasterInformationBlock__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v860NonCriticalExtensions__vc50NonCriticalExtensions__nonCriticalExtensions {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *nonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *vc50NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v860NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v6b0NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v690NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MasterInformationBlock_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MasterInformationBlock;

#ifdef __cplusplus
}
#endif

#endif	/* _MasterInformationBlock_H_ */
#include <asn_internal.h>
