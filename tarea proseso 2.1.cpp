/*Carga y imprime el vector de 7 elementos .Determinar e imprimir la cada elemento 
y la suma de los elementos. */
#include<iostream>  
#include<conio.h>
   
using namespace std;

int main(){
int vec[7];
int suma=0;
int i=0;

	
	for( int i=1;i<=7;i++){
		printf("ingrese los numeros:");
		scanf("%d",&vec[i]);
		suma=suma+vec[i];		
	}
		
		
	
	 
	cout<<"\n los elementos:" <<vec[7];
	
   cout<<"\n la suma total de los numeros ingresados es :"<<suma;
 
	return 0;
   getch();
		
}

/*me falta que imprima los elementos todo los demas esta bien
solo este falat */

