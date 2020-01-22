#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_5x4( /* Base */
    KC_NLCK, KC_PSLS, KC_PAST, KC_ESC,
    KC_P7,   KC_P8,   KC_P9,   KC_PMNS,
    KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
    KC_P1,   KC_P2,   KC_P3,   KC_BSPC,
		TG(1),   KC_P0,   KC_PDOT, KC_ENT
  ),

	[1] = LAYOUT_ortho_5x4( /* Media */
    KC_NO,   KC_NO,   KC_NO,   KC_MUTE,
    KC_NO,   KC_NO,   KC_NO,   KC_VOLD,
    KC_NO,   KC_NO,   KC_NO,   KC_VOLU,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_TRNS, KC_NO,   KC_NO,   KC_NO
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
