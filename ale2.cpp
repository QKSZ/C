#include <iostream>
#include <conio.h>

using namespace std;

main()
{
  int arreglo[10];
  int op,i;
  int total=0;

  op=1;

  while (op != 4)
  {
    system("cls");;
    cout << "***MENU PRINCIPAL***\n\n";
    cout << "1. INGRESAR DATOS AL ARREGLO\n\n";
    cout << "2. MOSTRAR INFORMACION DEL ARRAGLO\n\n";
    
    cout << "3. MOSTRAR Suma\n\n";
    cout << "4. Salir\n\n";
    cout << "Elija una opcion: ";
    cin >> op;

    switch(op)
    {
      case 1:
	system("cls");;
	cout << "INGRESE 10 NUMEROS ENTEROS: ";
	for (i=0;i<10;i++)
	{
	  cin >> arreglo[i];
	  total = total + arreglo[i];
	  cout << "\n";
	}
      break;

      case 2:
	system("cls");;
	cout << "EL CONTENIDO DEL ARREGLO ES: \n\n";
	for (i=0;i<10;i++)
	{
	  cout << arreglo[i];
	  cout << "\n";
	}
	getch();
      break;
      case 3:
      	cout << total;
      	getch();
      	
    break;
	
}}}
