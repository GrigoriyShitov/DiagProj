/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SC_MTCH_SchedulingInfo_r13_H_
#define	_SC_MTCH_SchedulingInfo_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13 {
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf1	= 0,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf2	= 1,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf3	= 2,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf4	= 3,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf5	= 4,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf6	= 5,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf8	= 6,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf10	= 7,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf20	= 8,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf30	= 9,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf40	= 10,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf50	= 11,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf60	= 12,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf80	= 13,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf100	= 14,
	SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13_psf200	= 15
} e_SC_MTCH_SchedulingInfo_r13__onDurationTimerSCPTM_r13;
typedef enum SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13 {
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf0	= 0,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf1	= 1,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf2	= 2,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf4	= 3,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf8	= 4,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf10	= 5,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf20	= 6,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf40	= 7,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf80	= 8,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf160	= 9,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_ps320	= 10,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf640	= 11,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf960	= 12,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf1280	= 13,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf1920	= 14,
	SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13_psf2560	= 15
} e_SC_MTCH_SchedulingInfo_r13__drx_InactivityTimerSCPTM_r13;
typedef enum SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR {
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_NOTHING,	/* No components present */
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf10,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf20,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf32,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf40,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf64,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf80,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf128,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf160,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf256,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf320,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf512,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf640,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf1024,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf2048,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf4096,
	SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR_sf8192
} SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR;

/* SC-MTCH-SchedulingInfo-r13 */
typedef struct SC_MTCH_SchedulingInfo_r13 {
	long	 onDurationTimerSCPTM_r13;
	long	 drx_InactivityTimerSCPTM_r13;
	struct SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13 {
		SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_PR present;
		union SC_MTCH_SchedulingInfo_r13__schedulingPeriodStartOffsetSCPTM_r13_u {
			long	 sf10;
			long	 sf20;
			long	 sf32;
			long	 sf40;
			long	 sf64;
			long	 sf80;
			long	 sf128;
			long	 sf160;
			long	 sf256;
			long	 sf320;
			long	 sf512;
			long	 sf640;
			long	 sf1024;
			long	 sf2048;
			long	 sf4096;
			long	 sf8192;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} schedulingPeriodStartOffsetSCPTM_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SC_MTCH_SchedulingInfo_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_onDurationTimerSCPTM_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_InactivityTimerSCPTM_r13_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SC_MTCH_SchedulingInfo_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SC_MTCH_SchedulingInfo_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SC_MTCH_SchedulingInfo_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SC_MTCH_SchedulingInfo_r13_H_ */
#include <asn_internal.h>
