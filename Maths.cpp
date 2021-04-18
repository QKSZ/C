#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
 //Librería para trabajar con funciones matemáticas

using namespace std;

main(){
  int num;
  int resultado;
  const int elevado=2; //Así se declara una constante
  
  system("cls");

  cout << "Ingrese el valor a calcular el cuadrado: ";
  cin >> num;
  resultado = pow(num,elevado);
  cout << num << " elevado al cuadrado es: " << resultado;
  getch();
}



