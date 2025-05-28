#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_21_255_255,
  HSV_43_255_255,
  HSV_64_255_255,
  HSV_86_255_255,
  HSV_107_255_255,
  HSV_120_255_255,
  HSV_4_255_255,
  HSV_25_255_255,
  HSV_47_255_255,
  HSV_68_255_255,
  HSV_90_255_255,
  HSV_111_255_255,
  HSV_124_255_255,
  HSV_8_255_255,
  HSV_30_255_255,
  HSV_51_255_255,
  HSV_73_255_255,
  HSV_94_255_255,
  HSV_116_255_255,
  HSV_12_255_255,
  HSV_34_255_255,
  HSV_55_255_255,
  HSV_77_255_255,
  HSV_98_255_255,
  HSV_17_255_255,
  HSV_38_255_255,
  HSV_60_255_255,
  HSV_81_255_255,
  HSV_103_255_255,
  HSV_0_0_255,
  HSV_129_255_255,
  HSV_137_255_255,
  HSV_150_255_255,
  HSV_172_255_255,
  HSV_193_255_255,
  HSV_215_255_255,
  HSV_236_255_255,
  HSV_133_255_255,
  HSV_141_255_255,
  HSV_154_255_255,
  HSV_176_255_255,
  HSV_197_255_255,
  HSV_219_255_255,
  HSV_240_255_255,
  HSV_146_255_255,
  HSV_159_255_255,
  HSV_180_255_255,
  HSV_202_255_255,
  HSV_223_255_255,
  HSV_245_255_255,
  HSV_163_255_255,
  HSV_184_255_255,
  HSV_206_255_255,
  HSV_227_255_255,
  HSV_249_255_255,
  HSV_167_255_255,
  HSV_189_255_255,
  HSV_210_255_255,
  HSV_232_255_255,
  HSV_253_255_255,
};



