
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct nodo{
int info;
nodo *sgt;
};
int promedio (int y);
void cantidad1 ();
void numMayor ();
void agrega(nodo **cab, nodo **fin);
void muestra(nodo *cab);
int cantidad=0;
int mayor =0;
int suma =0;
int main()
{ 
  nodo *c=NULL,*f=NULL;
  int opcion;
  do
  {
    system("cls");
    cout<<"***MENU PRINCIPAL***"<<endl;
    cout<<"1- INSERTAR DATOS EN LA LISTA"<<endl;
    cout<<"2- MOSTAR DATOS DE LA LISTA"<<endl;
    cout<<"3- MOSTAR CANTIDAD DE ELEMETOS , SUMA , TOTAL , Y PROMEDIO"<<endl;
    cout<<"4- MOSTAR EL ELEMENTO MAYOR DE LA LISTA"<<endl;
    cout<<"5- SALIR"<<endl;
    cout<<"ELIJA UNA OPCION... " <<endl;
    cin>>opcion;
    switch(opcion)
    {
      case 1: agrega(&c, &f);
	  break;
      case 2: muestra(c);
	  break;
      case 3: cantidad1();     
	  break;
      case 4: numMayor ();   	 
      	break;
      case 5:
      	exit(0);
      	break;
    }
  }
  while(opcion!=5);
  system("PAUSE");
  return 0;
}

void agrega(nodo **cab, nodo **fin)
{
  int num;
  cout<<"INGRESE UN DATO ENTERO"<<endl;
  cin>>num;
  if (num>mayor)
  {
  mayor = num;
}
  suma = suma+num;
  cantidad = cantidad+1;
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
void muestra(nodo *cab)
{
  cout<<"ELEMENTOS EN LA LISTA"<<endl;
  nodo* temp;
  temp=cab;
  while ( temp != NULL)
  {
    cout<<temp->info<<"   ";
    temp=temp->sgt;
  }
  getch();
}

void cantidad1()
{
	if (cantidad == 0)
      {
      	cout << "la lista esta vacia";
	  }
      
      else if (cantidad <=1)
      {
      cout << "la lista contiene " << cantidad << " elemento\n";
      }
	  else{ cout << "la lista contiene " << cantidad << " elementos\n";
	  }  
	  
	  cout << "La suma total de los elementos de la lista es " << suma << "\n" ;
	  cout << "El promedio de los numeros es un total de  " << promedio(suma) << "\n" ;
	  
	  getch(); 
}
 void numMayor ()
 {
 	cout << "el numero mayor de la lista es " << mayor ;
      	getch();
 }
int promedio (int y)
{

return (suma/cantidad);
}

