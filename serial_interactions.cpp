#include "serial_interactions.h"
#include "Arduino.h"
#include <LiquidCrystal.h>

extern LiquidCrystal lcd;

String readStr()
{
  while(!Serial.available())
  {
    delay(100);
  }
  return Serial.readString();
}

String readStr2()
{
  //pido el dato por polling
  while(!Serial.available())
  {
    delay(100);
  }
  return Serial.readString();
}

void writeString(String text)
{
  Serial.print(text);
}

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

void writeStringToLCD(String text)
{
  String linea1 = text.substring(0,16);
  String linea2 = text.substring(16,32);
  
  lcd.clear();
  lcd.print(linea1);
  lcd.setCursor(0,1);
  lcd.print(linea2);
}