#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,       KC_BSPC,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LBRC,                                        KC_RBRC,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_CAPS,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           CW_TOGG,                                                                        KC_QUOTE,       KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_ENTER,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT,        KC_RIGHT,       KC_ESCAPE,                                                                                                      TT(3),          KC_UP,          KC_DOWN,        KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_RIGHT_CTRL,  
    KC_SPACE,       TD(DANCE_0),    KC_AUDIO_VOL_UP,                TT(2),          TT(1),          KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_DELETE,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_UP,          KC_NO,          KC_INSERT,      KC_HOME,        KC_PAGE_UP,                                     KC_NO,          KC_NO,          KC_KP_SLASH,    KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_MINUS,    
    KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_DELETE,      KC_END,         KC_PGDN,                                                                        KC_NO,          KC_NO,          KC_KP_ASTERISK, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NUM,         KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_NO,          KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_F17,         KC_F18,                                         KC_F19,         KC_F20,         KC_F21,         KC_F22,         KC_F23,         KC_F24,         KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_PSCR,        KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          RGB_VAD,        RGB_VAI,        KC_NO,                                          KC_NO,          TG(4),          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,                          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_MS_BTN3,     KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_MS_WH_UP,    KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,  KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

    [1] = { {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {215,255,128}, {0,255,255}, {0,255,255} },

    [2] = { {129,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {129,255,255}, {0,0,0}, {27,255,255}, {0,0,0}, {0,255,255}, {129,255,255}, {27,255,255}, {27,255,255}, {0,0,0}, {0,255,255}, {129,255,255}, {0,0,0}, {27,255,255}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {215,255,128}, {215,255,128}, {0,0,0}, {215,255,128}, {129,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {215,255,128}, {129,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {129,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {129,255,255}, {215,255,128}, {215,255,128}, {129,255,255}, {0,0,0}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {215,255,128}, {0,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {0,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {0,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {86,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {215,255,128}, {0,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {215,255,128} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {27,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {27,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {27,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,128}, {215,255,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool CAPS_WORD_STATE = false;

void caps_word_set_user(bool active) { // detect if caps word is active, and set global above variable accordingly
  CAPS_WORD_STATE = active;
}

void check_indicator_keys(void) {
  led_t led_state = host_keyboard_led_state();
  int layer = biton32(layer_state);
  if (led_state.caps_lock && ((layer == 0) || (layer == 1))) { // Check if caps lock is active, and change key LED
    rgb_matrix_set_color(2, RGB_WHITE);
  }
  if (led_state.num_lock && (layer == 2)) { // Check if num lock is active, and change key LED
    rgb_matrix_set_color(59, RGB_WHITE);
  }
    if (CAPS_WORD_STATE && ((layer == 0) || (layer == 1))) { // Check if caps word is active, and change key LED
    rgb_matrix_set_color(31, RGB_WHITE);
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  check_indicator_keys();
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_AUDIO_VOL_DOWN);
        tap_code16(KC_AUDIO_VOL_DOWN);
        tap_code16(KC_AUDIO_VOL_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_AUDIO_VOL_DOWN);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_AUDIO_VOL_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_AUDIO_MUTE); break;
        case DOUBLE_TAP: register_code16(KC_AUDIO_VOL_DOWN); register_code16(KC_AUDIO_VOL_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_AUDIO_VOL_DOWN); register_code16(KC_AUDIO_VOL_DOWN);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_AUDIO_MUTE); break;
        case DOUBLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
