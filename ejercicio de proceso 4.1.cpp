/*  leer un vector de numeros e imprimir la suma de Los elementos impares que se encuentra en posiciones pares */
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int numeros[5];
	int posicion=0;
	int suma=0;
	
	for(int i=0;i<5;i++){
	
		cout<<"ingrese los numeros ";
		cin>>numeros[i];	
	}
	
	for(int i=0;i<5;i=i+2){
		
			if(numeros[i]%2!=0){
			cout<<" el numero es impares:"<<numeros[i]<<endl;
			suma=suma+numeros[i];
		
	}
		
}
	cout<<" suma de los numeros impares en posiciones pares :"<<suma<<endl;
	
	getch ();
	return 0;
	}

