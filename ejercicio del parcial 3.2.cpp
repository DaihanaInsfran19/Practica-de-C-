/* definir y cargar una matrizde orden 3*3.se solicita un algoritmo que cree un vector cuyos elementos sean la sumatoria de cada columna menos 
el ultimo elemenyo de dicha columna. imprimir el vertor resultante. */
# include<iostream>
#include<conio.h>

using namespace std;

int main(){
  int m[3][3];
 int fila=0;
 int columna=0;
  int menor_numero=0;
  int menor_columna=0;
  int mayor_men_fila=0;
  
  for(int fila=0; fila<3;fila++){
  for(int columna=0; columna<3;columna++){
  	cout<<"ingrese los elementos a la matriz:";
  	cin>>m[fila][columna];
  }
  }
  
  getch ();
  return 0;
}
