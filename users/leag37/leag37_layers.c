#include "leag37.h"

// prototype function to override in specific keymap
__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t* record) {
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    return process_record_keymap(keycode, record);
}
