# Miscellaneous Arduino projects in C and ASM

These are notes on how to build and make working projects without involving any IDE magic using
only C/C++ compiler, Assembly and flashing.


## Toolchain

![toolchain](toolchain.svg "Toolchain for different inputs.")


###  Assembly syntax

There are a few different assembly languages available to choose from:

  - GNU's Assembler (`avr-as`);
  - Gerd's AVR Assembler (`gavrasm`)
  - Assember for the Atmel AVR microcontroller family (`avra`)
  - Atmel's Assembler (part of [Atmel Studio](https://www.microchip.com/mplab/avr-support/atmel-studio-7))

They each have slightly different syntaxes and command lines for getting the source assembled.
Here's a minimal example for each; they turn on pin PB5 (digital pin 13, which had an LED connected to it on the board).


<table>
  <thead>
    <tr>
      <th>Assembly</th>
      <th>Code/Command Line</th>
      <th>Notes</th>
    <tr>
  </thead>
  <tbody>
    <tr>
      <td rowspan="2">
        GNU's
      </td>
      <td>
        TODO:
      </td>
      <td rowspan="2">
GNU's assembler is conveniently included in the <a href="https://www.obdev.at/products/crosspack/index.html">CrossPack</a> package for Mac OS X, WinAVR for Windows, and the gcc-avr packages on various Linux distributions. Unfortunately, it has awkward syntax, requiring <code>_SFR_IO_ADDR()</code> around the names of the I/O registers. Confusingly, you'll need to compile your code with avr-gcc, even though it's assembly. If you try avr-as, you'll get a message like "Error: constant value required".
      </td>
    </tr>
    <tr>
      <td>
        <pre>
avr-gcc -c -mmcu=atmega328p -o code.o code.S
avr-objcopy -j .text -O ihex code.o code.hex
        <pre>
      </td>
    </tr>
  </tbody>
</table>


## More Reading

 * avra: [Assember for the Atmel AVR microcontroller family](https://github.com/hsoft/avra)
 * avrdude: [AVR Downloader/UploaDEr](http://savannah.nongnu.org/projects/avrdude/)
 * [How to write C & Assembly together](https://www.pantechsolutions.net/how-to-write-c-assembly-together)
 * [AVR Assembler Tutorial](https://www.instructables.com/id/Command-Line-Assembly-Language-Programming-for-Ard/)
 * [Gerd's AVR assembler gavrasm](http://www.avr-asm-tutorial.net/gavrasm/index_en.html)
 * [Atmel AVR instruction set](https://en.wikipedia.org/wiki/Atmel_AVR_instruction_set)
 * [AVR C Runtime Library](https://www.nongnu.org/avr-libc/)
