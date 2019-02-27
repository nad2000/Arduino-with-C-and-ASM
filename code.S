#include <avr/io.h>

  sbi _SFR_IO_ADDR(DDRB), 5
  sbi _SFR_IO_ADDR(PORTB), 5

loop:
  rjmp loop  ; pevents running out
