/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SysInfoType11_H_
#define	_SysInfoType11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "MeasurementControlSysInfo.h"
#include "SysInfoType11-v590ext-IEs.h"
#include "SysInfoType11-v690ext-IEs.h"
#include "SysInfoType11-v6b0ext-IEs.h"
#include "SysInfoType11-v770ext-IEs.h"
#include "SysInfoType11-v7b0ext-IEs.h"
#include "SysInfoType11-v860ext-IEs.h"
#include "SysInfoType11-va80ext-IEs.h"
#include "SysInfoType11-vc50ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FACH_MeasurementOccasionInfo;
struct SysInfoType11_v4b0ext_IEs;

/* SysInfoType11 */
typedef struct SysInfoType11 {
	BOOLEAN_t	 sib12indicator;
	struct FACH_MeasurementOccasionInfo	*fach_MeasurementOccasionInfo	/* OPTIONAL */;
	MeasurementControlSysInfo_t	 measurementControlSysInfo;
	struct SysInfoType11__v4b0NonCriticalExtensions {
		struct SysInfoType11_v4b0ext_IEs	*sysInfoType11_v4b0ext	/* OPTIONAL */;
		struct SysInfoType11__v4b0NonCriticalExtensions__v590NonCriticalExtension {
			SysInfoType11_v590ext_IEs_t	 sysInfoType11_v590ext;
			struct SysInfoType11__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions {
				SysInfoType11_v690ext_IEs_t	 sysInfoType11_v690ext;
				struct SysInfoType11__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions {
					SysInfoType11_v6b0ext_IEs_t	 sysInfoType11_v6b0ext;
					struct SysInfoType11__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions {
						SysInfoType11_v770ext_IEs_t	 sysInfoType11_v770ext;
						struct SysInfoType11__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v7b0NonCriticalExtensions {
							SysInfoType11_v7b0ext_IEs_t	 sysInfoType11_v7b0ext;
							struct SysInfoType11__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v7b0NonCriticalExtensions__v860NonCriticalExtensions {
								SysInfoType11_v860ext_IEs_t	 sysInfoType11_v860ext;
								struct SysInfoType11__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v7b0NonCriticalExtensions__v860NonCriticalExtensions__va80NonCriticalExtensions {
									SysInfoType11_va80ext_IEs_t	 sysInfoType11_va80ext;
									struct SysInfoType11__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v7b0NonCriticalExtensions__v860NonCriticalExtensions__va80NonCriticalExtensions__vc50NonCriticalExtensions {
										SysInfoType11_vc50ext_IEs_t	 sysInfoType11_vc50ext;
										struct SysInfoType11__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v7b0NonCriticalExtensions__v860NonCriticalExtensions__va80NonCriticalExtensions__vc50NonCriticalExtensions__nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *vc50NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *va80NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v860NonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v7b0NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *v770NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *v6b0NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v690NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v590NonCriticalExtension;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v4b0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FACH-MeasurementOccasionInfo.h"
#include "SysInfoType11-v4b0ext-IEs.h"

#endif	/* _SysInfoType11_H_ */
#include <asn_internal.h>
