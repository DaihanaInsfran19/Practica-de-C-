/* cargar una matriz de orden 7*7.determinar e imprimir el promedio de 
los elementos que se hallan en la diagonal principal de dicha matriz */
#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int m[7][7];
    int suma=0;
	int i=0;
	int j=0;
    int promedio=0;

    
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
	   	cout<<"ingrese el numeros";
		cin>>m[i][j];
		suma=suma+m[i][j];
	}
	}
	

	
	cout<<" diagonal principal"<<endl;
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			if(i==j){
				cout<<"\t"<<m[i][j];
			}
		}
		
	}
	getch();
	promedio=suma/49;
	
cout<<"la suma de los numeros :"<<suma<<endl;
	
	return 0;
}
