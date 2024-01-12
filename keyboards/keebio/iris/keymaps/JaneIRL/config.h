// #include "config_common.h"

#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD
// #define IGNORE_MOD_TAP_INTERRUPT

// https://docs.qmk.fm/#/feature_rgblight?id=lighting-layers
#define RGBLIGHT_LAYERS

// Lighting layers on split keyboards will require layer state synced to the slave half
// https://docs.qmk.fm/#/feature_rgblight
// https://docs.qmk.fm/#/feature_split_keyboard?id=data-sync-options
#define SPLIT_LAYER_STATE_ENABLE

// https://qmk.github.io/qmk_mkdocs/master/en/feature_rgblight/#effects-and-animations
#undef RGBLIGHT_DEFAULT_MODE
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#undef RGBLIGHT_MODE_BREATHING
#undef RGBLIGHT_MODE_RAINBOW_MOOD
#undef RGBLIGHT_MODE_RAINBOW_SWIRL
#undef RGBLIGHT_MODE_SNAKE
#undef RGBLIGHT_MODE_KNIGHT
#undef RGBLIGHT_MODE_CHRISTMAS
#undef RGBLIGHT_MODE_STATIC_GRADIENT
#undef RGBLIGHT_MODE_RGB_TEST
// #undef RGBLIGHT_MODE_ALTERNATING
#undef RGBLIGHT_MODE_TWINKLE
#undef RGBLIGHT_ANIMATIONS
// #undef RGBLIGHT_EFFECT_ALTERNATING
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_TWINKLE
