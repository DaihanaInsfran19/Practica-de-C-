/*dada la matriz de elementos reales,de dimension 4*4.hagna un progrmama estructurado que nos brinde las siguientes opciones segun sean deseadas por 
el usuario.
a)- el menor entres los elementos que se encuentran en la diagonal principal.
b)- los menores entre los elementos que se encuentre en cada columna.
c)- el mayor entre los menores de cada una cada fila.      */

# include<iostream>
#include<conio.h>

using namespace std;

int main(){
  int m[4][4];
 int fila=0;
 int columna=0;
  int menor_numero=0;
  int menor_columna=0;
  int mayor_men_fila=0;
  
  for(int fila=0; fila<4;fila++){
  for(int columna=0; columna<4;columna++){
  	cout<<"ingrese los elementos a la matriz:";
  	cin>>m[fila][columna];
  }
  }
  
  getch ();
  return 0;
}
