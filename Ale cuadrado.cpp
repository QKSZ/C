#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int square(int,int);

/*declaracion de la funcion*/
int square(int y, int z)
{
  int cuadrado;
  cuadrado=pow(y,z);
  return cuadrado;
}

main()
{
  int x,x2;
  

  system("cls");

  for (x = 1; x <= 10; x++)
  {
    cout << square(x,x2);
    cout << "\n";
  }
  getch();

}

