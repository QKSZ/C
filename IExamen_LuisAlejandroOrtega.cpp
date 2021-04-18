#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main()
{
  float arreglo1[7];
  float arreglo2[7];
  float arreglo3[17];
  int op,i,x,j,flag1,flag2;
  float raiz_cuadrada(float);
  float cuadrado(float);
  float cubo(float);
  float promedio(float);
  float suma = 0, suma2 = 0 , total = 0;
  char resp;

  op=1;
  

  	while (op != 5)
  	{
   	 system("cls");;
     cout << "***MENU PRINCIPAL***\n\n";
     cout << "1. INCLUIR DATOS EN EL ARREGLO A\n\n";
     cout << "2. INCLUIR DATOS EN EL ARREGLO B\n\n";
     cout << "3. MOSTAR ESTADISTICAS DE AMBOS ARREGLOS\n\n";
     cout << "4. COMBINAR ARREGLOS\n\n";
     cout << "5. SALIR: ";
     cin >> op;

    switch(op)
    {
      case 1:
    	
	system("cls");
	cout << "INGRESE 8 DATOS EN EL ARREGLO: ";
	for (i=0;i<8;i++)
	{
	  cin >> arreglo1[i];
	  suma = suma + arreglo1[i];
	  
	  cout << "\n";
	  flag1=1;
	}
	  
      break;

    case 2:
		system("cls");
		cout << "INGRESE 8 DATOS EN EL ARREGLO: ";
		for (j=0;j<8;j++)
		{
	 	cin >> arreglo2[j];
	  	suma2 = suma2 + arreglo2[j];
	 	cout << "\n";
	  	flag2=1;
		}
	  
    break;
    case 3:  
		system("cls");;
		if ((flag1==1) && (flag2==1)) 
      {
     	total= suma+suma2;
    	cout << "la suma del Primer  Arreglo es "<< suma;
      	cout <<("\n");
      	cout << "la suma del Segundo  Arreglo es "<< suma2;
      	cout <<("\n");
      	cout << "la suma de los dos arreglos en conjuntos es de "<< (total);
      	cout <<("\n");
      	cout << "la raiz cuadrada de la suma de los dos arreglos es  " << raiz_cuadrada(total);
      	cout <<("\n");
      	cout << "El Valor elevado al cuadrado de la suma de los dos arreglos es  " << cuadrado(total);
      	cout <<("\n");
      	cout << "El Valor elevado al cubo de la suma de los dos arreglos es " << cubo(total);
      	cout <<("\n");
      	cout << "El promedio es de  " << promedio(total);
      	getch();
      	 }
	   else
	    {
	    	cout << "Los Arreglos estan vacios";
	    	op= 1;
	    	getch();
		}
    break;
      
    case 4:
    	
      	system("cls");
      	    i=0;
      	    for (x=0;x<16;x+=2)
      	    {
      	    	arreglo3[x]= arreglo1[i];
				 i++;
			  }
		    j=0;
      	    for (x=1;x<16;x+=2)
      	    {
      	    	arreglo3[x]= arreglo2[j];
				  j++;
			  }
      
	  
      		cout << "EL CONTENIDO DEL ARREGLO A ES: \n\n";
			for (i=0;i<8;i++)
			{
	  		cout << arreglo1[i];
	  		cout << " ";
			}
			cout << "\n";
	   		cout << "EL CONTENIDO DEL ARREGLO B ES: \n\n";
			for (j=0;j<8;j++)
			{
	 		 cout << arreglo2[j];
	 		 cout << " ";
			}
			cout << "\n";
			    		 
	        cout << "EL CONTENIDO DEL ARREGLO C ES: \n\n";
			for (x=0;x<16;x++)
			{
	 		 cout << arreglo3[x];
	 		 cout << " ";
	 		 
	 		 
			}
			getch();
	  
    break;
    
    case 5:
    	system("cls");
    	cout << "Esta seguro que desea salir S/N \n";
	    cin >> resp;
	    if(resp== 'N' or resp== 'n')
	    op= 1;
    break;
      
    }
    
  }
}
  
  float raiz_cuadrada(float y)
  {
  return sqrt(y) ;
   
  }
 float cuadrado(float y)
  {  
  return pow(y,2) ;
   
  }
 float cubo(float y)
  {
  return pow(y,3) ;
   
}	
float promedio(float y)
  {
  return (y/16) ;
   
}	

