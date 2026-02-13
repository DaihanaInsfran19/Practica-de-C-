/* leer un vector de numeros y contar la cantidadde numeros menores que el promedio*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int vec[5],i=0;
	
	int prom=0;
	int suma=0;
	int menor=0;
	for(int i=0; i<5;i++){
		cout<<"ingrese numeros:";
		cin>>vec[i];
		suma=suma+vec[i];
		prom=suma/5;
		}
	
	for(int i=0;i<5;i++){
		if(vec[i]<=prom){
			menor ++;
	}

		
	}
	cout<<" el promedio es :"<<prom<<endl;
	
	cout<<" la cantidad de numeros menor al promedio es:"<<menor<<endl;
	getch();
	return 0;
}
