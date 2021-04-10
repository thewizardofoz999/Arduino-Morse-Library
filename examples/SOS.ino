#include <Morse.h>

Morse morse(13, 250); // Sending pin to be used, the lenght of one transmission unit in milliseconds.

void setup() {
}

void loop() {
  //S
  morse.dot();
  morse.dot();
  morse.dot();
  morse.new_letter();
  
  //O
  morse.dash();
  morse.dash();
  morse.dash();
  morse.new_letter();

  //S
  morse.dot();
  morse.dot();
  morse.dot();
  morse.new_letter();
}
