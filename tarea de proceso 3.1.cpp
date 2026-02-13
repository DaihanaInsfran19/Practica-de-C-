/*dimensionar un vector de 10 elementos, buscar entre los elementos ingressados el mayor, el menor,y si entre los elementos
ingresados valores superiores a 30 pera inferior a 100 sumar indicar cuantos son.*/

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){  
 int vec[10];
 int mayor=0;
 int menores=0;           // este esta listo todo bien
 int c=0;
int i=0;
int sumar=0;


for( int i=0;i<10;i++){
		cout<<"ingrese un numero:";
		cin>>vec[i];
		
		if(i==0){
			mayor= vec[i];
			menores=vec[i];
		}else{
			
			if(vec[i]>mayor){
			mayor= vec[i];
			}
			
			if(vec[i]<menores){
			menores= vec[i];
			}
		}
		
		if (vec[i]>=30 and vec[i]<=100){
		  c=c+1;
		  sumar=sumar+vec[i];
		
		}
    }
    
    
   cout<<" los numeros mayor es: "<<mayor<<endl;
   cout<<" los numeros menores es: "<<menores<<endl;
   cout<<" la suma de los numeros de valores superior de 30 y menores a 100:"<<sumar<<endl;
    
    return 0;
	
}
	
