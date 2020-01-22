#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_5x4( /* Base */
    KC_NLCK, KC_PSLS, KC_PAST, KC_ESC,
    KC_P7,   KC_P8,   KC_P9,   KC_PMNS,
    KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
    KC_P1,   KC_P2,   KC_P3,   KC_BSPC,
		KC_NO,    KC_P0,   KC_PDOT, KC_ENT
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
