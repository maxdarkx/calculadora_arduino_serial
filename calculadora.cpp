#include "calculadora.h"
#include "serial_interactions.h"
#include <LiquidCrystal.h>


#ifndef LiquidCrystal lcd;
#define LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#endif

void suma()
{
  String temp = "";
  float sum1;
  float sum2;
  float resultado;

  writeString("\n\tSUMA\n\n");
  
  writeString("Ingrese el primer operando: \n");
  temp = readStr();
  sum1 = temp.toFloat();
  writeString(String(sum1) + "\n");
  
  
  writeString("\nIngrese el segundo operando: \n");
  temp = readStr();
  sum2 = temp.toFloat();
  writeString(String(sum2) + "\n");
  
  resultado=sum1+sum2;


  writeString("\nEl resultado es: \n");

  temp = String(sum1) + " + " + String(sum2) + " = " + String(resultado)+"\n\n"; 
  writeString(temp);
  writeAnswerToLCD(temp);
}

void resta()
{
  String temp = "";
  float res1;
  float res2;
  float resultado;

  writeString("\n\tRESTA\n\n");
  
  writeString("Ingrese el primer operando: \n");
  temp = readStr();
  res1 = temp.toFloat();
  writeString(temp + "\n");
  
  writeString("\nIngrese el segundo operando: \n");
  temp = readStr();
  res2 = temp.toFloat();
  writeString(temp + "\n");

  resultado = res1 - res2;

  writeString("\nEl resultado es: \n");

  temp = String(res1) + " - " + String(res2) + " = " + String(resultado)+"\n\n";
  writeString(temp);
  writeAnswerToLCD(temp);
}



void multiplicacion()
{
  float mul1;
  float mul2;
  float resultado;
  String temp = "";

  writeString("\n\tMULTIPLICACION\n\n");
  writeString("Ingrese el primer operando: \n");
  temp = readStr();
  mul1 = temp.toFloat();
  writeString(temp + "\n");
  
  writeString("\nIngrese el segundo operando: \n");
  temp = readStr();
  mul2 = temp.toFloat();
  writeString(temp + "\n");

  resultado = mul1 * mul2;

  writeString("\nEl resultado es: \n");

  temp = String(mul1) + " x " + String(mul2) + " = " + String(resultado)+"\n\n";
  writeString(temp);
  writeAnswerToLCD(temp);
}


void division()
{
  float div1;
  float div2;
  float resultado;
  String temp = "";

  writeString("\n\tDIVISION\n\n");
  
  writeString("Ingrese el dividendo: \n");
  temp = readStr();
  div1 = temp.toFloat();
  writeString(String(div1));
  
  writeString("\nIngrese el divisor: \n");
  temp = readStr();
  div2 = temp.toFloat();
  writeString(String(div2));

  if(div2 != 0)
  {
    resultado = div1 / div2;
    writeString("\nEl resultado es: \n");

    temp = String(div1) + " / " + String(div2) + " = " + String(resultado)+ "\n\n";
    writeString(temp);
    writeAnswerToLCD(temp);
  }
  else
  {
    temp = "\nLa division por cero no esta permitida\n\n";
    writeString(temp);
    temp = "Division por cero";
    writeStringToLCD(temp);
  }
}
