#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  KC_COMMA_LBRACE,
  KC_DOT_RBRACE,
  KC_LBRACKET_RBRACKET,
  KC_LANGLEBR_RANGLEBR
};

// Auto-shift:
// KC_ASTG,          KC_ASDN,       KC_ASUP,       KC_ASRP

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,         KC_1,          KC_2,          KC_3,         KC_4,          KC_5,             KC_6,                                                        KC_7,                  KC_8,           KC_9,          KC_0,             KC_MINUS,        KC_EQUAL,           KC_BSPACE,
    KC_TAB,           KC_Q,          KC_W,          KC_E,         KC_R,          KC_T,             KC_LANGLEBR_RANGLEBR,                                        KC_BSLASH,             KC_Y,           KC_U,          KC_I,             KC_O,            KC_P,               KC_SLASH,
    LT(1,KC_ESCAPE),  LCTL_T(KC_A),  LALT_T(KC_S),  LGUI_T(KC_D), LSFT_T(KC_F),  KC_G,             KC_NO,                                                       KC_LBRACKET_RBRACKET,  KC_H,           LSFT_T(KC_J),  LGUI_T(KC_K),     LALT_T(KC_L),    LCTL_T(KC_SCOLON),  LT(2,KC_QUOTE),
    SH_MON,           KC_Z,          KC_X,          KC_C,         KC_V,          KC_B,                                                                                                 KC_N,           KC_M,          KC_COMMA_LBRACE,  KC_DOT_RBRACE,   KC_UP,              SH_MON,
    KC_NO,            KC_NO,         KC_NO,         MO(1),        MO(2),         KC_AUDIO_VOL_UP,                                                                                      KC_AUDIO_MUTE,  MO(1),         KC_DELETE,        KC_LEFT,         KC_DOWN,            KC_RIGHT,
                                                                                 LT(2,KC_SPACE),   KC_NO,                 KC_AUDIO_VOL_DOWN,          KC_NO,    KC_ENTER,              LT(1,KC_SPACE)
  ),
  [1] = LAYOUT_moonlander(
    KC_NO,            KC_F1,         KC_F2,         KC_F3,        KC_F4,         KC_F5,            KC_F6,                                                       KC_NO,                 KC_NO,          KC_NO,          KC_NO,           KC_NO,           KC_NO,              KC_NO,
    KC_NO,            KC_NO,         KC_MS_BTN2,    KC_MS_UP,     KC_MS_BTN1,    KC_MS_WH_DOWN,    KC_MS_WH_LEFT,                                               KC_NO,                 KC_NO,          KC_MS_BTN1,     KC_NO,           KC_MS_BTN2,      KC_NO,              KC_NO,
    KC_NO,            KC_PGUP,       KC_MS_LEFT,    KC_MS_DOWN,   KC_MS_RIGHT,   KC_MS_WH_UP,      KC_MS_WH_RIGHT,                                              KC_NO,                 KC_NO,          KC_LSHIFT,      KC_LGUI,         KC_LALT,         KC_LCTRL,           KC_NO,
    SH_MON,           KC_PGDOWN,     KC_MAC_CUT,    KC_MAC_COPY,  KC_MAC_PASTE,  KC_NO,                                                                                                KC_NO,          KC_MS_LEFT,     KC_MS_UP,        KC_MS_DOWN,      KC_MS_RIGHT,        SH_MON,
    KC_NO,            KC_NO,         KC_NO,         KC_NO,        KC_NO,         RGB_MOD,                                                                                              RGB_TOG,        KC_NO,          KC_NO,           KC_NO,           KC_NO,              KC_NO,
                                                                                 RGB_VAD,          RGB_VAI,               TOGGLE_LAYER_COLOR,         RGB_SLD,  RGB_SPD,               RGB_SPI
  ),
  [2] = LAYOUT_moonlander(
    KC_NO,            KC_NO,         KC_NO,         KC_NO,        KC_NO,         KC_NO,            KC_NO,                                                       KC_F7,                 KC_F8,          KC_F9,          KC_F10,          KC_F11,          KC_F12,             KC_DELETE,
    KC_NO,            KC_NO,         KC_NO,         KC_NO,        KC_NO,         KC_NO,            KC_NO,                                                       KC_NO,                 KC_MAC_CUT,     LALT(KC_LEFT),  KC_UP,           LALT(KC_RIGHT),  KC_NO,              KC_NO,
    KC_NO,            KC_LCTRL,      KC_LALT,       KC_LGUI,      KC_LSHIFT,     KC_NO,            KC_NO,                                                       KC_NO,                 KC_MAC_COPY,    KC_LEFT,        KC_DOWN,         KC_RIGHT,        KC_PGUP,            KC_NO,
    SH_MON,           KC_LEFT,       KC_UP,         KC_DOWN,      KC_RIGHT,      KC_NO,                                                                                                KC_MAC_CUT,     LGUI(KC_LEFT),  KC_NO,           LGUI(KC_RIGHT),  KC_PGDOWN,          SH_MON,
    KC_NO,            KC_NO,         KC_NO,         KC_NO,        KC_NO,         RGB_MOD,                                                                                              KC_MAC_PASTE,   KC_NO,          KC_NO,           KC_NO,           KC_NO,              KC_NO,
                                                                                 RGB_SAD,          RGB_SAI,               MOON_LED_LEVEL,             RGB_SLD,  RGB_HUD,               RGB_HUI
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_COMMA_LBRACE:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSHIFT)) {
          register_code(KC_LBRACKET);
        } else {
          register_code(KC_COMMA);
        }
      } else {
        unregister_code(KC_LBRACKET);
        unregister_code(KC_COMMA);
      }
      return false;
    case KC_DOT_RBRACE:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSHIFT)) {
          register_code(KC_RBRACKET);
        } else {
          register_code(KC_DOT);
        }
      } else {
        unregister_code(KC_RBRACKET);
        unregister_code(KC_DOT);
      }
      return false;
    case KC_LBRACKET_RBRACKET: {
      static bool we_unshifted = false;
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSHIFT)) {
          we_unshifted = true;
          unregister_code(KC_LSHIFT);
          register_code(KC_RBRACKET);
        } else {
          register_code(KC_LBRACKET);
        }
      } else {
        if (we_unshifted) {
          we_unshifted = false;
          register_code(KC_LSHIFT);
        }
        unregister_code(KC_RBRACKET);
        unregister_code(KC_LBRACKET);
      }
      return false;
    }
    case KC_LANGLEBR_RANGLEBR: {
      static bool we_shifted = false;
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSHIFT)) {
          register_code(KC_DOT);
        } else {
          we_shifted = true;
          register_code(KC_LSHIFT);
          register_code(KC_COMMA);
        }
      } else {
        if (we_shifted) {
          we_shifted = false;
          unregister_code(KC_LSHIFT);
        }
        unregister_code(KC_DOT);
        unregister_code(KC_COMMA);
      }
      return false;
    }
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
