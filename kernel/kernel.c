#include "tty.h"
#include "kbd.h"

void kmain() {
    term_init();
    
    term_putstr("Hello\0");
    term_putstr(" World!\0");
    term_putstr("\nagain\0");
    term_putstr("\tagain\0");
    term_putstr("one\0");
    term_putstr("two\0");
    
    while(1);
}

