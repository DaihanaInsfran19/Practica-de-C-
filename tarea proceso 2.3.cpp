/* cargar un vector de 15 elementos. Determinar e imprimir lel mayor elemento
del mismo y la posicion en que se encuentra*/
#include <iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[100],n=0,mayor=0;
	int i=0;
	 int pos;
	
	cout<<" ingrese el numero de elementos del arreglo:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<i+1<<"ingrese un numero:";
		cin>>numeros[i];
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	
	cout<<"\n el mayor elemento del vector es :"<<mayor<<endl;
	getch();
	cout<<" y se encuentra en la siguiente posicion:\n";
	for(int i=0; i<=n;i++){
		if (mayor == numeros[i]){
			cout<<i+1<<endl;
		}
	}
	cout<<endl;
	return 0;
} 

