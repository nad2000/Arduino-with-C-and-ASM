;; .include "./m328Pdef.inc"
.device ATmega328P
start:
	ldi r23, 0b00000001
	ldi r24, 0b00000011
	sts 0x24, r24  ; direction

loop:
	sts 0x25, r23  ; LED on

	eor r23, r24   ; Flip the bits

	; delay 1sec
	ldi  r18, 41
	ldi  r19, 150
	ldi  r20, 128
L1:
	dec  r20
	brne L1
	dec  r19
	brne L1
	dec  r18
	brne L1


	rjmp loop
