#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main()
{
  int arreglo[10];
  int op,i;
  float square(int);
  float suma = 0;
  char resp;

  op=1;
  

  while (op != 4)
  {
    system("cls");;
    cout << "***MENU PRINCIPAL***\n\n";
    cout << "1. INGRESAR 10 NUMEROS AL ARREGLO\n\n";
    cout << "2. MOSTRAR INFORMACION DEL ARREGLO\n\n";
    cout << "3. La suma y la otra vara\n\n";
    cout << "4. SALIR\n\n";
    cout << "Elija una opcion: ";
    cin >> op;

    switch(op)
    {
      case 1:
    	
	system("cls");
	cout << "INGRESE 10 NUMEROS ENTEROS: ";
	for (i=0;i<10;i++)
	{
	  cin >> arreglo[i];
	  suma = suma + arreglo [i];
	  cout << "\n";
	}
      break;

      case 2:
      	
	system("cls");
	cout << "EL CONTENIDO DEL ARREGLO ES: \n\n";
	for (i=0;i<10;i++)
	{
	  cout << arreglo[i];
	  cout << "\n";
	}
	
	getch();
      break;
      case 3:  
	system("cls");;
	cout << "EL CONTENIDO DEL ARREGLO ES: \n\n";
	for (i=0;i<10;i++)
	{
	  cout << arreglo[i];
	  cout << "\n";
	}
      cout << "la suma del Arreglo es "<< suma;
      cout <<("\n");
      cout << "la raiz cuadrada es " << square(suma);

	getch();
      break;
      
    case 4:
      	system("cls");
      	
	
	cout << "Esta seguro que desea salir S/N \n";
	cin >> resp;
	if(resp== 'N' or resp== 'n')
	op= 1;
	
	break;

      
    }
    getch();
  }}
  
  float square(int y)
  {
  return sqrt(y) ;
   
}


