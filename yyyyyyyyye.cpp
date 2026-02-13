#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int numeros[10];
	int posicion=0;
	int suma=0;
	
	for(int i=0;i<10;i++){
	
		cout<<"ingrese los numeros ";
		cin>>numeros[i];	
	}
	
	for(int i=0;i<10;i++){
			if(numeros[i]%2==0){
			cout<<" el numero es par:"<<numeros[i]<<endl;
		} if(numeros[i]==posicion)
			posicion=numeros[i=i+1];
			suma=suma+numeros[i=i+1];
		
		 }
		
	
	cout<<" suma de los numeros pares en posiciones impares :"<<suma<<endl;
	
	getch ();
	return 0;
	}
	
