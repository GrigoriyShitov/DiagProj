/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RadioBearerRelease_H_
#define	_RadioBearerRelease_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioBearerRelease-r3-IEs.h"
#include "RadioBearerRelease-v3a0ext.h"
#include <BIT_STRING.h>
#include "RadioBearerRelease-v4b0ext-IEs.h"
#include "RadioBearerRelease-v590ext-IEs.h"
#include "RadioBearerRelease-v690ext-IEs.h"
#include "RadioBearerRelease-v770ext-IEs.h"
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include "RadioBearerRelease-r4-IEs.h"
#include "RadioBearerRelease-r5-IEs.h"
#include "RadioBearerRelease-r6-IEs.h"
#include "RadioBearerRelease-v6b0ext-IEs.h"
#include "RadioBearerRelease-r7-IEs.h"
#include "RadioBearerRelease-v780ext-IEs.h"
#include "RadioBearerRelease-v7d0ext-IEs.h"
#include "RadioBearerRelease-v7f0ext-IEs.h"
#include "RadioBearerRelease-v7g0ext-IEs.h"
#include "RadioBearerRelease-r8-IEs.h"
#include "RadioBearerRelease-v890ext-IEs.h"
#include "RadioBearerRelease-v8a0ext-IEs.h"
#include "RadioBearerRelease-r9-IEs.h"
#include "RadioBearerRelease-v950ext-IEs.h"
#include "RadioBearerRelease-v970ext-IEs.h"
#include "RadioBearerRelease-v9c0ext-IEs.h"
#include "RadioBearerRelease-r10-IEs.h"
#include "RadioBearerRelease-vb50ext-IEs.h"
#include "RadioBearerRelease-r11-IEs.h"
#include "RadioBearerRelease-r12-IEs.h"
#include "RadioBearerRelease-LaterCriticalExtensions-r15-IEs.h"
#include "RadioBearerRelease-r13-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioBearerRelease_PR {
	RadioBearerRelease_PR_NOTHING,	/* No components present */
	RadioBearerRelease_PR_r3,
	RadioBearerRelease_PR_later_than_r3
} RadioBearerRelease_PR;
typedef enum RadioBearerRelease__later_than_r3__criticalExtensions_PR {
	RadioBearerRelease__later_than_r3__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerRelease__later_than_r3__criticalExtensions_PR_r4,
	RadioBearerRelease__later_than_r3__criticalExtensions_PR_criticalExtensions
} RadioBearerRelease__later_than_r3__criticalExtensions_PR;
typedef enum RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions_PR {
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions_PR_r5,
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_PR_r6,
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r7,
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r8,
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r9,
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r10,
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r11,
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r12,
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r13,
	RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_laterCriticalExtensions
} RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;

