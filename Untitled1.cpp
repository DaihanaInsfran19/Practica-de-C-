#include <iostream>
#include <conio.h>

using namespace std;
int main(){
string nombre[5];
   int nota[5];
   int promedio=0;
   int suma=0;
   int i=0;
   int  nota_mayprom=0;
   for( i= 0; i<5;i++){
   	 cout<<"ingrese nombre del alumno:";
   	 cin>> nombre[i];
   	 
   	 cout<<"ingrese la nota:";
   	 cin>>nota[i];
   	  suma=suma+nota[i];
   	   
   	  	  	
   }
   promedio= suma/5;
   cout<<" el promedio es :"<<promedio<<endl;
   
   cout<<"los nombre de los alumnos con notas mayor al promedio:"<<nota_mayprom;
   
   getch();
   
  return 0; 
}
