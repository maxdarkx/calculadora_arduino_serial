#include <LiquidCrystal.h>

#include "menu_calculadora.h"


//liquid crystal screen object initializer
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() //Initial conditions for external or internal components
{
  // Serial port comunication
  Serial.begin(9600);
  Serial.println("Bienvenido");

  //LCD initialization
  lcd.begin(16, 2);
  lcd.print("BIENVENIDO");
}


void loop() //infinite loop for MCU
{
  menu();        //start menu
}
