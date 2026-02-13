/* cargar un vector de 12 elementos . Determinar e imprimir la suma y 
la cantidad de elementos positivos  y negativos*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){  
 int vec[12];
 int suman=0;
 int sumap=0;
  int negativo=0;
 int positivo=0;
int i=0;
  for (int i=1;i<=12;i++){
   printf("ingrese los elementos:");
   scanf("%d",&vec[i]);
   
    if(vec[i]<0){
    	negativo++;
    	suman=suman+vec[i];
	}
    else {
    	positivo++;
        sumap=sumap+vec[i];
	}
	
  }
   cout<<" la suma de los numeros positivo es : "<<sumap<<endl;
   cout<<" la cantidad de numeros positivos es: "<<positivo<<endl;
    cout<<" la cantidad de numeros negativos es: "<<negativo<<endl;
    cout<<" la suma de los numeros negativos es : "<<suman
	<<endl;
    
    
    return 0;
	
}
