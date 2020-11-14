#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_norwegian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)

// henrikrudstrom
enum custom_keycodes {
  RGB_SLD = SAFE_RANGE, // can always be here
  TOGGLE_LAYER_COLOR,
  EPRM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_Q,             KC_W,             LT(5, KC_F),      LT(5,KC_P),       KC_B,             LGUI(KC_W),
    KC_ESCAPE,        LSFT_T(KC_A),     LGUI_T(KC_R),     LALT_T(KC_S),     LCTL_T(KC_T),     KC_G,
    MO(8),            KC_Z,             KC_X,             KC_C,             LT(3,KC_D),       KC_V,             LGUI(KC_E),
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   MO(6),            LT(2, KC_SPACE),
    KC_INSERT,        KC_SCROLLLOCK,
    KC_CAPSLOCK,
    HYPR_T(KC_TAB),   LSFT_T(KC_ENTER), KC_TRANSPARENT,

    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    LGUI(KC_W),       KC_J,             LT(7, KC_L),      KC_U,             KC_Y,             KC_SCOLON,        KC_TRANSPARENT,
                      KC_K,             RCTL_T(KC_N),     RALT_T(KC_E),     RGUI_T(KC_I),     RSFT_T(KC_O),     KC_BSPACE,
    LGUI(KC_E),       KC_M,             LT(4,KC_H),       KC_COMMA,         KC_DOT,           NO_SLSH,          MO(8),
                                        LT(2, KC_SPACE),  MO(6),            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_PAUSE,         KC_PSCREEN,
                                                                                                                KC_NUMLOCK,
                                                                            KC_TRANSPARENT,   LGUI(KC_SPACE),   HYPR_T(KC_ENTER)),
  //VSCODE
  [1] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    TO(0),            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   LGUI(KC_W),       KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,

    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   TO(0),
                      KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                        KC_TRANSPARENT,   LGUI(KC_E),       KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT),
  //Symbols
  [2] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   NO_TILD,          NO_AT_MAC,        NO_LBRC,          NO_RBRC,          NO_COLN,          KC_TRANSPARENT,
    KC_TRANSPARENT,   NO_AMPR,          NO_PIPE_MAC,      NO_LPRN,          NO_RPRN,          NO_SCLN,
    KC_TRANSPARENT,   KC_PERC,          NO_DLR_MAC,       NO_LCBR_MAC,      NO_RCBR_MAC,      KC_HASH,          KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,

    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   NO_GRV_MAC,       NO_QUO2,          NO_APOS_MAC,      NO_ASTR,          NO_CIRC,          KC_TRANSPARENT,
                      NO_UNDS,          NO_PLUS,          NO_EQL,           KC_EXLM,          NO_SLSH,         KC_TRANSPARENT,
    KC_TRANSPARENT,   NO_MINS,          NO_LESS_MAC,      NO_GRTR_MAC,      NO_QUES,          NO_BSLS_MAC,        KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT),
  //Numpad
  [3] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,

    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_KP_PLUS,       KC_KP_7,          KC_KP_8,          KC_KP_9,          KC_KP_ASTERISK,   KC_TRANSPARENT,
                      KC_KP_DOT,        RCTL_T(KC_KP_4),  RALT_T(KC_KP_5),  RGUI_T(KC_KP_6),  RSFT_T(KC_0),     KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_KP_MINUS,      KC_KP_1,          KC_KP_2,          KC_KP_3,          KC_SLASH,         KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT),
  //Function keys
  [4] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_F1,            KC_F2,            KC_F3,            KC_F4,            KC_F5,            KC_TRANSPARENT,
    KC_TRANSPARENT,   LSFT_T(KC_F6),    LGUI_T(KC_F7),    LALT_T(KC_F8),    LCTL_T(KC_F9),    KC_F10,
    KC_TRANSPARENT,   KC_F11,           KC_F12,           KC_F13,           KC_F14,           KC_F15,           KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,

    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                      KC_TRANSPARENT,   KC_RCTRL,         KC_RALT,          KC_RGUI,         KC_RSHIFT,        KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                           KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT),
  //Navigation
  [5] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_NO,            KC_NO,            KC_NO,            KC_TRANSPARENT,   KC_NO,            KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_LSHIFT,        KC_LGUI,          KC_LALT,          LCTL_T(KC_NO),    KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,

    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_PGUP,          LALT(KC_LEFT),    KC_UP,            LALT(KC_RIGHT),   LCTL(KC_U),         KC_TRANSPARENT,
                      KC_PGDOWN,        KC_LEFT,          KC_DOWN,          KC_RIGHT,         LCTL(KC_D),            KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_NO,            KC_HOME,          KC_NO,            KC_END,           KC_NO,            KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT),


  //scandinavian characters
  [6] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   LSFT_T(NO_AA),    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,


    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                      KC_TRANSPARENT,   KC_TRANSPARENT,   RALT_T(NO_AE),    KC_TRANSPARENT,   RALT_T(NO_OSLH),   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT),
  //mouse
  [7] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_WH_L,          KC_MS_UP,         KC_WH_R,          KC_WH_U,          KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_MS_LEFT,       KC_MS_DOWN,       KC_MS_RIGHT,      KC_WH_D,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_MS_BTN1,
    KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_MS_BTN2,       KC_TRANSPARENT,   KC_TRANSPARENT,

    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                      KC_TRANSPARENT,   KC_TRANSPARENT,   KC_MS_ACCEL0,     KC_MS_ACCEL1,     KC_MS_ACCEL2,     KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT),
  // meh layer
  [8] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   MEH(KC_F1),       MEH(KC_F2),       MEH(KC_F3),       MEH(KC_F4),      MEH(KC_F5),      KC_TRANSPARENT,
    KC_TRANSPARENT,   MEH(KC_F11),      MEH(KC_F12),      MEH(KC_F13),      MEH(KC_F14),     MEH(KC_F15),
    KC_TRANSPARENT,   MEH(KC_1),        MEH(KC_2),        MEH(KC_3),        MEH(KC_4),       MEH(KC_5),       KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   MO(9),
    KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,

    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   MEH(KC_F6),       MEH(KC_F7),       MEH(KC_F8),       MEH(KC_F9),       MEH(KC_F10),     KC_TRANSPARENT,
                      MEH(KC_F16),      MEH(KC_F17),      MEH(KC_F18),      MEH(KC_F19),      MEH(KC_F20),     KC_TRANSPARENT,
    KC_TRANSPARENT,   MEH(KC_6),        MEH(KC_7),        MEH(KC_8),        MEH(KC_9),        MEH(KC_0),       KC_TRANSPARENT,
                                        MO(9),   KC_TRANSPARENT,            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT),

  // hypr layer
  [9] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   HYPR(KC_F1),      HYPR(KC_F2),      HYPR(KC_F3),      HYPR(KC_F4),      HYPR(KC_F5),      KC_TRANSPARENT,
    KC_TRANSPARENT,   HYPR(KC_F11),     HYPR(KC_F12),     HYPR(KC_F13),     HYPR(KC_F14),     HYPR(KC_F15),
    KC_TRANSPARENT,   HYPR(KC_1),       HYPR(KC_2),       HYPR(KC_3),       HYPR(KC_4),       HYPR(KC_5),       KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,

    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   HYPR(KC_F6),      HYPR(KC_F7),      HYPR(KC_F8),      HYPR(KC_F9),      HYPR(KC_F10),     KC_TRANSPARENT,
                      HYPR(KC_F16),     HYPR(KC_F17),     HYPR(KC_F18),     HYPR(KC_F19),     HYPR(KC_F20),     KC_TRANSPARENT,
    KC_TRANSPARENT,   HYPR(KC_6),       HYPR(KC_7),       HYPR(KC_8),       HYPR(KC_9),       HYPR(KC_0),       KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;
