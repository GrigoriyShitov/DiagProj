#pragma once
#ifndef _LOG_TYPES_H_
#define _LOG_TYPES_H_


//    This file enumerates DIAG log types, used in DIAG_LOG_F packets.

//    These are 2G-related log types.

//#define LOG_GSM_RR_SIGNALING_MESSAGE_C (uint16_t(0x512f))

#define DCCH (uint8_t(0x00))
#define BCCH (uint8_t(0x01))
#define L2_RACH (uint8_t(0x02))
#define CCCH (uint8_t(0x03))
#define SACCH (uint8_t(0x04))
#define SDCCH (uint8_t(0x05))
#define FACCH_F (uint8_t(0x06))
#define FACCH_H (uint8_t(0x07))
#define L2_RACH_WITH_NO_DELAY (uint8_t(0x08))

//    These are GPRS-related log types.

//#define LOG_GPRS_MAC_SIGNALLING_MESSAGE_C (uint16_t(0x5226))

#define PACCH_RRBP_CHANNEL (uint8_t(0x03))
#define UL_PACCH_CHANNEL (uint8_t(0x04))
#define DL_PACCH_CHANNEL (uint8_t(0x83))

#define PACKET_CHANNEL_REQUEST (uint8_t(0x20))

//    These are 5G-related log types.

#define LOG_NR_RRC_OTA_MSG_LOG_C (uint16_t(0xb821))

//    These are 4G-related log types.

#define LOG_LTE_RRC_OTA_MSG_LOG_C (uint16_t(0xb0c0))
#define LOG_LTE_NAS_ESM_OTA_IN_MSG_LOG_C (uint16_t(0xb0e2))
#define LOG_LTE_NAS_ESM_OTA_OUT_MSG_LOG_C (uint16_t(0xb0e3))
#define LOG_LTE_NAS_EMM_OTA_IN_MSG_LOG_C (uint16_t(0xb0ec))
#define LOG_LTE_NAS_EMM_OTA_OUT_MSG_LOG_C (uint16_t(0xb0ed))

#define LTE_BCCH_BCH_v0 (uint8_t(1))
#define LTE_BCCH_DL_SCH_v0 (uint8_t(2))
#define LTE_MCCH_v0 (uint8_t(3))
#define LTE_PCCH_v0 (uint8_t(4))
#define LTE_DL_CCCH_v0 (uint8_t(5))
#define LTE_DL_DCCH_v0 (uint8_t(6))
#define LTE_UL_CCCH_v0 (uint8_t(7))
#define LTE_UL_DCCH_v0 (uint8_t(8))

#define LTE_BCCH_BCH_v14 (uint8_t(1))
#define LTE_BCCH_DL_SCH_v14 (uint8_t(2))
#define LTE_MCCH_v14 (uint8_t(4))
#define LTE_PCCH_v14 (uint8_t(5))
#define LTE_DL_CCCH_v14 (uint8_t(6))
#define LTE_DL_DCCH_v14 (uint8_t(7))
#define LTE_UL_CCCH_v14 (uint8_t(8))
#define LTE_UL_DCCH_v14 (uint8_t(9))

#define LTE_BCCH_BCH_v9 (uint8_t(8))
#define LTE_BCCH_DL_SCH_v9 (uint8_t(9))
#define LTE_MCCH_v9 (uint8_t(10))
#define LTE_PCCH_v9 (uint8_t(11))
#define LTE_DL_CCCH_v9 (uint8_t(12))
#define LTE_DL_DCCH_v9 (uint8_t(13))
#define LTE_UL_CCCH_v9 (uint8_t(14))
#define LTE_UL_DCCH_v9 (uint8_t(15))

#define LTE_BCCH_BCH_v19 (uint8_t(1))
#define LTE_BCCH_DL_SCH_v19 (uint8_t(3))
#define LTE_MCCH_v19 (uint8_t(6))
#define LTE_PCCH_v19 (uint8_t(7))
#define LTE_DL_CCCH_v19 (uint8_t(8))
#define LTE_DL_DCCH_v19 (uint8_t(9))
#define LTE_UL_CCCH_v19 (uint8_t(10))
#define LTE_UL_DCCH_v19 (uint8_t(11))

#define LTE_BCCH_BCH_NB (uint8_t(45))
#define LTE_BCCH_DL_SCH_NB (uint8_t(46))
#define LTE_PCCH_NB (uint8_t(47))
#define LTE_DL_CCCH_NB (uint8_t(48))
#define LTE_DL_DCCH_NB (uint8_t(49))
#define LTE_UL_CCCH_NB (uint8_t(50))
#define LTE_UL_DCCH_NB (uint8_t(52))


//    These are 3G-related log types.

#define RRCLOG_SIG_UL_CCCH (uint8_t(0))
#define RRCLOG_SIG_UL_DCCH (uint8_t(1))
#define RRCLOG_SIG_DL_CCCH (uint8_t(2))
#define RRCLOG_SIG_DL_DCCH (uint8_t(3))
#define RRCLOG_SIG_DL_BCCH_BCH (uint8_t(4))
#define RRCLOG_SIG_DL_BCCH_FACH (uint8_t(5))
#define RRCLOG_SIG_DL_PCCH (uint8_t(6))
#define RRCLOG_SIG_DL_MCCH (uint8_t(7))
#define RRCLOG_SIG_DL_MSCH (uint8_t(8))
#define RRCLOG_EXTENSION_SIB (uint8_t(9))
#define RRCLOG_SIB_CONTAINER (uint8_t(10))



//    Upper layers

#define LOG_DATA_PROTOCOL_LOGGING_C (uint16_t(0x11eb))

#define LOG_CONFIG_RETRIEVE_ID_RANGES_OP (uint8_t(1))

#define LOG_CONFIG_SET_MASK_OP (uint8_t(3))

#define LOG_CONFIG_DISABLE_OP (uint8_t(0))


#endif