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
    }
}

cout<<"Esta es la matriz cargada: \n";

for(int f=0;f<n;f++){


	
cout<<matriz[f][0]<<" "<<matriz[f][1]<<" "<<matriz[f][2]<<" "<<"\n";

}

int mayor_num_ma=0;
for( int c=0;c<m;c++)
{
    for(int f=0;f<n;f++)
    {
      
      		if(c==0){
    	if(f<n)
    		if(matriz[f][c]>mayor_num_ma){
			
			mayor_num_ma=matriz[f][c];
    }
		}
      	
	  
        
    }
}

cout<<" este es el mayor numero encontrado entre los elementos de la matriz:"<<mayor_num_ma<<endl;
cout<< " y este se encuentra en la posicion:";

int pos=0;
int pos_mayor=0;
for(int f=0;f<n;f++){
for(int c=0;c<m;c++){
 pos=0;
 if(matriz[f][c]==mayor_num_ma){
 
 	
 			pos=f+1;
 pos_mayor=pos;
  
  
	 cout<<pos_mayor<<endl;	 
	 }
	
 }
	
}




 int vec1[100],i=0;
int t=0;

cout<<" ingrese la cantidad de elementos para el vector 1:";
cin>>t;
 
for( int i=0;i<t;i++){
cout<<" ingrese los numeros que desea:";
cin>>vec1[i];
   
}

for( int i=0;i<t;i++){
cout<<"los elemento del vector 1:"<<vec1[i]<<endl;
   
}


cout<<endl;
int k=0;
 int vec2[100],j=0;
 
 cout<<" ingrese la cantidad de elementos para el vector 2:";
cin>>k;

for( int j=0;j<k;j++){
cout<<" ingrese los numeros que desea:";
cin>>vec2[j];
   
}

for( int j=0;j<k;j++){
cout<<"los elemento del vector 2:"<<vec2[j]<<endl;
   
}

cout<<endl;
int suma_vec1=0;

    
        for( int i=0;i<t;i++){
     

     suma_vec1+=vec1[i]; 


}cout<<" esta es la suma de la vec1 con el vec 1:"<<suma_vec1<<endl; 
    

int suma_vec2=0;
    
        for( int j=0;j<k;j++){
     

     suma_vec2+=vec2[j]; 


}cout<<" esta es la suma de la vec1 con el vec 2:"<<suma_vec2<<endl; 

int suma_total_vectores=0;
   suma_total_vectores=suma_vec1+suma_vec2;
   cout<<" la suma total de los dos vectores:"<<suma_total_vectores<<endl;


int resta_vec1_vec2=0;

for( int i=0;i<t;i++){
for( int j=0;j<k;j++){

   resta_vec1_vec2=vec1[i]-vec2[j];
}
   
}cout<<" la resta entre los dos vectores :"<<resta_vec1_vec2;












return 0;
}
