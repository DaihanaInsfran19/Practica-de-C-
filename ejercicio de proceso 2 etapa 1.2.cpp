/* cargar la matriz de ordenador 3*4. determinar e imprimir la suma de 
elementos que se hallan en la  segunda fila*/
#include<iostream>

using namespace std;
int main(){
	int m[3][4];
    int suma=0;
	int i=0;
	int j=0;
    int posicion=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
	   	cout<<"ingrese el numeros";
		cin>>m[i][j];
		
		if(m[i][j] != posicion ){
			posicion++;
			suma=suma+posicion;
		}
	}
	}
	cout<<"la suma de los numeros multiplos:"<<suma<<endl;

	
	
	return 0;
}
