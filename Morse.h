/*
  Morse.h - Library for flashing Morse code.
  Created by Özgür Soysal, April 9, 2021.
  Released into the public domain.
*/
#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin, int rate);
    void dot();
    void dash();
	void new_letter();
	void new_word();
  private:
    int _pin;
	int _rate;
};

#endif