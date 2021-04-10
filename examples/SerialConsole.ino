#include <Morse.h>

Morse morse(13, 100); //Sending pin to be used, the lenght of one transmission unit in milliseconds.

void setup() {
  Serial.begin(9600); //Serial port initialization

}

void loop() {
  if (Serial.available() > 0) { //Check if any data recieved.
    byte in = Serial.read();    //Save the each byte to a variable
    Serial.print((char)in);     //Print the byte to the serial monitor as a character
    Serial.print(": ");
    switch(in){
      case 'A' : Serial.println(".-"); morse.dot(); morse.dash(); break;
      case 'B' : Serial.println("-..."); morse.dash(); morse.dot(); morse.dot(); morse.dot(); break;
      case 'C' : Serial.println("-.-."); morse.dash(); morse.dot(); morse.dash(); morse.dot(); break;
      case 'D' : Serial.println("-.."); morse.dash(); morse.dot(); morse.dot(); break;
      case 'E' : Serial.println("."); morse.dot(); break;
      case 'F' : Serial.println("..-."); morse.dot(); morse.dot(); morse.dash(); morse.dot(); break;
      case 'G' : Serial.println("--."); morse.dash(); morse.dash(); morse.dot(); break;
      case 'H' : Serial.println("...."); morse.dot(); morse.dot(); morse.dot(); morse.dot(); break;
      case 'I' : Serial.println(".."); morse.dot(); morse.dot(); break;
      case 'J' : Serial.println(".---"); morse.dot(); morse.dash(); morse.dash(); morse.dash(); break;
      case 'K' : Serial.println("-.-"); morse.dash(); morse.dot(); morse.dash(); break;
      case 'L' : Serial.println(".-.."); morse.dot(); morse.dash(); morse.dot(); morse.dot(); break;
      case 'M' : Serial.println("--"); morse.dash(); morse.dash(); break;
      case 'N' : Serial.println("-."); morse.dash(); morse.dot(); break;
      case 'O' : Serial.println("---"); morse.dash(); morse.dash(); morse.dash(); break;
      case 'P' : Serial.println(".--."); morse.dot(); morse.dash(); morse.dash(); morse.dot(); break;
      case 'Q' : Serial.println("--.-"); morse.dash(); morse.dash(); morse.dot(); morse.dash(); break;
      case 'R' : Serial.println(".-."); morse.dot(); morse.dash(); morse.dot(); break;
      case 'S' : Serial.println("..."); morse.dot(); morse.dot(); morse.dot(); break;
      case 'T' : Serial.println("-"); morse.dash(); break;
      case 'U' : Serial.println("..-"); morse.dot(); morse.dot(); morse.dash(); break;
      case 'V' : Serial.println("...-"); morse.dot(); morse.dot(); morse.dot(); morse.dash(); break;
      case 'W' : Serial.println(".--"); morse.dot(); morse.dash(); morse.dash(); break;
      case 'X' : Serial.println("-..-"); morse.dash(); morse.dot(); morse.dot(); morse.dash(); break;
      case 'Y' : Serial.println("-.--"); morse.dash(); morse.dot(); morse.dash(); morse.dash(); break;
      case 'Z' : Serial.println("--.."); morse.dash(); morse.dash(); morse.dot(); morse.dot(); break;
      case '.' : Serial.println(".-.-.-"); morse.dot(); morse.dash(); morse.dot(); morse.dash(); morse.dot(); morse.dash(); break;
      case ',' : Serial.println("--..--"); morse.dash(); morse.dash(); morse.dot(); morse.dot(); morse.dash(); morse.dash(); break;
      case '?' : Serial.println("..--.."); morse.dot(); morse.dot(); morse.dash(); morse.dash(); morse.dot(); morse.dot(); break;
      case '/' : Serial.println("-..-."); morse.dash(); morse.dot(); morse.dot(); morse.dash(); morse.dot(); break;
      case '@' : Serial.println(".--.-."); morse.dot(); morse.dash(); morse.dash(); morse.dot(); morse.dash(); morse.dot(); break;
      case '1' : Serial.println(".----"); morse.dot(); morse.dash(); morse.dash(); morse.dash(); morse.dash(); break;
      case '2' : Serial.println("..---"); morse.dot(); morse.dot(); morse.dash(); morse.dash(); morse.dash(); break;
      case '3' : Serial.println("...--"); morse.dot(); morse.dot(); morse.dot(); morse.dash(); morse.dash(); break;
      case '4' : Serial.println("....-"); morse.dot(); morse.dot(); morse.dot(); morse.dot(); morse.dash(); break;
      case '5' : Serial.println("....."); morse.dot(); morse.dot(); morse.dot(); morse.dot(); morse.dot(); break;
      case '6' : Serial.println("-...."); morse.dash(); morse.dot(); morse.dot(); morse.dot(); morse.dot(); break;
      case '7' : Serial.println("--..."); morse.dash(); morse.dash(); morse.dot(); morse.dot(); morse.dot(); break;
      case '8' : Serial.println("---.."); morse.dash(); morse.dash(); morse.dash(); morse.dot(); morse.dot(); break;
      case '9' : Serial.println("----."); morse.dash(); morse.dash(); morse.dash(); morse.dash(); morse.dot(); break;
      case '0' : Serial.println("-----"); morse.dash(); morse.dash(); morse.dash(); morse.dash(); morse.dash(); break;
      case ' ' : Serial.print(" "); Serial.println("new word wait for 7 units"); morse.new_word(); break;
    }
    morse.new_letter(); //delaying 3 units to signal a new letter
  }

}
