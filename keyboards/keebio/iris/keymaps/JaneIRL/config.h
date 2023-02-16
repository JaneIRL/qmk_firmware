#include "config_common.h"

#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

// https://docs.qmk.fm/#/feature_rgblight?id=lighting-layers
#define RGBLIGHT_LAYERS

// Lighting layers on split keyboards will require layer state synced to the slave half
// https://docs.qmk.fm/#/feature_rgblight
// https://docs.qmk.fm/#/feature_split_keyboard?id=data-sync-options
#define SPLIT_LAYER_STATE_ENABLE
