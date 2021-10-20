#include "serial_interactions.h"
#include "menu_calculadora.h"
#include "calculadora.h"
#include "operacionesAvanzadas.h"

//  print the area menu on screen (SERIAL ONLY) and 
//  request for the required operation

//print the main menu on screen (SERIAL ONLY) 
void menu()
{
  int opcion = 0;

  writeString("\n\tMENU PRINCIPAL\n\n");
  writeString("1) Calculadora Aritmetica \n");
  writeString("2) Calculadora Geometrica \n");
  writeString("Escriba su opcion: \n");
  
  opcion = readStr().toInt();

  writeString(String(opcion)+"\n\n");

  switch(opcion)
  {
    case 1:
      menuBasico();
    break;
    case 2:
      menuGeometrico();
    break;
    default:
      writeString("Ha ingresado un valor incorrecto. Intentelo de nuevo\n\n");
    break;
  }
}


void menuBasico()
{
  int opcion = 0;
  String temp = "";

  writeString("Menu Calculadora: \n");
  writeString("1) Suma \n");
  writeString("2) Resta \n");
  writeString("3) Multiplicacion\n");
  writeString("4) Division \n");
  writeString("5) Potencia\n");
  writeString("6) Raiz Cuadrada\n"); 
  writeString("Presione cualquier otra tecla para regresar\n");
  
  writeString("Escriba su opcion: \n");
  temp = readStr();
  writeString(temp + "\n");
  opcion = temp.toInt();
  writeString(String(opcion)+"\n");

  switch(opcion) //switch between calculadora.h functions and operacionesAvanzadas.h functions
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
        potencia();
    break;
    
    case 6:
        raizCuadrada();
    break;
    
    default:
      writeString("Ha ingresado un valor incorrecto. Intentelo de nuevo\n\n");
    break;
  }
}


//  print the volume menu on screen (SERIAL ONLY) and 
//  request for the required operation

void menuGeometrico()
{
  int opcion;
  
  
  writeString("Menu Geometria: \n");
  writeString("1) Area Cuadrado \n");
  writeString("2) Area Circulo \n");
  writeString("3) Area Rectangulo\n");
  writeString("4) Volumen Cubo \n");
  writeString("5) Volumen Cilindro \n");
  writeString("6) Volumen Esfera\n");
  
  writeString("Presione cualquier otra tecla para regresar\n");
  writeString("Escriba su opcion: \n");
  opcion = readStr().toInt();
  writeString(String(opcion)+"\n");

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

    case 4:
      volumenCubo();
    break;
    
    case 5:
      volumenCilindro();
    break;

    case 6:
      volumenEsfera();
    break;

    default:
      writeString("Regresa al menu principal \n");
    break;
    
  }
}
