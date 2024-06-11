/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PollingInfo_H_
#define	_PollingInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimerPollProhibit.h"
#include "TimerPoll.h"
#include "Poll-PDU.h"
#include "Poll-SDU.h"
#include <BOOLEAN.h>
#include "PollWindow.h"
#include "TimerPollPeriodic.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PollingInfo */
typedef struct PollingInfo {
	TimerPollProhibit_t	*timerPollProhibit	/* OPTIONAL */;
	TimerPoll_t	*timerPoll	/* OPTIONAL */;
	Poll_PDU_t	*poll_PDU	/* OPTIONAL */;
	Poll_SDU_t	*poll_SDU	/* OPTIONAL */;
	BOOLEAN_t	 lastTransmissionPDU_Poll;
	BOOLEAN_t	 lastRetransmissionPDU_Poll;
	PollWindow_t	*pollWindow	/* OPTIONAL */;
	TimerPollPeriodic_t	*timerPollPeriodic	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PollingInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PollingInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_PollingInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_PollingInfo_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _PollingInfo_H_ */
#include <asn_internal.h>
