#include <iostream>
#include <conio.h>
#include <stdlib.h>


using namespace std;

struct nodo{
int info;
char info1;
nodo *sgt;
};



void submenu ();
void numerica (nodo **cab, nodo **fin);
void alfanumerica (nodo **cab1, nodo **fin1);
void muestra(nodo *cab);
void muestra1(nodo *cab1);
int repetido (int y);
int mayor =0,menor =0;
int jo=0;
int prepetido;
int num;


main()
{
  char palabra[10];
  int op,op2,i,NumLet,Validar,j,Div;
 NumLet=0;
  op2=1;
  op=1;
  char x,Letra;
  

  while (op != 4)
  {
  system("cls"); 
    cout << "***MENU PRINCIPAL***\n\n";
    cout << "1.DETERMINAR SI EL ARREGLO FORMA UN PALINDROMO O CAPICUA\n";
    cout << "2.VALORES DE LISTA \n";
    cout << "3.PILAS \n";
    cout << "4.SALIR\n\n";
    cout << "Elija una opcion ";
    cin >> op;

    switch(op)
    {
      case 1:
          system("cls"); 
          NumLet=0;
          Validar=0;
cout << "INGRESE 10 LETRAS O NUMEROS";

for(i=0;i<9;i++){
    cin >>x;
    cout<<"\n";
    palabra[i]=x;
}
cout << "\n Realizado\n";
cout << "\n EL ARREGLO AL DERECHO ES: ";
for(i=0;i<9;i++){
    cout << palabra[i]<< ", ";
}
cout << "\n\n";
cout << "\nEL ARREGLO AL REVES ES: ";
for(i=8;i>=0;i--){
    cout << palabra[i]<< ", ";
}
cout << "\n\n";

for(i=0;i<9;i++){
    Div=palabra[i]/palabra[i];
    if(Div=1){
        NumLet=1;
    }
}
for(i=0;i>9;i++){
    for (j=8;j>=0;j--){
        if (palabra[i]==palabra[j]){
            Validar=1;
        }else{
            Validar=0;
        }
        }
    }
    if((Validar ==1)&&(NumLet=1)){
        cout <<"EL CONTENIDO DEL ARREGLO FORMA UNA CAPICUA";
    }else if ((Validar ==1)&&(NumLet=0)){
    cout <<"EL CONTENIDO DEL ARREGLO FORMA UN PALINDROMO";
    }else{
        cout <<"EL CONTENIDO DEL ARREGLO NO FORMA UN PALINDROMO NI UNA CAPICUA";
    }
    case 2:
      	submenu ();
        break;
}

    getch();
      break;
      
    
     
    
  }
  main();
  }
  
  void submenu ()
  {
  	nodo *c=NULL,*f=NULL;
  	nodo *c1=NULL,*f1=NULL;
  	int opcion=0;
  	char lista;
  	 while (opcion !=4)
  	 {
	  
  	system("cls"); 
    cout << "***Sub Menu***\n\n";
    cout << "1.INSERTAR DATOS A LA LISTA \n";
    cout << "2.OBTENER EL ELEMENTO MAYOR Y MENOR \n";
    cout << "3.CUANTOS NUMEROS Y LETRAS HAY EN LA LISTA \n";
    cout << "4.Regresar \n\n";
    cin >> opcion;
    switch (opcion)
    {
    	case 1:
    		cout << "En cual lista desea Insertar Numerica (A) o Alfanumerica (B) ?"<<endl;
    		cin >> lista;
    		if (lista == 'A' or lista == 'a')
    		{
    			numerica(&c, &f);
			}
    		else if (lista == 'B' or  lista == 'b')
    		{
    			alfanumerica(&c1, &f1);
			}
			else
			{
				cout << "debe digitar A o B" << endl;
			}
    		break;
    		case 2:
    			muestra(c);
    			break;
    		case 3:
    			muestra1(c1);
			break; 
				
    	
	}
  }
   }
  
  void numerica (nodo **cab, nodo **fin)
  { 
    system("cls"); 
    cout << "Digite un numero"<< endl ;	
  	cin >> num; 
	  while (jo < 1)
	  {
	  	menor=num;
	  	mayor=num;
	  	jo=1;
		   }	 
	 if (num > mayor)
	 {
	 
	 mayor = num;
	  
	 }
	 if (num < menor)
	 {
	 	menor = num;
	 }
  	if((*cab)==NULL)
  {
    *cab = new nodo;
    (*cab)->info =num;
    (*cab)->sgt=NULL;
    (*fin)=(*cab);
     
  }
  
  else
  {
    (*fin)->sgt=new nodo;
    (*fin)->sgt->info=num;
    (*fin)=(*fin)->sgt;
    (*fin)->sgt=NULL;
   
  }
   
  	}
  
  
  void alfanumerica (nodo **cab1, nodo **fin1)
  { 
    system("cls"); 
    cout << "digite un valor alfanumerico" << endl;
  	char num2;
  	cin >> num2;
  	if((*cab1)==NULL)
  {
    *cab1 = new nodo;
    (*cab1)->info1 =num2;
    (*cab1)->sgt=NULL;
    (*fin1)=(*cab1);
  }
  else
  {
    (*fin1)->sgt=new nodo;
    (*fin1)->sgt->info1=num2;
    (*fin1)=(*fin1)->sgt;
    (*fin1)->sgt=NULL;
  }
  }
  void muestra(nodo *cab)
  {
  	cout<<"EL CONTENIDO DE LA LISTA A ES : " ;
  nodo* temp;
  
  temp=cab;
  while ( temp != NULL)
  { 
    cout<<temp->info<<"   ";
    temp=temp->sgt;
  }
  cout<<"\n" ;
  cout << "el elemento mayor de la lista es " << mayor << " y el elemento menor es " << menor << endl ; 
  getch();
  }
  
  void muestra1(nodo *cab1)
  {
  	int k;
  	int numeros1=0;
  	int letras1=0;
  	cout<<"EL CONTENIDO DE LA LISTA B ES : ";
  nodo* temp1;
  temp1=cab1;
  while ( temp1 != NULL)
  {
    cout<<temp1->info1<<"   ";
    k= isdigit (temp1->info1);
    if (k==0)
    {
       numeros1++;	
	}
	else 
	{
		letras1++;
	}
    temp1=temp1->sgt;
  }
  cout << "\n";
  cout << "la lista contiene " << numeros1 << " letras y  " << letras1 << " numeros "<< endl ;
  getch();
  }
  

 
 
 
 
  //else 
   //{ 
   // system ("cls");
   // cout << "numero repetido en la posicion" << prepetido << endl ;
   // system("PAUSE"); 
   //}