#define DUAL_FUNC_0 LT(24, KC_F11)
#define DUAL_FUNC_1 LT(25, KC_F10)
#define DUAL_FUNC_2 LT(21, KC_A)
#define DUAL_FUNC_3 LT(26, KC_E)
#define DUAL_FUNC_4 LT(30, KC_N)
#define DUAL_FUNC_5 LT(26, KC_F3)
#define DUAL_FUNC_6 LT(32, KC_F2)
#define DUAL_FUNC_7 LT(25, KC_W)
#define DUAL_FUNC_8 LT(18, KC_3)
#define DUAL_FUNC_9 LT(21, KC_V)
#define DUAL_FUNC_10 LT(21, KC_S)
#define DUAL_FUNC_11 LT(24, KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,       KC_BSPC,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LBRC,                                        KC_RBRC,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_CAPS,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           CW_TOGG,                                                                        KC_APPLICATION, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT,        KC_RIGHT,       KC_ESCAPE,                                                                                                      TT(4),          KC_UP,          KC_DOWN,        KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_RIGHT_CTRL,  
    KC_SPACE,       TT(1),          TT(2),                          TT(3),          KC_ENTER,       KC_SPACE
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
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_BRIGHTNESS_UP,KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_BRIGHTNESS_DOWN,KC_NO,          
    KC_NO,          KC_NO,          KC_TRANSPARENT,                 KC_NO,          KC_NO,          KC_NO
  ),
  [3] = LAYOUT_moonlander(
    KC_ESCAPE,      DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,                                    DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,   DUAL_FUNC_11,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_UP,          KC_NO,          KC_INSERT,      KC_HOME,        KC_PAGE_UP,                                     KC_NO,          KC_NO,          KC_KP_SLASH,    KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_MINUS,    
    KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_DELETE,      KC_END,         KC_PGDN,                                                                        KC_NO,          KC_NO,          KC_KP_ASTERISK, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NUM,         KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_NO,          KC_NO,          KC_NO,          KC_KP_0,        KC_KP_DOT,      KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,                          KC_TRANSPARENT, KC_KP_ENTER,    KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    TO(0),          TO(1),          TO(2),          TO(3),          KC_NO,          TO(5),          TO(6),                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_PSCR,        KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [5] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_MS_BTN3,     KC_NO,          KC_MS_BTN4,     KC_MS_BTN5,     KC_MS_BTN6,                                     KC_MS_BTN7,     KC_MS_BTN8,     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_MS_WH_UP,    KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,  KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          TO(4),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [6] = LAYOUT_moonlander(
    HSV_0_255_255,  HSV_21_255_255, HSV_43_255_255, HSV_64_255_255, HSV_86_255_255, HSV_107_255_255,HSV_120_255_255,                                HSV_129_255_255,HSV_137_255_255,HSV_150_255_255,HSV_172_255_255,HSV_193_255_255,HSV_215_255_255,HSV_236_255_255,
    HSV_4_255_255,  HSV_25_255_255, HSV_47_255_255, HSV_68_255_255, HSV_90_255_255, HSV_111_255_255,HSV_124_255_255,                                HSV_133_255_255,HSV_141_255_255,HSV_154_255_255,HSV_176_255_255,HSV_197_255_255,HSV_219_255_255,HSV_240_255_255,
    HSV_8_255_255,  HSV_30_255_255, HSV_51_255_255, HSV_73_255_255, HSV_94_255_255, HSV_116_255_255,RGB_TOG,                                                                        TOGGLE_LAYER_COLOR,HSV_146_255_255,HSV_159_255_255,HSV_180_255_255,HSV_202_255_255,HSV_223_255_255,HSV_245_255_255,
    HSV_12_255_255, HSV_34_255_255, HSV_55_255_255, HSV_77_255_255, HSV_98_255_255, RGB_SLD,                                        RGB_MODE_FORWARD,HSV_163_255_255,HSV_184_255_255,HSV_206_255_255,HSV_227_255_255,HSV_249_255_255,
    HSV_17_255_255, HSV_38_255_255, HSV_60_255_255, HSV_81_255_255, HSV_103_255_255,HSV_0_0_255,                                                                                                    TO(4),          HSV_167_255_255,HSV_189_255_255,HSV_210_255_255,HSV_232_255_255,HSV_253_255_255,
    RGB_VAD,        RGB_HUD,        RGB_SPD,                        RGB_SPI,        RGB_HUI,        RGB_VAI
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

    [1] = { {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {21,255,255}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {129,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {129,255,255}, {0,0,0}, {21,255,255}, {0,0,0}, {0,255,255}, {129,255,255}, {21,255,255}, {21,255,255}, {0,0,0}, {0,255,255}, {129,255,255}, {0,0,0}, {21,255,255}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {193,255,255}, {193,255,255}, {0,0,0}, {0,0,0}, {129,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {193,255,255}, {129,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {129,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {129,255,255}, {193,255,255}, {193,255,255}, {129,255,255}, {0,0,0}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {193,255,255}, {0,0,255}, {0,0,0} },

    [4] = { {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {27,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {27,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {27,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {27,255,255}, {215,255,128}, {215,255,128}, {0,0,0}, {0,0,0}, {27,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {27,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {27,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {27,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255} },

    [6] = { {0,255,255}, {4,255,255}, {8,255,255}, {12,255,255}, {17,255,255}, {21,255,255}, {25,255,255}, {30,255,255}, {34,255,255}, {38,255,255}, {43,255,255}, {47,255,255}, {51,255,255}, {55,255,255}, {60,255,255}, {64,255,255}, {68,255,255}, {73,255,255}, {77,255,255}, {81,255,255}, {86,255,255}, {90,255,255}, {94,255,255}, {98,255,255}, {103,255,255}, {107,255,255}, {111,255,255}, {116,255,255}, {0,0,0}, {120,255,255}, {124,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {236,255,255}, {240,255,255}, {245,255,255}, {249,255,255}, {253,255,255}, {215,255,255}, {219,255,255}, {223,255,255}, {227,255,255}, {232,255,255}, {193,255,255}, {197,255,255}, {202,255,255}, {206,255,255}, {210,255,255}, {172,255,255}, {176,255,255}, {180,255,255}, {184,255,255}, {189,255,255}, {150,255,255}, {154,255,255}, {159,255,255}, {163,255,255}, {167,255,255}, {137,255,255}, {141,255,255}, {146,255,255}, {0,0,0}, {129,255,255}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255} },

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

bool is_caps_lock_on(void) {
    led_t led_state = host_keyboard_led_state();
    return led_state.caps_lock;
}

bool is_num_lock_on(void) {
    led_t led_state = host_keyboard_led_state();
    return led_state.num_lock;
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      if (is_caps_lock_on()) {
        rgb_matrix_set_color(2, 255, 255, 255);
      }
      if (is_caps_word_on()) {
        rgb_matrix_set_color(31, 255, 255, 255);
      }
      break;
    case 1:
      set_layer_color(1);
      if (is_caps_lock_on()) {
        rgb_matrix_set_color(2, 255, 255, 255);
      }
      if (is_caps_word_on()) {
        rgb_matrix_set_color(31, 255, 255, 255);
      }
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      if (is_num_lock_on()) {
        rgb_matrix_set_color(59, 255, 255, 255);
      }
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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F1);
        } else {
          unregister_code16(KC_F1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F13);
        } else {
          unregister_code16(KC_F13);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F2);
        } else {
          unregister_code16(KC_F2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F14);
        } else {
          unregister_code16(KC_F14);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F15);
        } else {
          unregister_code16(KC_F15);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F16);
        } else {
          unregister_code16(KC_F16);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F17);
        } else {
          unregister_code16(KC_F17);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F6);
        } else {
          unregister_code16(KC_F6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F18);
        } else {
          unregister_code16(KC_F18);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F7);
        } else {
          unregister_code16(KC_F7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F19);
        } else {
          unregister_code16(KC_F19);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F20);
        } else {
          unregister_code16(KC_F20);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F21);
        } else {
          unregister_code16(KC_F21);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F22);
        } else {
          unregister_code16(KC_F22);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F11);
        } else {
          unregister_code16(KC_F11);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F23);
        } else {
          unregister_code16(KC_F23);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F12);
        } else {
          unregister_code16(KC_F12);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F24);
        } else {
          unregister_code16(KC_F24);
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
    case HSV_21_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(21,255,255);
        }
        return false;
    case HSV_43_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(43,255,255);
        }
        return false;
    case HSV_64_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(64,255,255);
        }
        return false;
    case HSV_86_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(86,255,255);
        }
        return false;
    case HSV_107_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(107,255,255);
        }
        return false;
    case HSV_120_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(120,255,255);
        }
        return false;
    case HSV_4_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(4,255,255);
        }
        return false;
    case HSV_25_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(25,255,255);
        }
        return false;
    case HSV_47_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(47,255,255);
        }
        return false;
    case HSV_68_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(68,255,255);
        }
        return false;
    case HSV_90_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(90,255,255);
        }
        return false;
    case HSV_111_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(111,255,255);
        }
        return false;
    case HSV_124_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(124,255,255);
        }
        return false;
    case HSV_8_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(8,255,255);
        }
        return false;
    case HSV_30_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(30,255,255);
        }
        return false;
    case HSV_51_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(51,255,255);
        }
        return false;
    case HSV_73_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(73,255,255);
        }
        return false;
    case HSV_94_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(94,255,255);
        }
        return false;
    case HSV_116_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(116,255,255);
        }
        return false;
    case HSV_12_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(12,255,255);
        }
        return false;
    case HSV_34_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(34,255,255);
        }
        return false;
    case HSV_55_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(55,255,255);
        }
        return false;
    case HSV_77_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(77,255,255);
        }
        return false;
    case HSV_98_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(98,255,255);
        }
        return false;
    case HSV_17_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(17,255,255);
        }
        return false;
    case HSV_38_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(38,255,255);
        }
        return false;
    case HSV_60_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(60,255,255);
        }
        return false;
    case HSV_81_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(81,255,255);
        }
        return false;
    case HSV_103_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(103,255,255);
        }
        return false;
    case HSV_0_0_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,0,255);
        }
        return false;
    case HSV_129_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(129,255,255);
        }
        return false;
    case HSV_137_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(137,255,255);
        }
        return false;
    case HSV_150_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(150,255,255);
        }
        return false;
    case HSV_172_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(172,255,255);
        }
        return false;
    case HSV_193_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(193,255,255);
        }
        return false;
    case HSV_215_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(215,255,255);
        }
        return false;
    case HSV_236_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(236,255,255);
        }
        return false;
    case HSV_133_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(133,255,255);
        }
        return false;
    case HSV_141_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(141,255,255);
        }
        return false;
    case HSV_154_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(154,255,255);
        }
        return false;
    case HSV_176_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(176,255,255);
        }
        return false;
    case HSV_197_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(197,255,255);
        }
        return false;
    case HSV_219_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(219,255,255);
        }
        return false;
    case HSV_240_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(240,255,255);
        }
        return false;
    case HSV_146_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(146,255,255);
        }
        return false;
    case HSV_159_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(159,255,255);
        }
        return false;
    case HSV_180_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(180,255,255);
        }
        return false;
    case HSV_202_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(202,255,255);
        }
        return false;
    case HSV_223_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(223,255,255);
        }
        return false;
    case HSV_245_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(245,255,255);
        }
        return false;
    case HSV_163_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(163,255,255);
        }
        return false;
    case HSV_184_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(184,255,255);
        }
        return false;
    case HSV_206_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(206,255,255);
        }
        return false;
    case HSV_227_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(227,255,255);
        }
        return false;
    case HSV_249_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(249,255,255);
        }
        return false;
    case HSV_167_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(167,255,255);
        }
        return false;
    case HSV_189_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(189,255,255);
        }
        return false;
    case HSV_210_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(210,255,255);
        }
        return false;
    case HSV_232_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(232,255,255);
        }
        return false;
    case HSV_253_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(253,255,255);
        }
        return false;
  }
  return true;
}



