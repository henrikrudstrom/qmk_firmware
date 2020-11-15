#include QMK_KEYBOARD_H
#include "version.h"
// #include "keymap_german.h"
// #include "keymap_nordic.h"
// #include "keymap_french.h"
// #include "keymap_spanish.h"
// #include "keymap_hungarian.h"
// #include "keymap_swedish.h"
// #include "keymap_br_abnt2.h"
// #include "keymap_canadian_multilingual.h"
// #include "keymap_german_ch.h"
// #include "keymap_jp.h"
// #include "keymap_bepo.h"
// #include "keymap_italian.h"
// #include "keymap_slovenian.h"
// #include "keymap_danish.h"
#include "keymap_norwegian.h"
// #include "keymap_portuguese.h"
// #include "keymap_contributions.h"
// #include "keymap_czech.h"
// #include "keymap_russian.h"
// #include "keymap_uk.h"
// #include "keymap_estonian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
    NO_LSPO,
    NO_RSPC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     TG(1),              TG(1),              KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_Q,               KC_W,               KC_F,               LT(4, KC_P),        KC_B,               WEBUSB_PAIR,        KC_TRANSPARENT,     KC_J,               KC_L,               KC_U,               KC_Y,               KC_SCOLON,          KC_TRANSPARENT,
        KC_ESCAPE,          LSFT_T(KC_A),       LGUI_T(KC_R),       LALT_T(KC_S),       LCTL_T(KC_T),       KC_G,               KC_TRANSPARENT,     KC_TRANSPARENT,     KC_K,               RCTL_T(KC_N),       RALT_T(KC_E),       RGUI_T(KC_I),       RSFT_T(KC_O),       KC_BSPACE,
        LM(3, MOD_MEH),     KC_Z,               KC_X,               KC_C,               LT(3, KC_D),        KC_V,                                                       KC_M,               LT(3, KC_H),        KC_COMMA,           KC_DOT,             NO_BSLS,            LM(3, MOD_MEH),
        KC_LSHIFT,          KC_TRANSPARENT,     KC_TRANSPARENT,     LT(5, KC_SPACE),    LT(2, KC_SPACE),    KC_TRANSPARENT,                                             KC_TRANSPARENT,     LT(2, KC_SPACE),    LT(5, KC_SPACE),    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_RSHIFT,
                                                                    MT(MOD_HYPR, KC_TAB),LSFT_T(KC_ENTER),  KC_CAPSLOCK,                                                KC_CAPSLOCK,        RSFT_T(KC_SPACE),   MT(MOD_HYPR, KC_ENTER)),

    [1] = LAYOUT_moonlander(
        KC_ESCAPE,          KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_P,               KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_A,               KC_R,               KC_S,               KC_T,               KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_N,               KC_E,               KC_I,               KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_LSHIFT,          KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_D,               KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_H,               KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_RSHIFT,
        KC_LCTRL,           KC_LGUI,            KC_LALT,            KC_SPACE,           KC_SPACE,           KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_SPACE,           KC_SPACE,           KC_RALT,            KC_RGUI,            KC_RCTRL,
                                                                    KC_TAB,             KC_ENTER,           KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT),
    [2] = LAYOUT_moonlander(
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_TRANSPARENT,     NO_TILD,            NO_AT_MAC,          NO_LBRC,            NO_RBRC,            NO_COLN,            KC_TRANSPARENT,     KC_TRANSPARENT,     NO_GRV_MAC,         NO_DQUO,            NO_APOS_MAC,        NO_ASTR,            NO_CIRC,            KC_TRANSPARENT,
        KC_TRANSPARENT,     NO_AMPR,            NO_PIPE_MAC,        NO_LPRN,            NO_RPRN,            NO_SCLN,            KC_TRANSPARENT,     KC_TRANSPARENT,     NO_UNDS,            NO_PLUS,            NO_EQL,             NO_EXLM,            NO_SLSH,            KC_TRANSPARENT,
        KC_TRANSPARENT,     NO_PERC,            NO_DLR_MAC,         NO_LCBR,            NO_RCBR,            NO_HASH,                                                    NO_MINS,            NO_LESS_MAC,        NO_GRTR_MAC,        NO_QUES,            NO_BSLS_MAC,        KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT),

    [3] = LAYOUT_moonlander(
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_F1,              KC_F2,              KC_F3,              KC_F4,              KC_F5,              KC_TRANSPARENT,     KC_TRANSPARENT,     NO_PLUS,            KC_7,               KC_8,               KC_9,               NO_ASTR,            KC_TRANSPARENT,
        KC_TRANSPARENT,     LSFT_T(KC_F6),      LGUI_T(KC_F7),      LALT_T(KC_F8),      LCTL_T(KC_F9),      KC_F10,             KC_TRANSPARENT,     KC_TRANSPARENT,     NO_COMM,            RCTL_T(KC_4),       RALT_T(KC_5),       RGUI_T(KC_6),       RSFT_T(KC_0),       KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_F11,             KC_F12,             KC_F13,             KC_F14,             KC_F15,                                                     NO_MINS,            KC_1,               KC_2,               KC_3,               NO_BSLS,            KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT),

    [4] = LAYOUT_moonlander(
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_PGUP,            KC_TRANSPARENT,     KC_UP,              KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_PGDOWN,          KC_LEFT,            KC_DOWN,            KC_RIGHT,           KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_HOME,            KC_TRANSPARENT,     KC_END,             KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT),

    [5] = LAYOUT_moonlander(
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_TRANSPARENT,     LSFT_T(NO_ARNG),    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     RALT_T(NO_AE),      KC_TRANSPARENT,     RSFT_T(NO_OSTR),    KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                             KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT),
};

