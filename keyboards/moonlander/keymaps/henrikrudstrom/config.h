/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef DEBOUNCE
#define DEBOUNCE 15

#undef TAPPING_TERM
#define TAPPING_TERM 175
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

#define FIRMWARE_VERSION u8"vKqqa/y97jB"
#define RGB_MATRIX_STARTUP_SPD 60
