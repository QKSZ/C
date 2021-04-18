
#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;


int par_impar(int);
main()
{ 
  char palindromo [5];
  int numeros[4][4];
  int op;
  int i,j,contador=0,contador2=0;
  op = 1;

  while (op != 4)
  {
    	system("cls");
    	cout << "***MENU PRINCIPAL***\n\n";
    	cout << "1. LLENAR MATRIZ\n\n";
    	cout << "2. CANTIDAD DE NUMEROS PARES E IMPARES\n\n";
    	cout << "3. PALINDROMO\n\n";
    	cout << "4. SALIR\n\n";
    	cin >> op;

    	switch(op)
    	{
    		case 1:
        	system("cls");
        	cout << "LLENAR MATRIZ:\n\n";
            	for (i=0;i<4;i++)
                {
	            	for (j=0;j<4;j++)
	                {
	     				cin >> numeros [i][j];
	     					if (par_impar (numeros [i][j]) == 0)
	   	                    {		  
	   	                    contador++;
	   	                    }
	   	                    else 
					 		{
	   	  	          		contador2++;
			         		}
	   				}
      			}
    		break;
    		case 2:
      		system("cls");
        	cout << "EL CONTENIDO DE LA MATRIZ ES:\n\n";
      			for (i=0;i<4;i++)
      			{
	   				for (j=0;j<4;j++)
	   				{
	     			cout << numeros [i][j] << " ";
	   				}
       				 cout << "\n";
     			}
      			cout << "La cantidad de Numeros Pares " << contador << " e impares es " << contador2;
     		getch();
   			break;
     		case 3:
    		system("cls");
      		cout << "ingrese 5 letras \n";
      			for (int s=0;s<5;s++)
      			{
      			cin >> palindromo [s];
       			}
      		system ("PAUSE");
      
	  		system("cls");
      		int v=0,pal=0;
      		int q=0,w=4;
      		while (v!=2)
      		{         
        		if (palindromo[q] != palindromo[w])
				{ 
				 cout << "el contenido del arreglo es \n";
		 
		 			for (int s=0;s<5;s++)
         			{
            		cout << palindromo [s];
         			}
         
         		cout << "\n";
		 
		 		cout << "el contenido del arreglo al revez es \n";
		 
					for (int s=4;s>=0;s--)
         			{
           			cout << palindromo [s];
         			}
		 		cout << "\n";
		 		cout << "La palabra no es un Palindromo \n";
		 		v=2;
		 		} 
		        else 
			 	{	 
		 		q++;
		 		w--;
		 		v++;
		 		pal++;
			 	} 
		 		if (pal==2)
				{
		 		cout << "el contenido del arreglo es \n";
		 
		 		for (int s=0;s<5;s++)
        	 	{
            	cout << palindromo [s];
         		}
         
         		cout << "\n";
		 
		 		cout << "el contenido del arreglo al revez es \n";
		 
				for (int s=4;s>=0;s--)
         		{
            	cout << palindromo [s];
         		}
         		cout << "\n";
			 
		 		cout << "La palabra es un Palindromo \n";
		 		}
	        }
 
        	getch();
       		break;
   
   		}
  }
}
  
int par_impar (int y)
{ 
return fmod (y,2);
}
