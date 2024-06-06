/* Copyright 2022 filmstarr <https://github.com/filmstarr>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
 #include QMK_KEYBOARD_H

enum layer_names {
    _LAY0,
    _LAY1,
    _LAY2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
       L0:
       ┌───┬───┬───┬───┐   ┌───┐
       │MO1│Prv│Ply│Nxt│   │Mut│
       └───┴───┴───┴───┘   └───┘
       L1:
       ┌───┬───┬───┬───┐   ┌───┐
       │   │Hud│Tog│Mod│   │   │
       └───┴───┴───┴───┘   └───┘
*/
    [_LAY0] = LAYOUT(
        MO(_LAY1),   KC_MPRV,    KC_MPLY,    TO(_LAY1),     C(S(KC_M))
    ),
    [_LAY1] = LAYOUT(
        KC_TRNS,     RGB_HUD,    RGB_TOG,    TO(_LAY2),     KC_ENT
    ),
    [_LAY2] = LAYOUT(
        KC_TRNS,     RGB_HUD,    RGB_TOG,    TO(_LAY0),     KC_MUTE
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_LAY0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(G(C(KC_LEFT)), G(C(KC_RIGHT))) },
    [_LAY1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_LAY2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT) }
};
#endif
