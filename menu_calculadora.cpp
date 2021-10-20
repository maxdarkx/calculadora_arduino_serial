#include "serial_interactions.h"
#include "operacionesAvanzadas.h"

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

void menuCalcularAreas()
{
  int opcion = 0;

  writeString("Menu Calcular Areas: \n");
  writeString("1) Cuadrado \n");
  writeString("2) Circulo \n");
  writeString("3) Rectangulo\n");
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
  }
}

void menuCalcularVolumenes()
{
  int opcion;

  writeString("Menu Calcular Volumenes: \r\n");
  writeString("1) Cubo \r\n");
  writeString("2) Cilindro \r\n");
  writeString("3) Esfera\r\n");
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
  }
}
