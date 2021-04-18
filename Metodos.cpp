#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int square(int);

main()
{
  int x;

  system("cls");

  for (x = 1; x <= 10; x++)
  {
    cout << square(x);
    cout << "n";
  }
  getch();

}

/*declaracion de la funcion*/
int square(int y)
{
  return y * y;
}

