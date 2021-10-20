#include <LiquidCrystal.h>

#include "menu_calculadora.h"
#include "serial_interactions.h"
#include "calculadora.h"
#define pi_val 3.142F

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Bienvenido");
  lcd.begin(16, 2);
  lcd.print("BIENVENIDO");
}


void loop() {
  String opcion;
  
  opcion = menu();
  
  writeString(opcion + "\n");
  switch(opcion.toInt())
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