bool disable_layer_color = 0;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}
#define CLR_NONE {0,0,0}
#define CLR_BLUE {141,255,233}
#define CLR_REDD {14,255,255}
#define CLR_WITE {30,96,255}
#define CLR_YELL {33,255,255}
const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_BLUE, CLR_BLUE, CLR_BLUE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
                      CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_BLUE, CLR_BLUE, CLR_BLUE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE },


    [1] = { CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_BLUE, CLR_BLUE, CLR_BLUE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
                      CLR_BLUE, CLR_REDD, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_BLUE, CLR_BLUE, CLR_BLUE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
                      CLR_BLUE, CLR_REDD, CLR_NONE, CLR_NONE },

    [2] = { CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_REDD, CLR_REDD, CLR_REDD, CLR_REDD, CLR_REDD,
            CLR_REDD, CLR_REDD, CLR_REDD, CLR_REDD, CLR_REDD,
            CLR_REDD, CLR_REDD, CLR_REDD, CLR_REDD, CLR_REDD,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_REDD, CLR_REDD, CLR_REDD, CLR_REDD, CLR_REDD,
            CLR_REDD, CLR_REDD, CLR_REDD, CLR_REDD, CLR_REDD,
            CLR_REDD, CLR_REDD, CLR_REDD, CLR_REDD, CLR_REDD,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE },

    [3] = { CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_WITE, CLR_YELL, CLR_YELL, CLR_YELL, CLR_WITE,
            CLR_WITE, CLR_YELL, CLR_YELL, CLR_YELL, CLR_YELL,
            CLR_WITE, CLR_YELL, CLR_YELL, CLR_YELL, CLR_WITE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE },

    [4] = { CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_BLUE, CLR_BLUE, CLR_BLUE, CLR_BLUE, CLR_BLUE,
            CLR_BLUE, CLR_BLUE, CLR_BLUE, CLR_BLUE, CLR_BLUE,
            CLR_BLUE, CLR_BLUE, CLR_BLUE, CLR_BLUE, CLR_BLUE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE },

    [5] = { CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_BLUE, CLR_YELL, CLR_REDD, CLR_YELL, CLR_NONE,
            CLR_BLUE, CLR_REDD, CLR_REDD, CLR_REDD, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_BLUE, CLR_NONE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE },


    [6] = { CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_REDD, CLR_NONE, CLR_REDD,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_REDD,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE },

    [7] = { CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_BLUE, CLR_YELL, CLR_REDD, CLR_YELL, CLR_NONE,
            CLR_BLUE, CLR_REDD, CLR_REDD, CLR_REDD, CLR_NONE,
            CLR_NONE, CLR_BLUE, CLR_NONE, CLR_BLUE, CLR_NONE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE },

    [8] = { CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_YELL, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_YELL, CLR_YELL, CLR_YELL, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_REDD, CLR_REDD, CLR_NONE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_YELL, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_YELL, CLR_YELL, CLR_YELL, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_REDD, CLR_REDD, CLR_NONE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE },
    [9] = { CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_WITE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_WITE, CLR_WITE, CLR_WITE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_YELL, CLR_YELL, CLR_NONE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_WITE, CLR_NONE, CLR_NONE,
            CLR_NONE, CLR_WITE, CLR_WITE, CLR_WITE, CLR_NONE,
            CLR_NONE, CLR_NONE, CLR_YELL, CLR_YELL, CLR_NONE,
                      CLR_NONE, CLR_NONE, CLR_NONE, CLR_NONE },
};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        rgb_matrix_set_color( i, rgb.r, rgb.g, rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || disable_layer_color) { return; }
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
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case RGB_TOG:
  if (record->event.pressed) {
    if (rgb_matrix_config.val) {
      rgb_matrix_sethsv(rgb_matrix_config.hue, rgb_matrix_config.sat, 0);
    } else {
      rgb_matrix_sethsv(rgb_matrix_config.hue, rgb_matrix_config.sat, 255);
    }
  }
  return false;
    case TOGGLE_LAYER_COLOR:
      if (record->event.pressed) {
        disable_layer_color ^= 1;
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 8:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