/* RadioBearerRelease */
typedef struct RadioBearerRelease {
	RadioBearerRelease_PR present;
	union RadioBearerRelease_u {
		struct RadioBearerRelease__r3 {
			RadioBearerRelease_r3_IEs_t	 radioBearerRelease_r3;
			struct RadioBearerRelease__r3__v3a0NonCriticalExtensions {
				RadioBearerRelease_v3a0ext_t	 radioBearerRelease_v3a0ext;
				struct RadioBearerRelease__r3__v3a0NonCriticalExtensions__laterNonCriticalExtensions {
					BIT_STRING_t	*radioBearerRelease_r3_add_ext	/* OPTIONAL */;
					struct RadioBearerRelease__r3__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions {
						RadioBearerRelease_v4b0ext_IEs_t	 radioBearerRelease_v4b0ext;
						struct RadioBearerRelease__r3__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions__v590NonCriticalExtensions {
							RadioBearerRelease_v590ext_IEs_t	 radioBearerRelease_v590ext;
							struct RadioBearerRelease__r3__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions {
								RadioBearerRelease_v690ext_IEs_t	 radioBearerRelease_v690ext;
								struct RadioBearerRelease__r3__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v770NonCriticalExtensions {
									RadioBearerRelease_v770ext_IEs_t	 radioBearerRelease_v770ext;
									struct RadioBearerRelease__r3__v3a0NonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions {
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *nonCriticalExtensions;
									
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
					} *v4b0NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *laterNonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v3a0NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct RadioBearerRelease__later_than_r3 {
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct RadioBearerRelease__later_than_r3__criticalExtensions {
				RadioBearerRelease__later_than_r3__criticalExtensions_PR present;
				union RadioBearerRelease__later_than_r3__criticalExtensions_u {
					struct RadioBearerRelease__later_than_r3__criticalExtensions__r4 {
						RadioBearerRelease_r4_IEs_t	 radioBearerRelease_r4;
						struct RadioBearerRelease__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions {
							BIT_STRING_t	*radioBearerRelease_r4_add_ext	/* OPTIONAL */;
							struct RadioBearerRelease__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions__v590NonCriticalExtensions {
								RadioBearerRelease_v590ext_IEs_t	 radioBearerRelease_v590ext;
								struct RadioBearerRelease__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions {
									RadioBearerRelease_v690ext_IEs_t	 radioBearerRelease_v690ext;
									struct RadioBearerRelease__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v770NonCriticalExtensions {
										RadioBearerRelease_v770ext_IEs_t	 radioBearerRelease_v770ext;
										struct RadioBearerRelease__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
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
						} *v4d0NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} r4;
					struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions {
						RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions_PR present;
						union RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions_u {
							struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__r5 {
								RadioBearerRelease_r5_IEs_t	 radioBearerRelease_r5;
								BIT_STRING_t	*radioBearerRelease_r5_add_ext	/* OPTIONAL */;
								struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__r5__v690NonCriticalExtensions {
									RadioBearerRelease_v690ext_IEs_t	 radioBearerRelease_v690ext;
									struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__r5__v690NonCriticalExtensions__v770NonCriticalExtensions {
										RadioBearerRelease_v770ext_IEs_t	 radioBearerRelease_v770ext;
										struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__r5__v690NonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v770NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v690NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} r5;
							struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions {
								RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
								union RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_u {
									struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__r6 {
										RadioBearerRelease_r6_IEs_t	 radioBearerRelease_r6;
										BIT_STRING_t	*radioBearerRelease_r6_add_ext	/* OPTIONAL */;
										struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__r6__v6b0NonCriticalExtensions {
											RadioBearerRelease_v6b0ext_IEs_t	 radioBearerRelease_v6b0ext;
											struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__r6__v6b0NonCriticalExtensions__v770NonCriticalExtensions {
												RadioBearerRelease_v770ext_IEs_t	 radioBearerRelease_v770ext;
												struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__r6__v6b0NonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions {
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} *nonCriticalExtensions;
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} *v770NonCriticalExtensions;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *v6b0NonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} r6;
									struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
										RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
										union RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
											struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7 {
												RadioBearerRelease_r7_IEs_t	 radioBearerRelease_r7;
												BIT_STRING_t	*radioBearerRelease_r7_add_ext	/* OPTIONAL */;
												struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions {
													RadioBearerRelease_v780ext_IEs_t	 radioBearerRelease_v780ext;
													struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions__v7d0NonCriticalExtensions {
														RadioBearerRelease_v7d0ext_IEs_t	 radioBearerRelease_v7d0ext;
														struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions {
															RadioBearerRelease_v7f0ext_IEs_t	 radioBearerRelease_v7f0ext;
															struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions__v7g0NonCriticalExtensions {
																RadioBearerRelease_v7g0ext_IEs_t	 radioBearerRelease_v7g0ext;
																struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions__v7g0NonCriticalExtensions__nonCriticalExtensions {
																	
																	/* Context for parsing across buffer boundaries */
																	asn_struct_ctx_t _asn_ctx;
																} *nonCriticalExtensions;
																
																/* Context for parsing across buffer boundaries */
																asn_struct_ctx_t _asn_ctx;
															} *v7g0NonCriticalExtensions;
															
															/* Context for parsing across buffer boundaries */
															asn_struct_ctx_t _asn_ctx;
														} *v7f0NonCriticalExtensions;
														
														/* Context for parsing across buffer boundaries */
														asn_struct_ctx_t _asn_ctx;
													} *v7d0NonCriticalExtensions;
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} *v780NonCriticalExtensions;
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} r7;
											struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
												RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
												union RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
													struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8 {
														RadioBearerRelease_r8_IEs_t	 radioBearerRelease_r8;
														BIT_STRING_t	*radioBearerRelease_r8_add_ext	/* OPTIONAL */;
														struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions {
															RadioBearerRelease_v7d0ext_IEs_t	 radioBearerRelease_v7d0ext;
															struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions {
																RadioBearerRelease_v7f0ext_IEs_t	 radioBearerRelease_v7f0ext;
																struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions__v890NonCriticalExtensions {
																	RadioBearerRelease_v890ext_IEs_t	 radioBearerRelease_v890ext;
																	struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions__v890NonCriticalExtensions__v7g0NonCriticalExtensions {
																		RadioBearerRelease_v7g0ext_IEs_t	 radioBearerRelease_v7g0ext;
																		struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions__v890NonCriticalExtensions__v7g0NonCriticalExtensions__v8a0NonCriticalExtensions {
																			RadioBearerRelease_v8a0ext_IEs_t	 radioBearerRelease_v8a0ext;
																			struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions__v890NonCriticalExtensions__v7g0NonCriticalExtensions__v8a0NonCriticalExtensions__nonCriticalExtensions {
																				
																				/* Context for parsing across buffer boundaries */
																				asn_struct_ctx_t _asn_ctx;
																			} *nonCriticalExtensions;
																			
																			/* Context for parsing across buffer boundaries */
																			asn_struct_ctx_t _asn_ctx;
																		} *v8a0NonCriticalExtensions;
																		
																		/* Context for parsing across buffer boundaries */
																		asn_struct_ctx_t _asn_ctx;
																	} *v7g0NonCriticalExtensions;
																	
																	/* Context for parsing across buffer boundaries */
																	asn_struct_ctx_t _asn_ctx;
																} *v890NonCriticalExtensions;
																
																/* Context for parsing across buffer boundaries */
																asn_struct_ctx_t _asn_ctx;
															} *v7f0NonCriticalExtensions;
															
															/* Context for parsing across buffer boundaries */
															asn_struct_ctx_t _asn_ctx;
														} *v7d0NonCriticalExtensions;
														
														/* Context for parsing across buffer boundaries */
														asn_struct_ctx_t _asn_ctx;
													} r8;
													struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
														RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
														union RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
															struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9 {
																RadioBearerRelease_r9_IEs_t	 radioBearerRelease_r9;
																BIT_STRING_t	*radioBearerRelease_r9_add_ext	/* OPTIONAL */;
																struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9__v950NonCriticalExtensions {
																	RadioBearerRelease_v950ext_IEs_t	 radioBearerRelease_v950ext;
																	struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9__v950NonCriticalExtensions__v970NonCriticalExtensions {
																		RadioBearerRelease_v970ext_IEs_t	 radioBearerRelease_v970ext;
																		struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9__v950NonCriticalExtensions__v970NonCriticalExtensions__v9c0NonCriticalExtensions {
																			RadioBearerRelease_v9c0ext_IEs_t	 radioBearerRelease_v9c0ext;
																			struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9__v950NonCriticalExtensions__v970NonCriticalExtensions__v9c0NonCriticalExtensions__nonCriticalExtensions {
																				
																				/* Context for parsing across buffer boundaries */
																				asn_struct_ctx_t _asn_ctx;
																			} *nonCriticalExtensions;
																			
																			/* Context for parsing across buffer boundaries */
																			asn_struct_ctx_t _asn_ctx;
																		} *v9c0NonCriticalExtensions;
																		
																		/* Context for parsing across buffer boundaries */
																		asn_struct_ctx_t _asn_ctx;
																	} *v970NonCriticalExtensions;
																	
																	/* Context for parsing across buffer boundaries */
																	asn_struct_ctx_t _asn_ctx;
																} *v950NonCriticalExtensions;
																
																/* Context for parsing across buffer boundaries */
																asn_struct_ctx_t _asn_ctx;
															} r9;
															struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
																RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
																union RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
																	struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10 {
																		RadioBearerRelease_r10_IEs_t	 radioBearerRelease_r10;
																		BIT_STRING_t	*radioBearerRelease_r10_add_ext	/* OPTIONAL */;
																		struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10__v9c0NonCriticalExtensions {
																			RadioBearerRelease_v9c0ext_IEs_t	 radioBearerRelease_v9c0ext;
																			struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10__v9c0NonCriticalExtensions__vb50NonCriticalExtensions {
																				RadioBearerRelease_vb50ext_IEs_t	 radioBearerRelease_vb50ext;
																				struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10__v9c0NonCriticalExtensions__vb50NonCriticalExtensions__nonCriticalExtensions {
																					
																					/* Context for parsing across buffer boundaries */
																					asn_struct_ctx_t _asn_ctx;
																				} *nonCriticalExtensions;
																				
																				/* Context for parsing across buffer boundaries */
																				asn_struct_ctx_t _asn_ctx;
																			} *vb50NonCriticalExtensions;
																			
																			/* Context for parsing across buffer boundaries */
																			asn_struct_ctx_t _asn_ctx;
																		} *v9c0NonCriticalExtensions;
																		
																		/* Context for parsing across buffer boundaries */
																		asn_struct_ctx_t _asn_ctx;
																	} r10;
																	struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
																		RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
																		union RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
																			struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r11 {
																				RadioBearerRelease_r11_IEs_t	 radioBearerRelease_r11;
																				BIT_STRING_t	*radioBearerRelease_r11_add_ext	/* OPTIONAL */;
																				struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r11__nonCriticalExtensions {
																					
																					/* Context for parsing across buffer boundaries */
																					asn_struct_ctx_t _asn_ctx;
																				} *nonCriticalExtensions;
																				
																				/* Context for parsing across buffer boundaries */
																				asn_struct_ctx_t _asn_ctx;
																			} r11;
																			struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
																				RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
																				union RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
																					struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r12 {
																						RadioBearerRelease_r12_IEs_t	 radioBearerRelease_r12;
																						BIT_STRING_t	*radioBearerRelease_r11_add_ext	/* OPTIONAL */;
																						struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r12__nonCriticalExtensions {
																							
																							/* Context for parsing across buffer boundaries */
																							asn_struct_ctx_t _asn_ctx;
																						} *nonCriticalExtensions;
																						
																						/* Context for parsing across buffer boundaries */
																						asn_struct_ctx_t _asn_ctx;
																					} r12;
																					struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
																						RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
																						union RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
																							struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r13 {
																								RadioBearerRelease_r13_IEs_t	 radioBearerRelease_r13;
																								BIT_STRING_t	*radioBearerRelease_r13_add_ext	/* OPTIONAL */;
																								struct RadioBearerRelease__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r13__nonCriticalExtensions {
																									
																									/* Context for parsing across buffer boundaries */
																									asn_struct_ctx_t _asn_ctx;
																								} *nonCriticalExtensions;
																								
																								/* Context for parsing across buffer boundaries */
																								asn_struct_ctx_t _asn_ctx;
																							} r13;
																							RadioBearerRelease_LaterCriticalExtensions_r15_IEs_t	 laterCriticalExtensions;
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
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerRelease_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerRelease;
extern asn_CHOICE_specifics_t asn_SPC_RadioBearerRelease_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioBearerRelease_1[2];
extern asn_per_constraints_t asn_PER_type_RadioBearerRelease_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RadioBearerRelease_H_ */
#include <asn_internal.h>
