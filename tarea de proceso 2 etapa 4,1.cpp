/* cargar una matriz de orden 3*3.determinar e imprimir el promedio de los elementos que se hallan por encima diagonal principal de dicha matriz y 
la suma que se hallan por encima diagonal principal  de dicha matriz y la suma de los elementos cuyo conteniso sea par  */
#include <iostream>
#include <conio.h>
using namespace std;
int fila=0,columna=0;
int suma_par=0;
float promedio=0.0, suma=0.0;
int matriz[3][3];
int main(){
for (fila=0;fila<3;fila++){
for (columna=0;columna<3;columna++){
cout << "Ingrese los elementos de la matriz ["<<fila<<"]["<<columna<<"]: ";
cin >> matriz[fila][columna];
if (fila<columna){
suma=suma+matriz[fila][columna];
}
if (matriz[fila][columna]%2==0){
suma_par=suma_par+matriz[fila][columna];
}
}
}
promedio=suma/3;
cout << "El promedio de los elementos por encima de la diagonal principal es: " << promedio << "\n";
cout << "La suma de los elementos pares es: " << suma_par << "\n";
getch();
return 0;
}

