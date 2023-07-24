// Copyright (C) 2019, 2020  Keyboard.io, Inc
//
// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

enum layer_names {
    _HRM,
    _CM,
    _QW,
    _RS,
    _LW,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_HRM] = LAYOUT( /* Qwerty with home row mods */
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P    ,
    LGUI_T(KC_A),LALT_T(KC_S),LCTL_T(KC_D),LSFT_T(KC_F),KC_G,KC_H,RSFT_T(KC_J),RCTL_T(KC_K),LALT_T(KC_L),RGUI_T(KC_SCLN) ,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_GRV,  KC_NUBS, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH ,
    LT(_LW,KC_ESC), KC_TAB, KC_LGUI,  KC_LCTL, KC_LSFT,  LALT_T(KC_QUOT), KC_DEL, KC_SPC,  TT(_RS), KC_MINS, KC_QUOT, KC_ENT ),
  
  [_CM] = LAYOUT( /* Colemak-dh with home row mods */
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN    ,
    LGUI_T(KC_A),LALT_T(KC_R),LCTL_T(KC_S),LSFT_T(KC_T),KC_G,KC_M,RSFT_T(KC_N),RCTL_T(KC_E),LALT_T(KC_I),RGUI_T(KC_O) ,
    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_GRV,  KC_NUBS, KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH ,
    LT(_LW,KC_ESC), KC_TAB, KC_LGUI,  KC_LCTL, KC_LSFT,  LALT_T(KC_QUOT), KC_DEL, KC_SPC,  TT(_RS), KC_MINS, KC_QUOT, KC_ENT ),

  [_QW] = LAYOUT( /* Qwerty */
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P    ,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN ,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_GRV,  KC_NUBS, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH ,
    LT(_LW,KC_ESC), KC_TAB, KC_LGUI,  KC_LCTL, KC_LSFT,  LALT_T(KC_QUOT), KC_DEL, KC_SPC,  TT(_RS), KC_MINS, KC_QUOT, KC_ENT ),

  /*
   *  !       @     up     {    }        ||     pgup    7     8     9    *
   *  #     left   down  right  $        ||     pgdn    4     5     6    +
   *  [       ]      (     )    &        ||       `     1     2     3    \
   * lower  insert super shift bksp ctrl || alt space   fn    .     0    =
   */
  [_RS] = LAYOUT( /* [> RAISE <] */
    KC_EXLM, KC_AT,   KC_UP,   KC_DLR,  KC_PERC,                  KC_PGUP, KC_7,    KC_8,   KC_9, KC_BSPC,
    KC_LPRN, KC_LEFT, KC_DOWN, KC_RGHT, KC_RPRN,                  KC_PGDN, KC_4,    KC_5,   KC_6, KC_NUHS,
    KC_LBRC, KC_RBRC, KC_HASH, KC_LCBR, KC_RCBR, KC_CIRC, KC_AMPR,KC_ASTR, KC_1,    KC_2,   KC_3, KC_APP,
    KC_TRNS, KC_INS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_LALT, KC_TRNS,KC_TRNS,  KC_TRNS, KC_0, KC_DOT, KC_EQL ),
  /*
   * insert home   up  end   pgup       ||      up     F7    F8    F9   F10
   *  del   left  down right pgdn       ||     down    F4    F5    F6   F11
   *       volup             reset      ||             F1    F2    F3   F12
   *       voldn  super shift bksp ctrl || alt space   L0  prtsc scroll pause
   */
  [_LW] = LAYOUT( /* [> LOWER <] */
    KC_INS,  KC_HOME, KC_UP,   KC_END,  KC_PGUP,                   KC_UP,   KC_F7,   KC_F8,   KC_F9,   KC_F10  ,
    KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                   KC_DOWN, KC_F4,   KC_F5,   KC_F6,   KC_F11  ,
    KC_CAPS, KC_VOLU, KC_MUTE, KC_NO,   QK_BOOT, TG(_QW), TG(_CM), KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F12  ,
    KC_TRNS, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_LALT, KC_TRNS, KC_TRNS, TO(_HRM), KC_PSCR, KC_SCRL, KC_MPLY )
};