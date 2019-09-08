/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#undef DEBOUNCE
#define DEBOUNCE 12

#undef TAPPING_TERM
#define TAPPING_TERM 206

#define PERMISSIVE_HOLD

#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 30

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 30

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 2

#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED 1

#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 255

#define RGB_DISABLE_WHEN_USB_SUSPENDED true

#define DISABLE_RGB_MATRIX_DIGITAL_RAIN
#define DISABLE_RGB_MATRIX_ALPHAS_MODS
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define DISABLE_RGB_MATRIX_RAINDROPS
#define EECONFIG_RGB_MATRIX (uint32_t *)16
