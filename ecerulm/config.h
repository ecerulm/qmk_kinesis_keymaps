#pragma once

// place overrides here
// the kinesis/kint41 config.h already defines 
// USB_POLLING_INTERVAL_MS 1
// DEBOUNCE 20 apparently 5 is not enough
// 
// #define NO_DEBUG
// #define NO_PRINT
#define FORCE_NKRO 1
#define QMK_KEYS_PER_SCAN 4
#define REGISTER_MULTIPLE_KEYEVENTS_ENABLE 1


// https://thomasbaart.nl/2018/12/20/qmk-basics-leader-key/
#define LEADER_TIMEOUT 300
// #define LEADER_PER_KEY_TIMING

#define UNICODE_SELECTED_MODES UC_MAC

#define TAPPING_TERM 200


