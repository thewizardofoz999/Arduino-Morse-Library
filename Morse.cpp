/*
  Morse.cpp - Library for flashing Morse code.
  Created by Özgür Soysal, April 9, 2021.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin, int rate)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
  _rate = rate;
}

void Morse::dot()
{
  digitalWrite(_pin, HIGH);
  delay(_rate);
  digitalWrite(_pin, LOW);
  delay(_rate);  
}

void Morse::dash()
{
  digitalWrite(_pin, HIGH);
  delay(3*_rate);
  digitalWrite(_pin, LOW);
  delay(_rate);
}

void Morse::new_letter()
{
	delay(3*_rate);
}

void Morse::new_word()
{
	delay(7*_rate);
}