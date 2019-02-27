volatile byte a=0;

void setup() {
  Serial.begin(9600);
  asm(
    "ldi r16, 4 \n" // load immediately into R16
    "inc r16 \n"  // increment R16
    "ldi r17, 5 \n" // load immediately into R17
    "add r17, r16 \n"  // add to R17 R16
    "sts (a), r17 \n" // store it into memory
    : : : "r16","r17" // Full "asm" format: asm(“code” : output operand list : input operand list : clobber list);
  ); 
  /*
   The general form of an extended inline assembler statement is:

        asm(“code” : output operand list : input operand list : clobber list);

        This statement is divided by colons into (up to) four parts. While the code part is required, the others are optional:

          - Code: the assembler instructions, defined as a single string constant.
          - A list of output operands, separated by commas.
          - A list of input operands, separated by commas.
          - A list of “clobbered” or “accessed” registers.
   */
  Serial.print("The 'a' = ");
  Serial.print(a);
}

void loop() {}
