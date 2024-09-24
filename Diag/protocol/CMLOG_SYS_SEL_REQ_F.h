#ifndef CMLOG_SYS_SEL_REQ_F_H
#define CMLOG_SYS_SEL_REQ_F_H

#include <stdint.h>
#include "subsyscdm.h"
struct CMLOG_SYS_SEL_REQ_F_{
    const uint8_t CMD_CODE = DIAG_SUBSYS_CMD_F;
    const uint8_t SUBSYS_ID = 15;
    const uint16_t SUBSYS_CMD_CODE= CMLOG_SYS_SEL_REQ_F;
    uint8_t PLMN_SELECTION_MODE;
    uint8_t PLMN_REQUESTED[3];
    uint32_t MODE_PREF;
    uint32_t GW_ACQ_ORDER_PREF;
    uint32_t BAND_PREF;
    uint32_t ROAM_PREF;
    uint32_t HYBR_PREF;
    uint32_t SRV_DOMAIN_PREF;
}typedef cmlog_sys_sel_req;

//Automatic mode ignores plmn_requested parameter
#define PLMN_SELECTION_MODE_AUTOMATIC uint8_t(0)
//Require manual or no change selection of plmn_requested parameter
#define PLMN_SELECTION_MODE_MANUAL uint8_t(1)
//Require manual or no change selection of plmn_requested parameter
#define PLMN_SELECTION_MODE_NO_CHANGE uint8_t(3)

//MODE_PREF

#define AMPS_ONLY uint32_t(0)

#define DIGITAL_ONLY uint32_t(1)

#define AUTOMATIC uint32_t(2)

#define EMERGENCY uint32_t(3)

#define CDMA_ONLY uint32_t(9)

#define HDR_ONLY uint32_t(10)

#define CDMA_AMPS_ONLY uint32_t(11)

#define GPS_ONLY uint32_t(12)

#define GSM_ONLY uint32_t(13)

#define WCDMA_ONLY uint32_t(14)

#define PERSISTENT uint32_t(15)

#define No uint32_t(16)

#define ANY_BUT_HDR uint32_t(17)

#define CURRENT_LESS_HDR uint32_t(18)

#define GSM_WCDMA_ONLY uint32_t(19)

#define DIGITAL_LESS_HDR_ONLY uint32_t(20)

#define CURRENT_LESS_HDR_AND_AMPS uint32_t(21)

#define CDMA_HDR_ONLY uint32_t(22)

#define CDMA_AMPS_HDR_ONLY uint32_t(23)

#define CURRENT_LESS_AMPS uint32_t(24)

#define WLAN_ONLY uint32_t(25)

#define CDMA_WLAN uint32_t(26)

#define HDR_WLAN uint32_t(27)

#define CDMA_HDR_WLAN uint32_t(28)

#define GSM_WLAN uint32_t(29)

#define WCDMA_WLAN uint32_t(30)

#define GW_WLAN uint32_t(31)

#define CURRENT_PLUS_WLAN uint32_t(32)

#define CURRENT_LESS_WLAN uint32_t(33)

#define CDMA_AMPS_HDR_WLAN_ONLY uint32_t(34)

#define CDMA_AMPS_WLAN_ONLY uint32_t(35)

#define INTERSECT_OR_FORCE uint32_t(36)

#define ANY_BUT_HDR_WLAN uint32_t(37)

#define LTE_ONLY uint32_t(38)

#define GWL uint32_t(39)

#define HDR_LTE_ONLY uint32_t(40)

#define CDMA_HDR_LTE_ONLY uint32_t(41)

#define CDMA_HDR_GW uint32_t(42)

#define CDMA_GW uint32_t(43)

#define ANY_BUT_WLAN uint32_t(44)

#define GWL_WLAN uint32_t(45)

#define CDMA_LTE_ONLY uint32_t(46)

#define ANY_BUT_HDR_LTE uint32_t(47)

#define ANY_BUT_LTE uint32_t(48)

#define DIGITAL_LESS_LTE_ONLY uint32_t(49)

#define DIGITAL_LESS_HDR_LTE_ONLY uint32_t(50)

#define GSM_LTE uint32_t(51)

#define CDMA_GSM_LTE uint32_t(52)

#define HDR_GSM_LTE uint32_t(53)

#define WCDMA_LTE uint32_t(54)

#define CDMA_WCDMA_LTE uint32_t(55)

#define HDR_WCDMA_LTE uint32_t(56)

#define CDMA_HDR_GSM uint32_t(57)

#define CDMA_GSM uint32_t(58)

#define TDS_ONLY uint32_t(59)

#define TDS_GSM uint32_t(60)

#define TDS_GSM_LTE uint32_t(61)

#define TDS_GSM_WCDMA_LTE uint32_t(62)

#define TDS_GSM_WCDMA uint32_t(63)

#define ANY_BUT_HDR_WLAN_LTE uint32_t(64)

#define TDS_LTE uint32_t(65)

#define CDMA_GW_TDS uint32_t(66)

#define CDMA_HDR_GW_TDS uint32_t(67)

