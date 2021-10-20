#include <LiquidCrystal.h>

#include "menu_calculadora.h"
#include "serial_interactions.h"
#include "calculadora.h"
#define pi_val 3.142F

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
  String opcion;
  
  opcion = menu();        //start menu
  
  writeString(opcion + "\n");
  
  switch(opcion.toInt()) //switch between calculadora.h functions and operacionesAvanzadas.h functions
  {
  case 1:
    suma();
  break;
  
  case 2:
    resta();
  break;
  
  case 3:
    multiplicacion();
  break;

  case 4:
    division();
  break;
  
  case 5:
    menuCalcularAreas();
  break;
  
  case 6:
    menuCalcularVolumenes();
  break;
  
  default:
    writeString("Ha ingresado un valor incorrecto. Intentelo de nuevo\n");
  break;
  }

}
