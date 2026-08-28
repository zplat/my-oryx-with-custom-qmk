#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
};



#define DUAL_FUNC_0 LT(7, KC_8)
#define DUAL_FUNC_1 LT(14, KC_9)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_Y,           KC_O,           KC_U,           KC_J,                                           KC_K,           KC_D,           KC_L,           KC_C,           KC_W,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_P,           KC_N,           KC_I,           KC_A,           KC_SCLN,                                        KC_M,           KC_H,           KC_T,           KC_S,           KC_R,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COMMA,       KC_LPRN,        KC_DOT,         KC_RPRN,        KC_SLASH,                                       KC_B,           KC_F,           KC_G,           KC_V,           KC_X,           KC_TRANSPARENT, 
                                                    OSL(1),         LT(4, KC_SPACE),                                KC_E,           OSL(2)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_0,     KC_PLUS,        KC_ASTR,        KC_EXLM,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HASH,        KC_AT,          ST_MACRO_1,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PIPE,        KC_LCBR,        KC_RCBR,        KC_MINUS,       KC_BSLS,                                        KC_GRAVE,       KC_QUES,        KC_LBRC,        KC_RBRC,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_PERC,        KC_SLASH,                                       KC_TRANSPARENT, KC_AMPR,        KC_LPRN,        KC_RPRN,        KC_UNDS,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RALT(KC_5),     KC_EQUAL,       KC_PLUS,        KC_MINUS,       KC_ASTR,        KC_BSPC,                                        KC_ENTER,       KC_D,           KC_L,           KC_C,           KC_W,           KC_TRANSPARENT, 
    RALT(RSFT(KC_4)),KC_6,           KC_4,           KC_0,           KC_2,           KC_J,                                           KC_K,           KC_3,           KC_1,           KC_5,           KC_7,           KC_TRANSPARENT, 
    RALT(KC_MINUS), KC_LABK,        KC_RABK,        KC_DOT,         KC_8,           KC_SLASH,                                       KC_B,           KC_9,           LSFT(KC_G),     KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_MS_WH_LEFT,  KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN1,     KC_TRANSPARENT,                                 KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TG(7),          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_END,         KC_PAGE_UP,     KC_PGDN,        KC_HOME,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT,        KC_UP,          KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_INSERT,      KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_F8)),LCTL(LSFT(KC_F9)),KC_TRANSPARENT,                                 KC_F1,          KC_F2,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F5,          DUAL_FUNC_0,    DUAL_FUNC_1,    KC_TRANSPARENT,                                 KC_GRAVE,       KC_DQUO,        KC_QUOTE,       KC_CIRC,        KC_TILD,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_F8),    LCTL(KC_F9),    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RIGHT_GUI,   KC_RIGHT_CTRL,  KC_RIGHT_SHIFT, KC_LEFT_ALT,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEH,         KC_HYPR,        KC_TRANSPARENT, KC_RIGHT_ALT,   KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,  HSV_74_255_255, HSV_169_255_255,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_N, KC_A, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_S, KC_H, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_H, KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_H, KC_T, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_C, KC_L, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_N, KC_I, LT(4, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_T, KC_S, KC_E, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_LPRN, KC_RPRN, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_V, KC_F, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_D, KC_L, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_C, KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_V, KC_G, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_N, KC_I, KC_A, COMBO_END};
const uint16_t PROGMEM combo14[] = { KC_I, KC_A, COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_H, KC_E, COMBO_END};
const uint16_t PROGMEM combo16[] = { KC_C, KC_E, COMBO_END};
const uint16_t PROGMEM combo17[] = { KC_L, KC_E, COMBO_END};
const uint16_t PROGMEM combo18[] = { KC_D, KC_E, COMBO_END};
const uint16_t PROGMEM combo19[] = { LT(4, KC_SPACE), KC_U, COMBO_END};
const uint16_t PROGMEM combo20[] = { KC_O, LT(4, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo21[] = { LT(4, KC_SPACE), KC_Y, COMBO_END};
const uint16_t PROGMEM combo22[] = { LT(4, KC_SPACE), KC_Q, COMBO_END};
const uint16_t PROGMEM combo23[] = { KC_A, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo24[] = { KC_F, KC_G, KC_V, COMBO_END};
const uint16_t PROGMEM combo25[] = { KC_Q, KC_Y, KC_O, COMBO_END};
const uint16_t PROGMEM combo26[] = { KC_W, KC_C, KC_L, COMBO_END};
const uint16_t PROGMEM combo27[] = { KC_K, KC_M, COMBO_END};
const uint16_t PROGMEM combo28[] = { KC_O, KC_I, COMBO_END};
const uint16_t PROGMEM combo29[] = { KC_U, KC_A, COMBO_END};
const uint16_t PROGMEM combo30[] = { KC_L, KC_T, COMBO_END};
const uint16_t PROGMEM combo31[] = { KC_D, KC_H, COMBO_END};
const uint16_t PROGMEM combo32[] = { KC_H, KC_T, KC_S, KC_R, COMBO_END};
const uint16_t PROGMEM combo33[] = { KC_LPRN, KC_DOT, KC_RPRN, COMBO_END};
const uint16_t PROGMEM combo34[] = { KC_RPRN, KC_A, COMBO_END};
const uint16_t PROGMEM combo35[] = { KC_SLASH, KC_B, COMBO_END};
const uint16_t PROGMEM combo36[] = { KC_DOT, KC_SLASH, KC_RPRN, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_Z),
    COMBO(combo1, ST_MACRO_2),
    COMBO(combo2, ST_MACRO_3),
    COMBO(combo3, KC_ENTER),
    COMBO(combo4, KC_COLN),
    COMBO(combo5, KC_BSPC),
    COMBO(combo6, KC_LEFT_CTRL),
    COMBO(combo7, KC_RIGHT_CTRL),
    COMBO(combo8, KC_LEFT_ALT),
    COMBO(combo9, KC_LEFT_ALT),
    COMBO(combo10, KC_EQUAL),
    COMBO(combo11, LCTL(KC_W)),
    COMBO(combo12, KC_DLR),
    COMBO(combo13, KC_TAB),
    COMBO(combo14, KC_ESCAPE),
    COMBO(combo15, KC_QUES),
    COMBO(combo16, ST_MACRO_4),
    COMBO(combo17, KC_AT),
    COMBO(combo18, KC_HASH),
    COMBO(combo19, KC_EXLM),
    COMBO(combo20, KC_ASTR),
    COMBO(combo21, KC_PLUS),
    COMBO(combo22, ST_MACRO_5),
    COMBO(combo23, KC_DELETE),
    COMBO(combo24, TG(3)),
    COMBO(combo25, OSL(5)),
    COMBO(combo26, OSL(5)),
    COMBO(combo27, LALT(LCTL(LSFT(KC_B)))),
    COMBO(combo28, ST_MACRO_6),
    COMBO(combo29, ST_MACRO_7),
    COMBO(combo30, ST_MACRO_8),
    COMBO(combo31, ST_MACRO_9),
    COMBO(combo32, ST_MACRO_10),
    COMBO(combo33, ST_MACRO_11),
    COMBO(combo34, LSFT(KC_DOT)),
    COMBO(combo35, KC_CAPS),
    COMBO(combo36, OSL(6)),
};







bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_GRAVE))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_GRAVE))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_MINUS));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W))SS_DELAY(100)  SS_TAP(X_Q)SS_DELAY(100)  SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_Q)SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F8));
        } else {
          unregister_code16(LSFT(KC_F8));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F9));
        } else {
          unregister_code16(LSFT(KC_F9));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
  }
  return true;
}
