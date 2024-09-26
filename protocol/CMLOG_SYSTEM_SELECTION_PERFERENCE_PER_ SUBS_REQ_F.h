#ifndef CMLOG_SYSTEM_SELECTION_PERFERENCE_PER_ SUBS_REQ_F
#define CMLOG_SYSTEM_SELECTION_PERFERENCE_PER_ SUBS_REQ_F

#include <stdint.h>
#include "subsyscdm.h"
struct CM_SYSTEM_SELECTION_PREFERENCE_PER_SUBS
{
    const uint8_t CMD_CODE = DIAG_SUBSYS_CMD_F;
    const uint8_t SUBSYS_ID = 15;
    const uint16_t SUBSYS_CMD_CODE = CMLOG_SYSTEM_SELECTION_PREFERENCE_PER_SUBS_REQ_F;

    uint8_t asubs_id;
    uint8_t network_sel_mode_pref; /* Indicates the desired mode (cm_network_sel_mode_pref_e) */
    uint8_t PLMN[3];               /* PLMN (if manual) */
    uint32_t mode_pref;
    uint32_t acq_order_pref;
    uint32_t band_pref;
    uint32_t roam_pref;
    uint32_t hybr_pref;
    uint32_t srv_domain_pref;
} __attribute__((packed));


//Active Subscription ID:
#define ABSUD_ID_SUBSCRIPTION_ID_1 uint8_t(0)
#define ABSUD_ID_SUBSCRIPTION_ID_2 uint8_t(1)
#define ABSUD_ID_SUBSCRIPTION_ID_3 uint8_t(2)


#endif