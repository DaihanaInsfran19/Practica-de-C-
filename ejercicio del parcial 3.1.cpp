/*dada la matriz de elementos reales,de dimension 4*4.hagna un progrmama estructurado que nos brinde las siguientes opciones segun sean deseadas por 
el usuario.
a)- el menor entres los elementos que se encuentran en la diagonal principal.
b)- los menores entre los elementos que se encuentre en cada columna.
c)- el mayor entre los menores de cada una cada fila.      */

# include<iostream>
#include<conio.h>

using namespace std;

int main(){
  int m[4][4];
 int fila=0;
 int columna=0;
  int menor_numero=0;
  int menor_columna=0;
  int mayor_men_fila=0;
  int menor_fila=0;
  int menor=0;

  for(int fila=0; fila<4;fila++){
  for(int columna=0; columna<4;columna++){
  	cout<<"ingrese los elementos a la matriz:";
  	cin>>m[fila][columna];
  	
           
  }
  }
  for(int fila=0;fila<4;fila++){
cout<<m[fila][0]<<" "<<m[fila][1]<<" "<<m[fila][2]<<" "<<m[fila][3]<<" "<<"\n";
}

  cout<<"\n";
  
  cout<<" la diagonal princial:";
  
  for(int fila=0;fila<4;fila++){
  	cout<<"\t"<<m[fila][fila];
  	
  	if(m[fila][fila]<=fila){
  		
  		menor_numero=m[fila][fila];
  		
	  }
	 
  }
   cout<<"\n";
  cout<<" el menor numero de la diagonal principal:"<<menor_numero<<endl;
  
  
        
        
                for(int columna = 0; columna < 4; columna++) 
                {
                	for(int fila=0;fila<4;fila++){
					
                    if (m[fila][columna]< menor) 
                    {
                        menor=m[fila][columna];
                        menor_columna=columna;
                        
                    }
                }
            }
            
            menor=0;
        for(int fila = 0; fila < 4; fila++) 
                {
                    if (m[fila][columna]< menor) 
                    {
                        menor=m[fila][columna];
                        menor_fila=fila;
                        
                    }
                }
            
        
cout<<" el menor valor de fila:"<<menor_fila<<endl;
    
  cout<<" el valor menor de las columnas:"<<menor_columna<<endl;
 
  getch ();
  return 0;
}
