#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>


using namespace std;

struct nodo{
int info;
char info1;
nodo *sgt;
};


const int TPILA=10; 

class PILA{
  public:
    int mipila[TPILA];   
    int apilados;       
    void reset();         
    void push(int v);     
    int pop();          
		};

	void PILA::reset()        
	{
  	apilados=0;
	}
	void PILA::push(int v)
	{
  	if(apilados<TPILA)
  	{
    mipila[apilados++]=v;
  	}
	}

	int PILA::pop()
	{
  	if(apilados>0)
  	{
    return(mipila[--apilados]);
  	}
  	else
    cout<<"No existen datos para eliminar.  ERROR ";
    return (0);
	}





void submenu ();
void pilas ();
double potencia (int val , int pote);
int repetidos (nodo *cab , int y);
void numerica (nodo **cab, nodo **fin);
void alfanumerica (nodo **cab1, nodo **fin1);
void muestra(nodo *cab);
void muestra1(nodo *cab1);
int repetido (int y);
int mayor =0,menor =0;
int jo=0;
int num;
int jov;
char num2;
int rrepetido=0;


main()
{
  char palabra[9];
  int op;
  op=1;
  char pali,validar;
  

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
      cout << "INGRESE 10 LETRAS O NUMEROS"<< endl;
      for (int i=0;i<9;i++)
      {
      	cin >> palabra[i];
	  }
	  
	  system("cls"); 
	  
	   
	  cout << "el arreglo al derecho es ";
	   for (int i=0;i<9;i++)
      {
      	cout << palabra[i];
      	
	  }
	   cout << endl;
	   cout << "el arreglo al reves es ";
	   for (int i=8;i>=0;i--)
        {
      	cout << palabra[i];
      	
	    }
	   jov=8;
	   for (int i=0;i<9;i++)
	   {
	  	if ((isdigit(palabra[i])==0)&&(isdigit(palabra[jov])==0))
	  	{
	  		pali=0;
		}
		  else {
		  	pali=1;
		  }
	  	
	  	if (palabra [i]!= palabra [jov])
	  	  {
	  		validar =1;
		  }
		  jov--;
	   }
	  
	  if (validar == 0)
	  {
	  	if (pali==0)
	  	{
		  
	  	cout << "\n";
	  	cout << "El arreglo forma un palindromo";
	  	}
	  	else 
	  	{
	  		cout << "\n";
	  		cout << "El arreglo forma una capicua";
		  }
	  }
	  else 
	  {
	  	cout << "\n";
	  	cout << "EL CONTENIDO DEL ARREGLO NO FORMA UN PALINDROMO NI UNA CAPICUA";
	  }
	  getch();
          break;
    case 2:
      	submenu ();
        break;
        
    case 3:
    	pilas ();
    	break;
    case 4:
    	exit (0);
    	break;
}

    
      
    
     
    
  }
  
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
    		    system ("cls");
    			cout << "Digite un numero"<< endl ;	
  	            cin >> num;
				
				if (repetidos (c,num)==0)
				{
				
    			numerica(&c, &f);
    			}
    			else 
    			{
    				cout << "El elemento ya existe en la posicion " << rrepetido;
    				getch();
				}
			}
    		else if (lista == 'B' or  lista == 'b')
    		{
    		    system("cls"); 
                cout << "digite un valor alfanumerico" << endl;
  	            cin >> num2;
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
  
  int repetidos (nodo *cab , int y)
  {
  	nodo* temp;
    temp=cab;
    int prepetido=0;
    y=0;
  	 while ( temp != NULL)
  { 
    if (temp->info==num)
    { 
      y = 1;
      rrepetido=prepetido;
	}
	prepetido++;
    temp=temp->sgt;
    
  }
  
     return (y);
  }

void pilas ()
  {
	PILA stack;
  stack.reset();
  int  dato;
  int out;
  int total=0;
	system("cls");
	cout << "Ingrese 10 Elementos a la pila "<< endl;
	for (int i=0;i<10;i++)
	{
	cin>>dato;
	stack.push(dato);
	total = total+dato;
      }
     
	getch();
	
	cout<<"Los datos en la pila actualmente son: "<<endl;
	for(int i=0;i<stack.apilados;i++)
	{ cout<<stack.mipila[i]<< "  "; }
   
     cout << "\n";
     cout << "Numeros Pares : ";
     for (int i=0;i<stack.apilados;i++)
     {
     	
     	if (stack.mipila[i]%2 == 0)
     	{
     		cout << stack.mipila[i] << " " ;
     		
		 }		 
	 }
	 cout << "\n";
     cout << "Numeros impares : ";
     for (int i=0;i<stack.apilados;i++)
     {
     	
     	if (stack.mipila[i]%2 != 0)
     	{
     		cout << stack.mipila[i] << " " ;
     		
		 }		 
	 }
	 cout << "\n";
	 cout << "el promedio de los elementos es :" << total/10 <<endl;
	 cout << "\n";
	 cout << "digite el valor al que desea elevar : "<<endl;
	 cin >> out;
	 cout << "\n";
	 cout << "la suma total de los numeros "<< total << " elevado a la :" << out << " da como resultado :" << potencia(total,out);
	 
	 
	 
	getch();
	
   }
 
 
 double potencia (int val , int pote)
 {
 int e;
   e= pow(val,pote);
   return e;
 }
