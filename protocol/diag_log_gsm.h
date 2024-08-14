#ifndef DIAG_LOG_GSM_H
#define DIAG_LOG_GSM_H
#include <stdint.h>

#define GSM(x)	(0x5000 + x)

enum diag_log_code_gsm {
	LOG_GSM_POWER_SCAN_C				= 0x64,
	LOG_GSM_FCCH_DECODE_C				= 0x65,
	LOG_GSM_NCELL_ACQ_C				= 0x75,
	LOG_GSM_AFC_ADJUST_C				= 0x7c,
	LOG_GSM_MON_BURST_C				= 0x82,
	LOG_GSM_BCCH_BURST_METRICS_C			= 0x85,
	LOG_GSM_MDSP_CMD_C				= 0x8c,
	LOG_GSM_GL1_HW_CMD_C				= 0x8d,
	LOG_GSM_RR_SIGNALING_MESSAGE_C			= 0x12f,

	/* Layer2 (LAPDm) */
	LOG_GSM_L2_STATE_C				= 200,
	LOG_GSM_L2_TRANSMISSION_STATUS_C		= 201,
	LOG_GSM_L2_OUTSTANDING_FRAME_C			= 202,


	LOG_GSM_RR_STATE_C				= 300,
	//= 303,
	LOG_GSM_RR_CONTROL_CHANNEL_PARAMS_C		= 306,

	LOG_GPRS_INDICATORS_C				= 500,
	LOG_GPRS_GENERAL_PARAMS_C			= 501,
	LOG_GPRS_CELL_OPTIONS_C				= 502,
	LOG_GPRS_POWER_CONTROL_PARAMS_C			= 503,
	LOG_GPRS_MOBILE_ALLOCATION_C			= 504,
	LOG_GPRS_PBCCH_DESCRIPTION_C			= 505,
	LOG_GPRS_GRR_STATE_C				= 506,
	LOG_GPRS_RR_CELL_RESELECTION_PARAMS_C		= 507,
	LOG_GPRS_RR_CELL_RESELECTION_MEASMNTS_C		= 508,
	LOG_GPRS_RR_PSI1_C				= 509,
	LOG_GPRS_RR_PSI2_C				= 510,
	LOG_GPRS_RR_PSI3_C				= 511,
	LOG_GPRS_RLC_UL_ABNRML_RLS_COUNTS_C		= 512,
	LOG_GPRS_RLC_UL_EVENT_COUNTS_C			= 513,
	LOG_GPRS_RLC_UL_STATS_C				= 514,
	LOG_EGPRS_RLC_UL_HEADER_C			= 517,
	LOG_EGPRS_RLC_DL_HEADER_C			= 518,
	LOG_EGPRS_RLC_UL_STATS_C			= 519,
	LOG_EGPRS_RLC_DL_STATS_C			= 520,
	LOG_EGPRS_RLC_EPUAN_C				= 521,
	LOG_GPRS_RLC_DL_STATS_C				= 522,
	LOG_GPRS_RLC_UL_ACKNACK_PARAMS_C		= 523,
	LOG_GPRS_RLC_DL_ACKNACK_PARAMS_C		= 524,
	LOG_GPRS_RLC_UL_RELEASE_IND_C			= 525,
	LOG_GPRS_RLC_DL_RELEASE_IND_C			= 526,
	LOG_GPRS_RLC_UL_ACKNACK_PARAMS_VER2_C		= 527,
	LOG_GPRS_RLC_DL_ACKNACK_PARAMS_VER2_C		= 528,
	LOG_EGPRS_RLC_EPDAN_C				= 529,
	LOG_GPRS_LLC_ME_INFO_C				= 530,
	LOG_GPRS_LLC_SAPI_STATES_C			= 531,
	LOG_GPRS_LLC_XID_INFO_C				= 532,
	LOG_GPRS_LLC_PDU_STATS_C			= 533,
	LOG_GPRS_LLC_PERIODIC_STATS_C			= 534,
	LOG_GPRS_LLC_READY_TIMER_STATUS_C		= 535,
	LOG_GPRS_LLC_SEND_UI_FRAME_C			= 536,
	LOG_GPRS_LLC_RECV_UI_FRAME_C			= 537,
	LOG_GPRS_LLC_READY_TIMER_STATUS_VER2_C		= 538,
	LOG_GPRS_SNDCP_ACTIVE_PDP_CONTEXTS_C		= 540,
	LOG_GPRS_SNDCP_PDP_CONTEXT_INFO_C		= 541,
	LOG_GPRS_SNDCP_STATES_C				= 542,
	LOG_GPRS_SNDCP_PDU_STATS_C			= 543,
	LOG_GPRS_SNDCP_UL_TCP_HDR_C			= 544,
	LOG_GPRS_SNDCP_DL_TCP_HDR_C			= 545,
	LOG_GPRS_MAC_SIGNALLING_MESSAGE_C		= 550,
	LOG_GPRS_MAC_STATE_C				= 551,
	LOG_GPRS_MAC_UL_TBF_ESTABLISH_C			= 552,
	LOG_GPRS_MAC_UL_TBF_RELEASE_C			= 553,
	LOG_GPRS_MAC_DL_TBF_ESTABLISH_C			= 554,
	LOG_GPRS_MAC_DL_TBF_RELEASE_C			= 555,
	LOG_EGPRS_MAC_UL_ACKNACK_C			= 556,
	LOG_EGPRS_MAC_DL_ACKNACK_C			= 557,
	LOG_EGPRS_SRB_HARD_DECISIONS_C			= 558,
	LOG_GPRS_SM_GMM_OTA_MESSAGE_C			= 560,
	LOG_GPRS_AIR_INTERFACE_SUMMARY_C		= 561,
	LOG_GPRS_AGC_C					= 562,
	LOG_GPRS_TIMING_ADVANCE_C			= 563,
	LOG_GPRS_POWER_CONTROL_C			= 564,
	LOG_GPRS_TRANSFER_SUMMARY_C			= 565,
	LOG_GPRS_TX_SCHEDULED_RESULTS_C			= 567,
	LOG_GPRS_HW_SCHEDULE_C				= 570,
	LOG_UPLINK_TBF_DATA_BLOCK_COUNT_C		= 575,
	LOG_GPRS_RECEIVE_BURST_METRICS_A_C		= 581,
	LOG_GPRS_RECEIVE_BURST_METRICS_B_C		= 582,
	LOG_GPRS_RECEIVE_BURST_METRICS_C_C		= 583,
	LOG_GPRS_RECEIVE_BURST_METRICS_D_C		= 584,
	LOG_GPRS_RECEIVE_MSG_METRICS_A_C		= 585,
	LOG_GPRS_RECEIVE_MSG_METRICS_B_C		= 586,
	LOG_GPRS_RECEIVE_MSG_METRICS_C_C		= 587,
	LOG_GPRS_RECEIVE_MSG_METRICS_D_C		= 588,
	LOG_GPRS_RECEIVE_MSG_METRICS_A_VER2_C		= 589,
	LOG_GPRS_RECEIVE_MSG_METRICS_B_VER2_C		= 590,
	LOG_GPRS_RECEIVE_MSG_METRICS_C_VER2_C		= 591,
	LOG_GPRS_RECEIVE_MSG_METRICS_D_VER2_C		= 592,
	LOG_GPRS_DLPTCCH_BURST_METRICS_C		= 593,
	LOG_GPRS_DLPTCCH_MSG_METRICS_C			= 594,
};


struct diag_gsm_rr_msg {
	uint8_t chan_type;
	uint8_t msg_type;
	uint8_t length;
	uint8_t data[0];
} __attribute__((packed));

#endif