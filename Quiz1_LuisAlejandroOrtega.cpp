#include <conio.h>
#include <iostream>

using namespace std;

main()
{
  char matriz[4][3];
  char arreglo [12];
  int op;
  char buscar,repetido;
  int i,j;
  int x;
  op = 1;

  while (op != 4)
  {
    system("cls");
    cout << "***MENU PRINCIPAL***\n\n";
    cout << "1. Insetar datos en la matriz\n";
    cout << "2. Mostrar datos en la matriz\n";
    cout << "3. Buscar elemento en la matriz\n\n";
    cout << "4. Salir\n\n ";
    cin >> op;

    switch(op)
    {
    case 1:
      system("cls");
      cout << "Ingrese 12 Digitos:\n\n";
      for (i=0;i<4;i++)
       {
	    for (j=0;j<3;j++)
	    {
	    	cin >> matriz [i][j];
	         
			  
			 if (matriz [i][j] == matriz [i][j-1])
	           {
		   
	            cout << "El valor no puede repetirse:\n\n";
	            j--;
	           }
	          
	    }    	
			
	   }
	        
       
       break;
     case 2:
      system("cls");
      cout << "EL CONTENIDO DE LA MATRIZ ES EL SIGUIENTE:\n\n";
      for (i=0;i<4;i++)
      {
	   for (j=0;j<3;j++)
	   {
	     cout << matriz [i][j];
	   }
        cout << "\n";
      }
      getch();
    break;
    case 3:
      system("cls");
      cout << "Digite el elemento que desea buscar:\n\n";
       cin >> buscar;
      for (i=0;i<=4;i++)
      {
	   for (j=0;j<=3;j++)
	   {
	     if (matriz [i][j] == buscar)
	     { 
	       cout << "el elemento se encuentra en la posicion : " << i <<"," << j << " de la matriz"  ;
	       getch();
	       return (0);
		 }
		 
		  
	   }
	    
        cout << "\n";
      } 
      cout << "El elemento" << buscar << " no existe dentro de la matriz :\n\n";
      getch();
    break;
    
    }
  }
}

