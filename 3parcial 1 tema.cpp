#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

int matriz[100][100];
int f=0;
int n=0;
int c=0;
int m=0;
int contador_matriz=0;
 cout<<"ingrese la cantidad de elemetos de la fila:";
        cin>>n;
    cout<<"ingrese la cantidad de elemetos de la columna:";
        cin>>m;

cout<<endl;

for( int f=0;f<n;f++)
{
    for(int c=0;c<m;c++)
    {
        cout<<"ingrese  los numeros que desea :";
        cin>>matriz[f][c];
        contador_matriz=contador_matriz+1;
    }
}

cout<<"Esta es la matriz cargada: \n";

for(int f=0;f<n;f++){
	
cout<<matriz[f][0]<<" "<<matriz[f][1]<<" "<<matriz[f][2]<<" "<<matriz[f][3]<<" "<<"\n";

}

int acumulador=0;
int suma_rep_mayores=0;
int mayor_numer=0;
int contador=0;
for( int f=0;f<n;f++)
{
    for(int c=0;c<m;c++)
    {
      
      		if(f==0){
    	if(c<n)
    		if(matriz[f][c]>mayor_numer){
			
			mayor_numer=matriz[f][c];
    }      contador=contador+1;
           suma_rep_mayores=suma_rep_mayores+mayor_numer;
           acumulador=suma_rep_mayores;
		}
        
        
    }
}  cout<<" el numero mayor dentro de la matriz:"<<mayor_numer<<endl;
   cout<<" cantidad de veces que se repite el mayor:"<<contador<<endl;
   
  cout<<" la suma de los numero mayores repetidos:"<<acumulador<<endl;

int promedio=0;
int suma_total_matriz=0;


for( int f=0;f<n;f++)
{
    for(int c=0;c<m;c++)
    {
      suma_total_matriz=suma_total_matriz+matriz[f][c];
      	
        
        promedio=suma_total_matriz/contador_matriz;
    }
} cout<<" la suma total de los elementos de la matriz:"<<suma_total_matriz<<endl;
  cout<<" el promedio de  suma total de los elementos de la matriz:"<<promedio<<endl;

 int menor[100];
  int menor_numero=1;
int num=0;
int i=0;

for( int c=0;c<m;c++)
{
    for(int f=0;f<n;f++) { 
	      
			if(c<m){
    	if(f==0)
    		if(menor_numero>matriz[f][c]){
			
			menor_numero=matriz[f][c];
    }        menor[i]=menor_numero;   
		}
		
   
    }
} cout<<" el menor numero:"<<menor[i]<<endl;
	
	  
	 	
	 

return 0;
}
