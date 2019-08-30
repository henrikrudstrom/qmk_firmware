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

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE, // can always be here
  TOGGLE_LAYER_COLOR,
  EPRM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_Q,             KC_W,             KC_F,             LT(4,KC_P),       KC_B,             KC_TRANSPARENT,
    KC_BSPACE,        LSFT_T(KC_A),     LGUI_T(KC_R),     LALT_T(KC_S),     LCTL_T(KC_T),     KC_G,
    LT(5,KC_DELETE),  KC_Z,             KC_X,             KC_C,             LT(2,KC_D),       KC_V,             KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   LT(6, KC_ESCAPE), LT(1,KC_SPACE),
    KC_INSERT,        KC_SCROLLLOCK,
    KC_CAPSLOCK,
    KC_TAB,           KC_ENTER,         KC_TRANSPARENT,
    
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_J,             KC_L,             KC_U,             KC_Y,             KC_SCOLON,        KC_TRANSPARENT,
                      KC_K,             RCTL_T(KC_N),     RALT_T(KC_E),     RGUI_T(KC_I),     RSFT_T(KC_O),     KC_ESCAPE,
    KC_TRANSPARENT,   KC_M,             LT(3,KC_H),       KC_COMMA,         KC_DOT,           NO_MINS,          MO(5),
                                        LT(1,KC_SPACE),   LT(6, KC_ESCAPE), KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_PAUSE,         KC_PSCREEN,
                                                                                                                KC_NUMLOCK,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_KP_ENTER),
  //Symbols
  [1] = LAYOUT_ergodox(
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
  [2] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                            
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   TO(0),
    KC_TRANSPARENT,   KC_KP_PLUS,       KC_KP_7,          KC_KP_8,          KC_KP_9,          KC_KP_ASTERISK,   KC_TRANSPARENT,
                      KC_KP_DOT,        RCTL_T(KC_KP_4),  RALT_T(KC_KP_5),  RGUI_T(KC_KP_6),  RSFT_T(KC_0),     KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_KP_MINUS,      KC_KP_1,          KC_KP_2,          KC_KP_3,          KC_SLASH,         KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT),
  //Function keys
  [3] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_F1,            KC_F2,            KC_F3,            KC_F4,            KC_F5,            KC_TRANSPARENT,
    KC_TRANSPARENT,   LSFT_T(KC_F6),    LCTL_T(KC_F7),    LALT_T(KC_F8),    LGUI_T(KC_F9),    KC_F10,
    KC_TRANSPARENT,   KC_F11,           KC_F12,           KC_F13,           KC_F14,           KC_F15,           KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                      KC_TRANSPARENT,   RGUI_T(KC_NO),    KC_RALT,          KC_RCTRL,         KC_RSHIFT,        KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT),
  //Navigation
  [4] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_NO,            KC_NO,            KC_NO,            KC_TRANSPARENT,   KC_NO,            KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_LSHIFT,        KC_LCTRL,         KC_LALT,          LGUI_T(KC_NO),    KC_TRANSPARENT, 
    KC_TRANSPARENT,   LGUI(KC_Z),       LGUI(KC_X),       LGUI(KC_C),       LGUI(KC_V),       LGUI(KC_V),       KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_PGUP,          LALT(KC_LEFT),    KC_UP,            LALT(RCTL(KC_RIGHT)),KC_NO,         KC_TRANSPARENT,
                      KC_PGDOWN,        KC_LEFT,          KC_DOWN,          KC_RIGHT,         KC_NO,            KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_NO,            KC_HOME,          KC_NO,            KC_END,           KC_NO,            KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT),


  //Windows
  [5] = LAYOUT_ergodox(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_NO,            KC_NO,            HYPR(KC_UP),      KC_NO,            KC_NO,            KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_NO,            HYPR(KC_LEFT),    HYPR(KC_DOWN),    HYPR(KC_RIGHT),            KC_NO, 
    KC_TRANSPARENT,   KC_NO,            KC_HYPR,            KC_1,       KC_2,            KC_NO,            KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,  KC_TRANSPARENT,
    
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_NO,            KC_NO,            HYPR(KC_UP),      KC_NO,            KC_NO,            KC_TRANSPARENT,
                      KC_NO,            HYPR(KC_LEFT),    HYPR(KC_DOWN),    HYPR(KC_RIGHT),   KC_NO,            KC_NO,
    KC_TRANSPARENT,   KC_NO,            KC_NO,            HYPR(KC_1),       HYPR(KC_2),            KC_NO,            KC_TRANSPARENT,
                                        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,
                                                                            KC_TRANSPARENT,   KC_TRANSPARENT,  KC_TRANSPARENT),

                                                                            //Numpad
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
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;
bool disable_layer_color = 0;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {30,96,255}, {33,255,255}, {33,255,255}, {33,255,255}, {30,96,255}, {30,96,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {30,96,255}, {33,255,255}, {33,255,255}, {33,255,255}, {30,96,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {33,255,255}, {14,255,255}, {33,255,255}, {0,0,0}, {141,255,233}, {14,255,255}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {141,255,233}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
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
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
