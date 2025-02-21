/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HandoverToUTRANCommand_H_
#define	_HandoverToUTRANCommand_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HandoverToUTRANCommand-r3-IEs.h"
#include <constr_SEQUENCE.h>
#include "HandoverToUTRANCommand-r4-IEs.h"
#include "HandoverToUTRANCommand-r5-IEs.h"
#include "HandoverToUTRANCommand-r6-IEs.h"
#include "HandoverToUTRANCommand-v6b0ext-IEs.h"
#include "HandoverToUTRANCommand-r7-IEs.h"
#include "HandoverToUTRANCommand-v780ext-IEs.h"
#include "HandoverToUTRANCommand-v820ext-IEs.h"
#include "HandoverToUTRANCommand-v7d0ext-IEs.h"
#include "HandoverToUTRANCommand-r8-IEs.h"
#include "HandoverToUTRANCommand-v890ext-IEs.h"
#include "HandoverToUTRANCommand-v8a0ext-IEs.h"
#include "HandoverToUTRANCommand-LaterCriticalExtensions.h"
#include "HandoverToUTRANCommand-r9-IEs.h"
#include "HandoverToUTRANCommand-v9c0ext-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverToUTRANCommand_PR {
	HandoverToUTRANCommand_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand_PR_r3,
	HandoverToUTRANCommand_PR_criticalExtensions
} HandoverToUTRANCommand_PR;
typedef enum HandoverToUTRANCommand__criticalExtensions_PR {
	HandoverToUTRANCommand__criticalExtensions_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand__criticalExtensions_PR_r4,
	HandoverToUTRANCommand__criticalExtensions_PR_criticalExtensions
} HandoverToUTRANCommand__criticalExtensions_PR;
typedef enum HandoverToUTRANCommand__criticalExtensions__criticalExtensions_PR {
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions_PR_r5,
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions_PR_criticalExtensions
} HandoverToUTRANCommand__criticalExtensions__criticalExtensions_PR;
typedef enum HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions_PR_r6,
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r7,
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r8,
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r9,
	HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;

/* HandoverToUTRANCommand */
typedef struct HandoverToUTRANCommand {
	HandoverToUTRANCommand_PR present;
	union HandoverToUTRANCommand_u {
		struct HandoverToUTRANCommand__r3 {
			HandoverToUTRANCommand_r3_IEs_t	 handoverToUTRANCommand_r3;
			struct HandoverToUTRANCommand__r3__nonCriticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct HandoverToUTRANCommand__criticalExtensions {
			HandoverToUTRANCommand__criticalExtensions_PR present;
			union HandoverToUTRANCommand__criticalExtensions_u {
				struct HandoverToUTRANCommand__criticalExtensions__r4 {
					HandoverToUTRANCommand_r4_IEs_t	 handoverToUTRANCommand_r4;
					struct HandoverToUTRANCommand__criticalExtensions__r4__nonCriticalExtensions {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *nonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} r4;
				struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions {
					HandoverToUTRANCommand__criticalExtensions__criticalExtensions_PR present;
					union HandoverToUTRANCommand__criticalExtensions__criticalExtensions_u {
						struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__r5 {
							HandoverToUTRANCommand_r5_IEs_t	 handoverToUTRANCommand_r5;
							struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__r5__nonCriticalExtensions {
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *nonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} r5;
						struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions {
							HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
							union HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions_u {
								struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__r6 {
									HandoverToUTRANCommand_r6_IEs_t	 handoverToUTRANCommand_r6;
									struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__r6__v6b0NonCriticalExtensions {
										HandoverToUTRANCommand_v6b0ext_IEs_t	 handoverToUTRANCommand_v6b0ext;
										struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__r6__v6b0NonCriticalExtensions__nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v6b0NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} r6;
								struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
									HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
									union HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
										struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7 {
											HandoverToUTRANCommand_r7_IEs_t	 handoverToUTRANCommand_r7;
											struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions {
												HandoverToUTRANCommand_v780ext_IEs_t	 handoverToUTRANCommand_v780ext;
												struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions__v820NonCriticalExtensions {
													HandoverToUTRANCommand_v820ext_IEs_t	 handoverToUTRANCommand_v820ext;
													struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions__v820NonCriticalExtensions__v7d0NonCriticalExtensions {
														HandoverToUTRANCommand_v7d0ext_IEs_t	 handoverToUTRANCommand_v7d0ext;
														struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions__v820NonCriticalExtensions__v7d0NonCriticalExtensions__nonCriticalExtensions {
															
															/* Context for parsing across buffer boundaries */
															asn_struct_ctx_t _asn_ctx;
														} *nonCriticalExtensions;
														
														/* Context for parsing across buffer boundaries */
														asn_struct_ctx_t _asn_ctx;
													} *v7d0NonCriticalExtensions;
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} *v820NonCriticalExtensions;
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} *v780NonCriticalExtensions;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} r7;
										struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
											HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
											union HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
												struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8 {
													HandoverToUTRANCommand_r8_IEs_t	 handoverToUTRANCommand_r8;
													struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions {
														HandoverToUTRANCommand_v7d0ext_IEs_t	 handoverToUTRANCommand_v7d0ext;
														struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v890NonCriticalExtensions {
															HandoverToUTRANCommand_v890ext_IEs_t	 handoverToUTRANCommand_v890ext;
															struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v890NonCriticalExtensions__v8a0NonCriticalExtensions {
																HandoverToUTRANCommand_v8a0ext_IEs_t	 handoverToUTRANCommand_v8a0ext;
																struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v890NonCriticalExtensions__v8a0NonCriticalExtensions__nonCriticalExtensions {
																	
																	/* Context for parsing across buffer boundaries */
																	asn_struct_ctx_t _asn_ctx;
																} *nonCriticalExtensions;
																
																/* Context for parsing across buffer boundaries */
																asn_struct_ctx_t _asn_ctx;
															} *v8a0NonCriticalExtensions;
															
															/* Context for parsing across buffer boundaries */
															asn_struct_ctx_t _asn_ctx;
														} *v890NonCriticalExtensions;
														
														/* Context for parsing across buffer boundaries */
														asn_struct_ctx_t _asn_ctx;
													} *v7d0NonCriticalExtensions;
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} r8;
												struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
													HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
													union HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
														struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9 {
															HandoverToUTRANCommand_r9_IEs_t	 handoverToUTRANCommand_r9;
															struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9__v9c0NonCriticalExtensions {
																HandoverToUTRANCommand_v9c0ext_IEs_t	 handoverToUTRANCommand_v9c0ext;
																struct HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9__v9c0NonCriticalExtensions__nonCriticalExtensions {
																	
																	/* Context for parsing across buffer boundaries */
																	asn_struct_ctx_t _asn_ctx;
																} *nonCriticalExtensions;
																
																/* Context for parsing across buffer boundaries */
																asn_struct_ctx_t _asn_ctx;
															} *v9c0NonCriticalExtensions;
															
															/* Context for parsing across buffer boundaries */
															asn_struct_ctx_t _asn_ctx;
														} r9;
														HandoverToUTRANCommand_LaterCriticalExtensions_t	 criticalExtensions;
													} choice;
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} criticalExtensions;
											} choice;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} criticalExtensions;
									} choice;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} criticalExtensions;
							} choice;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} criticalExtensions;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} criticalExtensions;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} criticalExtensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverToUTRANCommand_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverToUTRANCommand;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverToUTRANCommand_H_ */
#include <asn_internal.h>