extern bool         g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) { rgb_matrix_enable(); }

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {{33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240},
           {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}},

    [1] = {{132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {12, 225, 241}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254},
           {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {12, 225, 241}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}, {132, 130, 254}},

    [2] = {{33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {33, 70, 240}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240},
           {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {33, 70, 240}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}},

    [3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {169, 120, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [4] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {169, 120, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {141, 255, 233}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {169, 120, 255}, {169, 120, 255}, {169, 120, 255}, {0, 0, 0}, {0, 0, 0}, {169, 120, 255}, {169, 120, 255}, {169, 120, 255}, {0, 0, 0}, {0, 0, 0}, {169, 120, 255}, {169, 120, 255}, {169, 120, 255}, {0, 0, 0}, {0, 0, 0}, {169, 120, 255}, {169, 120, 255}, {169, 120, 255}, {0, 0, 0}, {0, 0, 0}, {169, 120, 255}, {169, 120, 255}, {169, 120, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [5] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {146, 224, 255}, {146, 224, 255}, {146, 224, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {141, 255, 233}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [6] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {32, 255, 234}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {32, 255, 234}, {0, 0, 0}, {0, 0, 0}, {32, 255, 234}, {32, 255, 234}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [7] = {{33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {0, 204, 255}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {32, 255, 234}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240},
           {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {0, 204, 255}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {0, 204, 255}, {33, 70, 240}, {32, 255, 234}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}, {33, 70, 240}},

    [8] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {12, 225, 241}, {0, 0, 0}, {0, 0, 0}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {0, 0, 0}, {0, 0, 0}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {0, 0, 0}, {0, 0, 0}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {0, 0, 0}, {0, 0, 0}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {0, 204, 255}, {0, 0, 0}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {12, 225, 241}, {0, 0, 0}, {0, 0, 0}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {0, 0, 0}, {0, 0, 0}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {0, 0, 0}, {0, 0, 0}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {0, 0, 0}, {0, 0, 0}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {0, 204, 255}, {0, 0, 0}, {12, 225, 241}, {12, 225, 241}, {12, 225, 241}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [9] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 0, 0}, {0, 204, 255}, {0, 204, 255}, {0, 204, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

void rgb_matrix_indicators_user(void) {
    if (g_suspend_state || keyboard_config.disable_layer_led) {
        return;
    }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
        case 4:
            set_layer_color(4);
            break;
        case 5:
            set_layer_color(5);
            break;
        case 6:
            set_layer_color(6);
            break;
        case 7:
            set_layer_color(7);
            break;
        case 8:
            set_layer_color(8);
            break;
        case 9:
            set_layer_color(9);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case NO_LSPO:
            perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_8);
            return false;
        case NO_RSPC:
            perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_9);
            return false;
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }
    return true;
}
