#include "Arduino.h"


#ifndef SERIAL_INTERACTIONS_H
#define SERIAL_INTERACTIONS_H


String readStr();

void writeString(String text);

void writeAnswerToLCD(String text);

void writeStringToLCD(String text);
#endif
