/* tema1: dado  la matriz cuadrada de nombre P de dimension  n*n que el usuario ingrese la cantidad de elementos que se puede ingresar  en la 
matriz P de los elementos que se encuentra encima de la diaginal principal que se relize una suma con estas y que se muestre el resultado y
luego para la diagonal secundaria que se realize una resta de los elementos que se encuentra por debajo de la diagonal  utiliza  
 un contador para saber la cantidad de elementos dentro de las diagonales y un acumulador que almacene la suma total de elemnetos dentro de 
 nuestra matriz sacar el porcentaje al 50% del total.
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int f=0, c=0;
int p[100][100];
int n=0;
int contador_prin=0;
int contador_secun=0;
int suma_prin=0;
int resta_secun=0;
int suma=0;
int porcentaje=0;
cout<<" ingrese la dimesion de la matriz:";
cin>>n;
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){
	   	cout<<"ingrese el numeros:";
		cin>>p[f][c];
		
	}
	}
     cout<<endl;
     
     
      cout<<" diagonal principal los elementos que se encuentra por debajo:";
     
	 for(int f=0;f<n;f++){

     for(int c=0;c<n;c++){
     	 
       if( f+c==f+1){
	    suma_prin= suma_prin+p[f][c]; 
	   if(f+c<c+1){
       	cout<<cout<<"\t"<<p[f][c];
       	 
	   }
       }
       if( f+c==f+2){
	  
	   if(f+c<c+3){
       	cout<<cout<<"\t"<<p[f][c];
	   }
       }else{
       	if( f+c==f+3){
	  
	   if(f+c<=c+3){
       	cout<<cout<<"\t"<<p[f][c];
	   }
       }
	   }
       	
 cout<<endl;
	 contador_prin=contador_prin+1; 
	 
    }

    }
 
 
     
    cout<<endl;
     
         cout<<"la suma de los numeros de la diagonal principal :"<<suma_prin<<endl;
     //diagonla principal (arriba)
     
     
     cout<<" diagonal secundaria los elementos que se encuentra por debajo:";
     
	 for(int f=0;f<n;f++){

     for(int c=0;c<n;c++){
       if( f+c==c+1){
	    
	   if(f+c>f+1){
       	cout<<cout<<"\t"<<p[f][c];
	   }
       }
       	if( f+c==f+1){
	  
	   if(f+c>c+1){
       	cout<<cout<<"\t"<<p[f][c];
	   }
       }else{
       	if( f+c==f+2){
	  
	   if(f+c>c+1){
       	cout<<cout<<"\t"<<p[f][c];
       	
	   }
	    resta_secun=resta_secun-p[f][c];
       }
	   }
	  
 cout<<endl;
	 contador_secun=contador_secun+1; 
    }
    }
  cout<<"la resta de los numeros de la diagonal secundaria :"<<resta_secun<<endl;
  
  	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){
	   suma=suma+p[f][c];
		porcentaje=suma*0.50;
	}
	}
	
     cout<<endl;
     cout<<" la suma total:"<<suma<<endl;
     cout<<" el total de elementos de la matriz en porcentaje:"<<porcentaje<<"%";
     cout<<endl;
    
    cout<<"Esta es la matriz cargada o original: \n";
for(int f=0;f<n;f++){
cout<<p[f][0]<<" "<<p[f][1]<<" "<<p[f][2]<<" "<<"\n";
}


cout<<" la cantidad de elementos dentro de la diagonal principal :"<<contador_prin<<endl;
cout<<" la cantidad de elementos dentro de la diagonal secundaria :"<<contador_secun<<endl;
      getch();
return 0;
}
