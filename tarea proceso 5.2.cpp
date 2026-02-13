/* diseñar un algoritmo que lea el  nombre y la nota de 10 alumnos y calcule la calificacion promedio. 
el algoritmo debe imprimir el nombre de aquellos alumnos que su notas estan por encima del promedio en   */
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
string nombre[5];
   int nota[5];
   float promedio;
   float suma=0;
   int i=0;
    int mayor=0;
    string alumno_nota="";
   for(  i= 0; i<5;i++){
   	 cout<<"ingrese nombre del alumno:"<<i+1<<endl;
   	 cin>> nombre[i];
   	 
   	 cout<<"ingrese la nota:";
   	 cin>>nota[i];
   	  suma=suma+nota[i];
   	  				 
   	  	
   }
   promedio= suma/5;
   cout<<" \nel promedio es:"<<promedio<<endl;
   	  for( i=0; i<5;i++)	{
   	  	 
   	  	cout<<"los nombre de los alumnos con notas mayor al promedio:"<<"\n";
		 	if(nota[i]>promedio){
		 		
		 		cout<<nombre[i]<<"\n";
			 }
		 
		 }
   getch();
   
  return 0; 
}
