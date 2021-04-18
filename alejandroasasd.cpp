#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main()
{
	float raiz(int);
	float redond(float);
 int x;
 float b;
int op = 1;
  while (op != 3)
  {
    system("cls");;
    cout << "***MENU PRINCIPAL***\n\n";
    cout << "1.Calcular la Raiz de un numero \n\n";
    cout << "2. Redondear un Numero al siguiente \n\n";
    
    cout << "Elija una opcion: ";
    cin >> op;

    switch(op)
    {
      case 1:
      cout << "1. Digite el numero \n\n";
      cin >> x;
      cout << "la raiz cuadrada es " << raiz(x);
      getch ();
      break;

      case 2:
      cout << "1. Digite el numero \n\n";
      cin >> b;
      cout << "el numero redondeado es " << redond(b);
      getch ();
      break;
      
	
}}}
float raiz(int y)
  {
  return sqrt(y) ;
   
}
float redond(float z)
  {
  return ceil(z) ;
   
}


