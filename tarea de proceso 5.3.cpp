/* se tiene el vector A con 50 elementos, numeros 0 (cero) esta almacenado en forma alternada en todos el vector
imprimir un mensaje especificando si los ceros estn en las posiciones pares o en las posiciones impares*/
#include <iostream>
#include<conio.h>

using namespace std;

 int main(){
	int a[10]; // CAMBIAR A 50 DESPUES
	
	int i =0, selec=0;

	
		cout<<" ingrese en que psosicion desea el 0 1 para par y 2 para impar:";
		cin>>selec;
		
		if(selec ==1){
			for(int i=0;i<10;i++){
				if(i%2==1){
					cout<<"ingrese el numero:";
					cin>>a[i];
				}
				else{
					a[i]=0;
				} 
			}
			
		} else{
			for( int i=0;i<10;i++){
				if(i%2==0){
					cout<<" ingrese el numero:";
					cin>>a[i];
				}
				else{
					a[i]=0;
				}
				
			}
		}
	
	   for(int i=0;i<5;i++){
	   	 cout<<" el vector es el siguiente :"<<a[i]<<"\n";
	   }
	   if(a[2]==0){
	   	cout<<" el 0 esta en posicion par";
	   }
	   else{
	   	cout<<" el 0 esta en posicion impar";
	   }
	
	getch ();
	return 0;
}
