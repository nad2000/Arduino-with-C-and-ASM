.device ATmega328P

  sbi 0x24, 5
  sbi 0x25, 5

loop:
  rjmp loop  ; pevents running out
