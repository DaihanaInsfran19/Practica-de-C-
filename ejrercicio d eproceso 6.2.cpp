/* leer un vector de numeros e imprimir la posicion en donde se encuentra 
el primer multiplo de 5.*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int  vec[5];
	int i=0;
	int mult5=0;
	int posicion;
	 
	 for(int i=0; i<5;i++){
	 	cout<<" ingrese los numeros :"<<i+1<<endl;
	 	cin>>vec[i];
	    
	    
	 }
	cout<<" se encuentran en la posicion :";
	for(int i=0;i<5;i++){
		if(vec[i]%5==0){
			mult5++;
		 posicion=i+1;
	 	   cout<<posicion<<endl;
		}
	}
	cout<<endl;
	cout<<" numeros multiplos de 5 son:"<<mult5<<endl;
	getch();
	return 0;
}
