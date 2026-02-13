/*leer un vector de numeros e imprimir la posiones en donde se encuentra el primer numero
5 si existe y si no dar el mensaje correspondiente  */
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int vec[100],num;
     int posicion;
	int i;
	int ban=0;
	cout<<"ingrese elementos :";
	for( int i=0; i<5;i++){
		cin>>vec[i];
	
	}	
    
   	cout<<"ingrese numero que desea buscar:";
    cin>>num;
	for(int i=0;i<5;i++){
	
		if(num==vec[i]){
		
 	     ban=1;
		cout<<"el numero"<<num<<"se encuentra en la posicion:"<<"["<<i<<"]"<<vec[i]<<endl;
             
			
 }
		 else{
		 	
  	         ban=0;
			cout<<"el numero"<<num<<"no se encuentra en ninguna de estas posicion:"<<"["<<i<<"]"<<vec[i]<<endl;
                    
			
		}
		
}           
 
 
	getch();
	return 0;
}
