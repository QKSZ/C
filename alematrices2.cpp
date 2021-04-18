
#include <iostream>
#include <conio.h>

using namespace std;

main()
{
  int matriz[3][5];
  int op;
  int i,j,p;
  int suma=0;
  
  int suma2=0;
  op = 1;

  while (op != 5)
  {
    system("cls");
    cout << "***MENU PRINCIPAL***\n\n";
    cout << "1. INGRESAR DATOS A LA MATRIZ\n";
    cout << "2. MOSTRAR CONTENIDO\n";
    cout << "3. Suma\n\n";
    cout << "4. FILA ESPECIFICA\n\n";
    cout << "5. SALIR\n\n";
    cout << "Elija una opcion >> ";
    cin >> op;

    switch(op)
    {
    case 1:
      system("cls");
      cout << "INGRESE 15 Numeros:\n\n";
      for (i=0;i<3;i++)
      {
	   for (j=0;j<5;j++)
	   {
	     cin >> matriz [i][j];
	     suma = suma + matriz [i][j];
	   }
      }
    break;
    case 2:
      system("cls");
      cout << "EL CONTENIDO DE LA MATRIZ ES EL SIGUIENTE:\n\n";
      for (i=0;i<3;i++)
      {
	   for (j=0;j<5;j++)
	   {
	     cout << matriz [i][j];
	   }
        cout << "\n";
      }
      getch();
    break;
     case 3:
      system("cls");
      
	     cout << suma;
	   
      getch();
    break;
    case 4:
      system("cls");
      cout << "cual fila quiere sumar";
      cin >> p;
	    cout << "los numeros de la Fila Son ";
	   for (i=0;i<5;i++)
	   {
	     
	     suma2 = suma2 + matriz [p][j];
	     cout <<  matriz [p][j];
	   }
	   cout << "el resultado de la suma es " << suma2;
      
	   
      getch();
    break;
    }
  }}

