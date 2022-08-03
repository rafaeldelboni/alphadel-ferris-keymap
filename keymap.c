#include QMK_KEYBOARD_H

enum custom_keycodes {
  KC_CEDI = SAFE_RANGE, // Cedilla
};

#define KC_CTLA LCTL_T(KC_A)
#define KC_LSHZ LSFT_T(KC_Z)
#define KC_LSSC LSFT_T(KC_SCLN)
#define KC_LASH LALT_T(KC_SLSH)
#define KC_GUBS GUI_T(KC_BSPC)
#define KC_CESC LCTL_T(KC_ESC)

#define KC_LSP1 LT(1, KC_SPC)
#define KC_LEN2 LT(2, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,  KC_I,    KC_O,   KC_P,

    KC_CTLA, KC_S,    KC_D,    KC_F,    KC_G,            KC_H,    KC_J,  KC_K,    KC_L,   KC_LSSC,

    KC_LSHZ, KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M,  KC_COMM, KC_DOT, KC_LASH,

                               KC_CESC, KC_LSP1,         KC_LEN2, KC_GUBS
  ),

  [1] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,

    KC_TAB,  KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY,         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_QUOT,

    KC_TRNS, KC_TRNS, KC_CEDI, KC_BTN1, KC_BTN2,         KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TILD,

                               KC_TRNS, KC_TRNS,         MO(3),   KC_TRNS
  ),

  [2] = LAYOUT(
    KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,         KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,

    KC_TRNS,  KC_GRV, KC_TRNS, KC_TRNS, KC_PSCR,         KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR, KC_PIPE,

    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_DEL,

                               KC_TRNS, MO(3),           KC_TRNS, KC_TRNS
  ),

  [3] = LAYOUT(
    RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,

    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,

    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_F11,  KC_F12,  KC_TRNS, KC_TRNS, KC_TRNS,

                               KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_CEDI:
      if (record->event.pressed) {
        SEND_STRING(SS_ALGR(","));
      }
      break;
  }

  return true;
}
