#include QMK_KEYBOARD_H

#define QWERTY 0 // Base qwerty


// noteworthy
/*
* Leader key: Insert, 
* Leader , r: ruben.laguna@gmail.com
* Leader , e: Control + Command + e (global evernote search)

*/


// const qk_ucis_symbol_t ucis_symbol_table[] = UCIS_TABLE
// (
//  UCIS_SYM("poop", 0x1f4a9), 
//  UCIS_SYM("rofl", 0x1f923),
//  UCIS_SYM("kiss", 0x1f619),
//  UCIS_SYM("snowman", 0x2603),
//  UCIS_SYM("coffee", 0x2615),
//  UCIS_SYM("heart", 0x2764),
//  UCIS_SYM("bolt", 0x26a1),
//  UCIS_SYM("pi", 0x03c0),
//  UCIS_SYM("mouse", 0x1f401),
//  UCIS_SYM("micro", 0x00b5),
//  UCIS_SYM("tm", 0x2122),
//  UCIS_SYM("child", 0x1f476),
//  UCIS_SYM("family", 0x1F46A),
//  UCIS_SYM("joy", 0x1F602)
// );

/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS | BOOT |  BOOT  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Caps   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift (|   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift) |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          | `~   |LEAD  | Left | Right|                                         | Up   | Down |  [{  |  ]}  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Gui  | Alt  |         | Alt  | Gui  |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Ctrl |         | Ctrl |      |      |
*                                 | BkSp | Del  |------|         |------|Return| Space|
*                                 |      |      | Hyper|         | Hyper|      |      |
*                                 `--------------------'         `--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[QWERTY] = LAYOUT(
           KC_ESC, KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8,
           KC_EQL, KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,
           KC_TAB, KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,
           KC_LCTL,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,
           KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,
                   KC_GRV ,QK_LEAD,KC_LEFT,KC_RGHT,
			                      KC_LGUI,KC_LALT,
                                          KC_LCTL,
                           KC_BSPC,KC_DEL,KC_HYPR,
    KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,KC_PSCR ,KC_SCRL ,KC_PAUS, QK_REBOOT, QK_BOOT,
	KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,
	KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_BSLS,
	KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT,
	KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
		KC_UP  ,KC_DOWN,KC_LBRC,KC_RBRC,
           KC_RALT,KC_RGUI,
           KC_RCTL,
           KC_HYPR,KC_ENTER, KC_SPC
    )
};

