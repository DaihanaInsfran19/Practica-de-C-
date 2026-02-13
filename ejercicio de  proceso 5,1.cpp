/* cargar e imprimir un vector de 50 elementos.invertir el vector en otro, e imprimir el vcetor resultante */
#include <iostream>
#include<conio.h>

using namespace std;

int main(){
	int vect[5];
	int i=0;
   
	int vec_in[5];
	
	for( int i=0; i<5;i++){
			cout<<"ingrese numeros :";
		cin>>vect[i];
			if(vect[i] !=vec_in[i]){
           vec_in[i]=-1*vect[i];

      }  
	
	}
	
	for(int i=0;i<5;i++){
		cout<<"\n vector original:"<<vect[i]<<endl;
		
	cout<<" \n vector con valores invertidos:"<<vec_in[i]<<endl;
	}
	
	return 0;
}
