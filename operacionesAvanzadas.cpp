#include "serial_interactions.h"
#include "Arduino.h"

#define pi_val 3.142F

//function to calculate a square's area
void areaCuadrado()
{
  float lado;
  float resultado;
  String temp = "";

  writeString("\n\tAREA DEL CUADRADO\n\n");
  writeString("Ingrese el lado: \n");
  lado = readStr().toFloat();
  writeString(String(lado) + "\n");

  resultado = lado * lado;

  writeString("\nEl resultado es: \n");
  temp = "Area de Cuadrado = " + String(resultado,2) +"\n\n";
  writeString(temp);
  writeAnswerToLCD(temp);
}

//function to calculate a circle's area
void areaCirculo()
{
  float radio;
  float resultado;
  String temp = "";  
  
  writeString("\n\tAREA DEL CIRCULO\n\n");
  writeString("Ingrese el radio: \n");
  radio = readStr().toFloat();
  writeString(String(radio) + "\n");

  resultado = radio * radio * pi_val;

  writeString("\nEl resultado es: \n");
  temp = "Area del Circulo = " + String(resultado,2) +"\n\n";
  writeString(temp);
  writeAnswerToLCD(temp);
}

//function to calculate a rectangle's area
void areaRectangulo()
{
  float lado1, lado2;
  float resultado;
  String temp = "";

  writeString("\n\tAREA DEL RECT\n\n");
  writeString("Ingrese el lado1: \n");
  lado1 = readStr().toFloat();
  writeString(String(lado1) + "\n");

  writeString("Ingrese el lado2: \n");
  lado2 = readStr().toFloat();
  writeString(String(lado2) + "\n");

  resultado = lado1 * lado2;

  writeString("\nEl resultado es: \n");
  temp = "Area de Rect = " + String(resultado,2) +"\n\n";
  writeString(temp);
  writeAnswerToLCD(temp);
}

//function to calculate a cube's volume
void volumenCubo()
{
  float lado;
  float resultado;
  String temp = "";

  writeString("\n\tVOL DE CUBO\n\n");
  writeString("Ingrese el lado: \n");
  lado = readStr().toFloat();
  writeString(String(lado) + "\n");

  resultado = lado * lado * lado;

  writeString("\nEl resultado es: \n");
  temp = "Vol de Cubo = " + String(resultado,2) +"\n\n";
  writeString(temp);
  writeAnswerToLCD(temp);
}

//function to calculate a cilinder's volume
void volumenCilindro()
{
  float radio;
  float altura;
  float resultado;
  
  String temp = "";

  writeString("\n\tVOL DE CILINDRO\n\n");
  
  writeString("Ingrese el radio: \n");
  radio = readStr().toFloat();
  writeString(String(radio, 2) + "\n");

  writeString("Ingrese la altura: \n");
  altura = readStr().toFloat();
  writeString(String(altura, 2) + "\n");

  resultado = radio * radio * altura * pi_val;
  writeString(String(resultado,2));

  writeString("\nEl resultado es: \n");
  temp = "Vol Cilindro = " + String(resultado,2) +"\n\n";
  writeString(temp);
  writeAnswerToLCD(temp);
}

//function to calculate a sphere's volume
void volumenEsfera()
{
  float radio;
  float resultado;
  String temp = "";

  writeString("\n\tVOL DE ESFERA\n\n");
  
  writeString("Ingrese el radio: \n");
  
  radio = readStr().toFloat();
  writeString(String(radio, 2) + "\n");
  
  resultado = radio * radio * radio * (4.0/3.0);
  //writeString(String(resultado,2));
  
  resultado = resultado * pi_val;
  //writeString(String(resultado,2));

  writeString("\nEl resultado es: \n");
  temp = "Vol Esfera = " + String(resultado,2) +"\n\n";
  writeString(temp);
  writeAnswerToLCD(temp);
}
