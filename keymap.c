#include QMK_KEYBOARD_H

enum sofle_layers {
    BASE,
    MATH,
    ARROW,
    LOL,
    MOUSE,
    EMPTY,
    GAME
};

// enum custom_keycodes {
// };


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* BASE
    * .-----------------------------------------------------------------.                                     .-----------------------------------------------------------------.
    * | TG(GAME) |  Zone-1  |  Zone-2  |  Zone-3  |          |          |                                     |          |          |          |          |          |          |
    * |----------+----------+----------+----------+----------+----------|                                     |----------+----------+----------+----------+----------+----------|
    * | Caps-lock|     Q    |     W    |    E     |    R     |    T     |                                     |     Y    |     U    |     I    |     O    |     P    |          |
    * |----------+----------+----------+----------+----------+----------|                                     |----------+----------+----------+----------+----------+----------|
    * |    Tab   |  SFT-A   |  Crt-S   |  GUI-D   |   ALT-F  |    G     |----------.               .----------|     H    |     J    |     K    |  Crt-L   |  SFT-BS  |     '    |
    * |----------+----------+----------+----------+----------+----------|   BOOT   |               |   BOOT   |----------+----------+----------+----------+----------+----------|
    * |    LOL   |     Z    |     X    |    C     |    V     |    B     |----------|               |----------|     N    |     M    |     ,    |     .    |     /    |     `    |
    * '-----------------------------------------------------------------/          /                \          \----------------------------------------------------------------'
    *                    |          |          |   MOUSE   | MATH-Esc| / Crt-Ent  /                  \ C_S-Spe  \ | Arrow-Del|          |          |          |
    *                    |          |          |          |          |/          /                    \          \|          |          |          |          |
    *                    '------------------------------------------------------'                      '------------------------------------------------------'
    */
    [BASE] = LAYOUT(
        TG(GAME)  ,LCAG(KC_1)  ,LCAG(KC_2)  ,LCAG(KC_3)  ,XXXXXXX    ,XXXXXXX   ,                                      XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX     ,XXXXXXX       ,XXXXXXX   ,
        KC_CAPS   ,KC_Q        ,KC_W        ,KC_E        ,KC_R       ,KC_T      ,                                      KC_Y      ,KC_U      ,KC_I      ,KC_O        ,KC_P          ,XXXXXXX   ,
        KC_TAB    ,SFT_T(KC_A) ,KC_S        ,GUI_T(KC_D) ,ALT_T(KC_F),KC_G      ,                                      KC_H      ,KC_J      ,KC_K      ,KC_L        ,SFT_T(KC_BSPC),KC_QUOT   ,
        XXXXXXX   ,KC_Z        ,KC_X        ,KC_C        ,KC_V       ,KC_B      , QK_BOOT  ,                 QK_BOOT  ,KC_N      ,KC_M      ,KC_COMMA  ,KC_DOT      ,KC_SLSH       ,KC_GRV    ,
                    XXXXXXX    ,XXXXXXX   ,MO(MOUSE)  ,LT(MATH, KC_ESC)   ,CTL_T(KC_ENT),                RCS_T(KC_SPC),LT(ARROW,KC_DEL),XXXXXXX   ,XXXXXXX   ,XXXXXXX   
    ),

    /* MATH
    * .-----------------------------------------------------------------.                                     .-----------------------------------------------------------------.
    * |          |    F1    |    F2    |    F3    |    F4    |    F5    |                                     |    F6    |    F7    |    F8    |    F9    |    F10   |    F11   |
    * |----------+----------+----------+----------+----------+----------|                                     |----------+----------+----------+----------+----------+----------|
    * |          |     1    |     2    |     3    |     4    |     5    |                                     |     6    |     7    |     8    |     9    |     0    |    F12   |
    * |----------+----------+----------+----------+----------+----------|                                     |----------+----------+----------+----------+----------+----------|
    * |          |     !    |     @    |     #    |     $    |     %    |----------.               .----------|     ^    |     &    |     *    |     (    |     )    |     |    |
    * |----------+----------+----------+----------+----------+----------|          |               |          |----------+----------+----------+----------+----------+----------|
    * |          |     =    |     -    |     +    |     {    |     }    |----------|               |----------|     [    |     ]    |     ;    |     :    |     \    |          |
    * '-----------------------------------------------------------------/          /                \          \----------------------------------------------------------------'
    *                    |          |          |          |          | /          /                  \C_S-Space \ |    SFT   |          |          |          |
    *                    |          |          |          |          |/          /                    \          \|          |          |          |          |
    *                    '------------------------------------------------------'                      '------------------------------------------------------'
    */
    [MATH] = LAYOUT(
        XXXXXXX   ,KC_F1     ,KC_F2     ,KC_F3     ,KC_F4     ,KC_F5     ,                                      KC_F6     ,KC_F7     ,KC_F8       ,KC_F9     ,KC_F10    ,KC_F11    ,
        XXXXXXX   ,KC_1      ,KC_2      ,KC_3      ,KC_4      ,KC_5      ,                                      KC_6      ,KC_7      ,KC_8        ,KC_9      ,KC_0      ,KC_F12    ,
        XXXXXXX   ,KC_EXLM   ,KC_AT     ,KC_HASH   ,KC_DOLLAR ,KC_PERC   ,                                      KC_CIRC   ,KC_AMPR   ,KC_ASTR     ,KC_LPRN   ,KC_RPRN   ,KC_PIPE   ,
        XXXXXXX   ,KC_EQUAL  ,KC_MINUS  ,KC_PLUS   ,KC_LCBR   ,KC_RCBR   ,XXXXXXX   ,                XXXXXXX   ,KC_LBRC   ,KC_RBRC   ,KC_SEMICOLON,KC_COLON  ,KC_BSLS   ,XXXXXXX   ,
                        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                          RCS_T(KC_SPC),KC_RSFT   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   
    ),
    
    /* ARROW
    * .-----------------------------------------------------------------.                                     .-----------------------------------------------------------------.
    * |          |          |          |          |          |          |                                     |          |          |          |          |          |          |
    * |----------+----------+----------+----------+----------+----------|                                     |----------+----------+----------+----------+----------+----------|
    * |          |          |          |          |          |          |                                     |          |          |    Up    |          |          |          |
    * |----------+----------+----------+----------+----------+----------|                                     |----------+----------+----------+----------+----------+----------|
    * |          |    SFT   |    Crt   |          |    Alt   |          |----------.               .----------|   Home   |   Left   |   Down   |   Right  |    End   |          |
    * |----------+----------+----------+----------+----------+----------|          |               |          |----------+----------+----------+----------+----------+----------|
    * |          |          |          |          |          |          |----------|               |----------|          |          |          |          |          |          |
    * '-----------------------------------------------------------------/          /                \          \----------------------------------------------------------------'
    *                    |          |          |          |          | /          /                  \          \ |          |          |          |          |
    *                    |          |          |          |          |/          /                    \          \|          |          |          |          |
    *                    '------------------------------------------------------'                      '------------------------------------------------------'
    */
    [ARROW] = LAYOUT(
        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                                      XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                                      XXXXXXX   ,XXXXXXX   ,KC_UP     ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
        XXXXXXX   ,KC_RSFT   ,KC_LCTL   ,XXXXXXX   ,KC_LALT   ,XXXXXXX   ,                                      KC_HOME   ,KC_LEFT   ,KC_DOWN   ,KC_RGHT   ,KC_END    ,XXXXXXX   ,
        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                  XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
                        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                            XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   
    ),
    
    /* MOUSE
    * .-----------------------------------------------------------------.                                     .-----------------------------------------------------------------.
    * |          |          |          |          |          |          |                                     |          |          |          |          |          |          |
    * |----------+----------+----------+----------+----------+----------|                                     |----------+----------+----------+----------+----------+----------|
    * |          |          |          |          |          |          |                                     |          |          |    M_Up  |          |          |          |
    * |----------+----------+----------+----------+----------+----------|                                     |----------+----------+----------+----------+----------+----------|
    * |          | R_Click  |  Back    |   Next   | L_Click  |          |----------.               .----------|   S_Up   |  M_Left  |  M_Down  |  M_Right |    CRT   |          |
    * |----------+----------+----------+----------+----------+----------|          |               |          |----------+----------+----------+----------+----------+----------|
    * |          |          |          |          |          |          |----------|               |----------|  S_Left  | S_Right  |          |          |          |          |
    * '-----------------------------------------------------------------/          /                \          \----------------------------------------------------------------'
    *                    |          |          |          |          | /          /                  \  S_Down  \ |    SFT   |          |          |          |
    *                    |          |          |          |          |/          /                    \          \|          |          |          |          |
    *                    '------------------------------------------------------'                      '------------------------------------------------------'
    */
    [MOUSE] = LAYOUT(
        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                                      XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                                      XXXXXXX   ,XXXXXXX   ,KC_MS_U   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
        XXXXXXX   ,KC_BTN2   ,KC_BTN4   ,KC_BTN5   ,KC_BTN1   ,XXXXXXX   ,                                      KC_WH_U   ,KC_MS_L   ,KC_MS_D   ,KC_MS_R   ,KC_LCTL   ,XXXXXXX   ,
        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                XXXXXXX   ,KC_WH_L   ,KC_WH_R   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
                        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                          KC_WH_D   ,KC_RSFT   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   
    ),

    /* GAME
    * .-----------------------------------------------------------------.                                     .-----------------------------------------------------------------.
    * | TG(GAME) |    1     |     2    |    3     |     4    |     5    |                                     |          |          |          |          |          |          |
    * |----------+----------+----------+----------+----------+----------|                                     |----------+----------+----------+----------+----------+----------|
    * |          |    Q     |     W    |    E     |     R    |     T    |                                     |          |          |          |          |          |          |
    * |----------+----------+----------+----------+----------+----------|                                     |----------+----------+----------+----------+----------+----------|
    * |   Tab    |    A     |     S    |    D     |     F    |     G    |----------.               .----------|          |          |          |          |          |          |
    * |----------+----------+----------+----------+----------+----------|          |               |          |----------+----------+----------+----------+----------+----------|
    * |  Shift   |    Z     |     X    |    C     |     V    |     B    |----------|               |----------|          |          |          |          |          |          |
    * '-----------------------------------------------------------------/          /                \          \----------------------------------------------------------------'
    *                    |          |          |          |   BSpace | /  Space   /                  \          \ |          |          |          |          |
    *                    |          |          |          |          |/          /                    \          \|          |          |          |          |
    *                    '------------------------------------------------------'                      '------------------------------------------------------'
    */
    [GAME] = LAYOUT(
        TG(GAME)  ,KC_1      ,KC_2      ,KC_3      ,KC_4      ,KC_5      ,                                      XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
        XXXXXXX   ,KC_Q      ,KC_W      ,KC_E      ,KC_R      ,KC_T      ,                                      XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
        KC_TAB    ,KC_A      ,KC_S      ,KC_D      ,KC_F      ,KC_G      ,                                      XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
        KC_RSFT   ,KC_Z      ,KC_X      ,KC_C      ,KC_V      ,KC_B      ,XXXXXXX   ,                XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
                        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,KC_BSPC    ,KC_SPC    ,                          XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   
    ),

    /* EMPTY
    * .-----------------------------------------------------------------.                                     .-----------------------------------------------------------------.
    * |          |          |          |          |          |          |                                     |          |          |          |          |          |          |
    * |----------+----------+----------+----------+----------+----------|                                     |----------+----------+----------+----------+----------+----------|
    * |          |          |          |          |          |          |                                     |          |          |          |          |          |          |
    * |----------+----------+----------+----------+----------+----------|                                     |----------+----------+----------+----------+----------+----------|
    * |          |          |          |          |          |          |----------.               .----------|          |          |          |          |          |          |
    * |----------+----------+----------+----------+----------+----------|          |               |          |----------+----------+----------+----------+----------+----------|
    * |          |          |          |          |          |          |----------|               |----------|          |          |          |          |          |          |
    * '-----------------------------------------------------------------/          /                \          \----------------------------------------------------------------'
    *                    |          |          |          |          | /          /                  \          \ |          |          |          |          |
    *                    |          |          |          |          |/          /                    \          \|          |          |          |          |
    *                    '------------------------------------------------------'                      '------------------------------------------------------'
    */
    [EMPTY] = LAYOUT(
        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                                      XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                                      XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                                      XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,
                        XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                          XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   
    ),
};

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);
    if (keymap_config.swap_lctl_lgui) {
        oled_write_ln_P(PSTR("MAC"), false);
    } else {
        oled_write_ln_P(PSTR("WIN"), false);
    }

    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case BASE:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case ARROW:
            oled_write_P(PSTR("Arrow\n"), false);
            break;
        case MATH:
            oled_write_P(PSTR("Math\n"), false);
            break;
        case LOL:
            oled_write_P(PSTR("LOL\n"), false);
            break;
        case MOUSE:
            oled_write_P(PSTR("Mouse\n"), false);
            break;
        case GAME:
            oled_write_P(PSTR("Game\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // case KC_CUT:
        //     if (record->event.pressed) {
        //         register_mods(mod_config(MOD_LCTL));
        //         register_code(KC_X);
        //     } else {
        //         unregister_mods(mod_config(MOD_LCTL));
        //         unregister_code(KC_X);
        //     }
        //     return false;

        //     break;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}

#endif
