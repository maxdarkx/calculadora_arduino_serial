#include "serial_interactions.h"
#include "powerSaver.h"
#include "Arduino.h"
#include <LiquidCrystal.h>

extern LiquidCrystal lcd;

//Read a String from the SERIAL PC connection. If no data is detected on buffer (serial.available()), puts the MCU
// in low energy consumption mode until any data is received
String readStr()
{
  while(!Serial.available())
  {
    delay(100);
    sleepNow();
  }
  return Serial.readString();
}

//write a string to the SERIAL connection
void writeString(String text)
{
  Serial.print(text);
}

//Writes a formatted answer String (two line string) to the LCD screen

void writeAnswerToLCD(String text)
{
  String linea1 = "";
  String linea2 = "";
  int inicioRespuesta = 0;

  for(int i = 0; i< text.length(); i++)
  {
    if(text[i] == '=')
      inicioRespuesta = i;
  }

  linea1 = text.substring(0,inicioRespuesta);
  linea2 = text.substring(inicioRespuesta,text.length()-2);
  
  lcd.clear();
  lcd.print(linea1);
  lcd.setCursor(0,1);
  lcd.print(linea2);
}

//Writes a formatted String (two line string) to the LCD screen
void writeStringToLCD(String text)
{
  String linea1 = text.substring(0,16);
  String linea2 = text.substring(16,32);
  
  lcd.clear();
  lcd.print(linea1);
  lcd.setCursor(0,1);
  lcd.print(linea2);
}
