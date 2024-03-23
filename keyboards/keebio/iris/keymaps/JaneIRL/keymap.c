#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _COLEMAK 1
#define _NAVIGATION 2
#define _MISC 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT(QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_PSCR, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, TG(1), MO(3), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_SPC, KC_SPC, KC_LALT, MO(2), KC_BSPC, KC_DEL),
	[_COLEMAK] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_TRNS, KC_CAPS, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_TRNS, KC_TRNS, LCTL_T(KC_Z), LSFT_T(KC_X), LGUI_T(KC_C), LALT_T(KC_V), KC_B, KC_TRNS, KC_TRNS, KC_K, RALT_T(KC_M), RGUI_T(KC_COMM), RSFT_T(KC_DOT), RCTL_T(KC_SLSH), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[_NAVIGATION] = LAYOUT(KC_GRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_UNDS, KC_PLUS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[_MISC] = LAYOUT(KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, BL_UP, BL_TOGG, RGB_SAI, RGB_TOG, RGB_MOD, KC_TRNS, KC_MSTP, KC_VOLU, KC_MPLY, KC_BRIU, KC_TRNS, KC_TRNS, BL_DOWN, RGB_HUD, RGB_SAD, RGB_HUI, RGB_RMOD, KC_TRNS, KC_MPRV, KC_VOLD, KC_MNXT, KC_BRID, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case RCTL_T(KC_O):
			return TAPPING_TERM * 3;
		default:
			return TAPPING_TERM;
	}
}

// 0  1  2  3  4  5   |  39 38 37 36 35 34
// 11 10 9  8  7  6   |  40 41 42 43 44 45
// 12 13 14 15 16 17  |  51 50 49 48 47 46
// 23 22 21 20 19 18  |  52 53 54 55 56 57
// 24 25 26 27        |        61 60 59 58
// 28 29 30           |
// 31 32 33           |
const rgblight_segment_t PROGMEM capslock_lighting_layer[] = RGBLIGHT_LAYER_SEGMENTS(
	{10, 2, HSV_RED},
	{12, 1, HSV_BLUE},
	{13, 1, HSV_RED},
	{22, 2, HSV_RED}
);
const rgblight_segment_t PROGMEM qwerty_lighting_layer[] = RGBLIGHT_LAYER_SEGMENTS(
	{0, 68, HSV_GOLD}
);
const rgblight_segment_t PROGMEM colemak_lighting_layer[] = RGBLIGHT_LAYER_SEGMENTS(
	{0, 68, HSV_SPRINGGREEN}
);
const rgblight_segment_t PROGMEM navigation_nighting_layer[] = RGBLIGHT_LAYER_SEGMENTS(
	{0, 1, HSV_RED},
	{34, 2, HSV_RED},
	{44, 2, HSV_RED},
	{46, 2, HSV_RED},
	{56, 2, HSV_RED},

	{40, 1, HSV_RED},
	{51, 1, HSV_RED},
	{41, 1, HSV_RED},
	{42, 1, HSV_GREEN},
	{43, 1, HSV_RED},
	{48, 3, HSV_GREEN}
);
const rgblight_segment_t PROGMEM misc_nighting_layer[] = RGBLIGHT_LAYER_SEGMENTS(
	{0, 68, HSV_PINK}
);

// Later layers take precedence
// https://docs.qmk.fm/#/feature_rgblight?id=lighting-layers
const rgblight_segment_t* const PROGMEM jane_lighting_layers[] = RGBLIGHT_LAYERS_LIST(
	qwerty_lighting_layer,
	colemak_lighting_layer,
	capslock_lighting_layer,
	navigation_nighting_layer,
	misc_nighting_layer
);

void keyboard_post_init_user(void) {
	rgblight_layers = jane_lighting_layers;
}

bool led_update_user(led_t led_state) {
	rgblight_set_layer_state(2, led_state.caps_lock);
	return true;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
	rgblight_set_layer_state(0, layer_state_cmp(state, _QWERTY));
	return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
	rgblight_set_layer_state(0, layer_state_cmp(state, _QWERTY));
	rgblight_set_layer_state(1, layer_state_cmp(state, _COLEMAK));
	rgblight_set_layer_state(3, layer_state_cmp(state, _NAVIGATION));
	rgblight_set_layer_state(4, layer_state_cmp(state, _MISC));
	return state;
}
