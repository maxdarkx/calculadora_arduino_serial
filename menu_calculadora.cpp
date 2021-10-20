#include "serial_interactions.h"
#include "operacionesAvanzadas.h"

//print the main menu on screen (SERIAL ONLY) 
String menu()
{
  writeString("Menu Calculadora: \n");
  writeString("1) Suma \n");
  writeString("2) Resta \n");
  writeString("3) Multiplicacion\n");
  writeString("4) Division \n");
  
  writeString("5) Calcular Areas \n");
  writeString("6) Calcular Volumenes \n");
  /*
  writeString("7) Potenciacion \n");
  writeString("8) Raiz Cuadrada \n");
   */
  writeString("Escriba su opcion: \n");
  return readStr();
}

//  print the area menu on screen (SERIAL ONLY) and 
//  request for the required operation

void menuCalcularAreas()
{
  int opcion = 0;

  writeString("Menu Calcular Areas: \n");
  writeString("1) Cuadrado \n");
  writeString("2) Circulo \n");
  writeString("3) Rectangulo\n");
  writeString("Presione cualquier otra tecla para regresar\n");
  
  writeString("Escriba su opcion: \n");
  opcion = readStr().toInt();
  
  writeString(String(opcion));

  switch(opcion)
  {
    case 1:
      areaCuadrado();
    break;
    
    case 2:
      areaCirculo();
    break;
    
    case 3:
      areaRectangulo();
    break;
    
    default:
      writeString("Regresa al menu principal \n");
    break;
  }
}


//  print the volume menu on screen (SERIAL ONLY) and 
//  request for the required operation

void menuCalcularVolumenes()
{
  int opcion;

  writeString("Menu Calcular Volumenes: \r\n");
  writeString("1) Cubo \r\n");
  writeString("2) Cilindro \r\n");
  writeString("3) Esfera\r\n");
  writeString("Presione cualquier otra tecla para regresar\n");
  writeString("Escriba su opcion: \r\n");
  opcion = readStr().toInt();
  writeString(String(opcion));

  switch(opcion)
  {
    case 1:
      volumenCubo();
    break;
    
    case 2:
      volumenCilindro();
    break;
    
    case 3:
      volumenEsfera();
    break;
    
    default:
      writeString("Regresa al menu principal \n");
    break;
  }
}
