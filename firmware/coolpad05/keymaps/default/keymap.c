#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT_ortho_1x1(
             KC_A, 
        KC_B,KC_C
    )
};