#define CDMA_HDR_GSM_WCDMA_LTE uint32_t(68)

#define CDMA_GSM_WCDMA_LTE uint32_t(69)

#define TDS_WCDMA uint32_t(70)

#define DISABLE_LTE uint32_t(71)

#define ENABLE_LTE uint32_t(72)

#define TDS_WCDMA_LTE uint32_t(73)

#define ANY_BUT_TDS uint32_t(74)

#define ANY_BUT_HDR_TDS uint32_t(75)

#define ANY_BUT_LTE_TDS uint32_t(76)

#define ANY_BUT_HDR_LTE_TDS uint32_t(77)

#define CDMA_HDR_GSM_AMPS uint32_t(78)

#define CDMA_GSM_AMPS uint32_t(79)

#define CDMA_HDR_GSM_GPS_AMPS uint32_t(80)

#define CDMA_GSM_GPS_AMPS uint32_t(81)

#define CDMA_HDR_GSM_TDS_LTE uint32_t(82)

#define GSM_GPS uint32_t(83)

#define WCDMA_GPS uint32_t(84)

#define GW_GPS uint32_t(85)

#define HDR_GSM uint32_t(86)

#define ANY_BUT_CDMA_HDR uint32_t(87)

#define TDS_GSM_GPS uint32_t(88)

#define TDS_GSM_WCDMA_GPS uint32_t(89)

#define GSM_WCDMA_TDS_AMPS uint32_t(90)

#define GSM_WCDMA_LTE_AMPS uint32_t(91)

#define GSM_WCDMA_AMPS uint32_t(92)

#define CDMA_HDR_GSM_LTE uint32_t(93)

/* END OF MODE_PREF*/


/*GW_ACQ_ORDER_PREF*/

#define GW_ACQ_ORDER_PREF_AUTOMATIC uint32_t(0)
#define GW_ACQ_ORDER_PREF_GSM_FIRST uint32_t(1)
#define GW_ACQ_ORDER_PREF_WCDMA_FIRST uint32_t(2)
#define GW_ACQ_ORDER_PREF_NO_CHANGE uint32_t(3)


/*END OF GW_ACQ_ORDER_PREF*/


//BAND_PREF

#define CELL_A uint32_t(0x00000001)

#define CELL_B uint32_t(0x00000002)

#define CELL BC0 uint32_t(0x00000021)

#define BC1 uint32_t(0x00000004)

#define BC2 uint32_t(0x00000008)

#define BC3 uint32_t(0x00000010)

#define BC4 uint32_t(0x00000020)

#define BC5 uint32_t(0x00000040)

#define GSM_DCS_1800 uint32_t(0x00000080)

#define GSM_EGSM_900 uint32_t(0x00000100)

#define GSM_PGSM_900 uint32_t(0x00000200)

#define BC6 uint32_t(0x00000400)

#define BC7 uint32_t(0x00000800)

#define BC8 uint32_t(0x00001000)

#define BC9 uint32_t(0x00002000)

#define BC10 uint32_t(0x00004000)

#define BC11 uint32_t(0x00008000)

#define GSM_450 uint32_t(0x00010000)

#define GSM_480 uint32_t(0x00020000)

#define GSM_750 uint32_t(0x00040000)

#define GSM_850 uint32_t(0x00080000)

#define GSM_RGSM_900 uint32_t(0x00100000)

#define GSM_PCS_1900 uint32_t(0x00200000)

#define WCDMA_I_IMT_2000 uint32_t(0x00400000)

#define WCDMA_II_PCS_1900 uint32_t(0x00800000)

#define WCDMA_III_1700 uint32_t(0x01000000)

#define WCDMA_IV_1700 uint32_t(0x02000000)

#define WCDMA_V_850 uint32_t(0x04000000)

#define WCDMA_VI_800 uint32_t(0x08000000)

/*
Bands listed above can be ORed to generate
combination of bands to be supplied to the phone;
only the bands supported by the target will get set
*/

#define BAND_PREF_ANY uint32_t(0x3FFFFFFF)

#define BAND_PREF_NO_CHANGE uint32_t(0x40000000)


//ROAM_PREF

#define ROAM_PREF_HOME uint32_t(0)

#define ROAM_PREF_AFFIL uint32_t(1)

#define ROAM_PREF_ANY uint32_t(0xff)

#define ROAM_PREF_NO_CHANGE uint32_t(0x100)

//HYBR_PREF

#define HYBR_PREF_OFF uint32_t(0)

#define HYBR_PREF_ON uint32_t(1)

#define HYBR_PREF_NO_CHANGE uint32_t(2)

//SRV_DOMAIN_PREF

#define SRV_DOMAIN_PREF_CS_ONLY uint32_t(0)

#define SRV_DOMAIN_PREF_PS_ONLY uint32_t(1)

#define SRV_DOMAIN_PREF_CS_PS uint32_t(2)

#define SRV_DOMAIN_PREF_ANY uint32_t(3)

#define SRV_DOMAIN_PREF_NO_CHANGE uint32_t(4)

#endif