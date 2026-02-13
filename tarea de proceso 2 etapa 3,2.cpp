/* una agencia de automotri distribuye r modelos diferentes de coches y tiene 3 vendedore. se desea un programa que se escribo lo siguiente:
a.el resultado de automoviles vendidos por cada vendedor.
b. el numero total de cada modelo vendido por todos los vendedores.
c.para entregar el premio al mejor vendedor,necesita saber cual es el vendedor que mas coche ha vendido.
imprimir los resultados y la matriz cargada.   */
#include<stdio.h>
#include <iostream>
using namespace std;

int main(){
 int f=5;
 int c=3;
int m[f][c];
int i=0;
int k=0;
int suma=0;
int may_vendedor=0;
int cantmay_vendedor = 0;

    for(int k=0;k<f;k++){
    for(int i=0;i<f;i++){
   cout<<"Ingrese la cantidad de autos vendidos por el vendedor: "<<i+1<<" y la marca: "<<k+1<<": ";
   cin>>m[k][i]; 
  }
 }


    for(int i=0;i<c;i++){
    for(int k=0;k<f;k++){
      suma= m[k][i];
    }
   if(suma > cantmay_vendedor){
     may_vendedor = i+1;
    cantmay_vendedor = suma;
    }
   cout<<"La cantidad de autos vendidos por el vendedores de: "<<suma<<"\n";
    suma = 0;
} 
for(k=0;k<f;k++){
for(i=0;i<c;i++){
suma= m[k][i];
}
cout<<"La cantidad de autos del modelo: "<<k+1<<" se vendio: "<<suma<<"\n";
suma= 0;
} 

cout<<"El mejor vendedor fue el: "<<may_vendedor<<endl;
cout<<" el mismo vendio: "<<cantmay_vendedor<<endl;

cout<<"Esta es la matriz cargada: \n";
for(k=0;k<f;k++){
cout<<m[k][0]<<" "<<m[k][1]<<" "<<m[k][2]<<"\n";
}
cout<<"\n";
return 0; 
}
