/* se tiene una matriz de 6 surcursales que tiene almacenado su stock de mercaderias por dia(considerar 30 años). hacer un algotiymo que 
  permitan conocer:
  a) cantidad existencia de mercaderias entre cantidad de 50 a 250
  b) cantidad de existencia iguales A 0
  c) todas aquellas sucurales de filas pares cargar a un vector por separado cada sucursales 2,4,6.
  d) imprimir los vectores de las filas pares */
  
  	#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int almacen[3][2]; // tiene que se una matriz de 6 x5
int c=0;

int can_merca=0;


for( int f=0;f<3;f++)
{
    for(int c=0;c<2;c++)
    {
        cout<<"ingrese la cantidad de las mercaderias de cada sucucursal:";
        cin>>almacen[f][c];
    }
}

  cout<<"Esta es la matriz cargada: \n";
for(int f=0;f<3;f++){
cout<<almacen[f][0]<<" "<<almacen[f][1]<<" "<<almacen[f][2]<<" "<<"\n";
}


cout<<endl;

int cantidad_50_0mas=0;
int cantidad_250_0mas=0;


for( int f=0;f<3;f++)
{
    for(int c=0;c<2;c++)
    {  
        if(f==0){
        	if(c<2){
        		 if(50>=almacen[f][c]){
        	cantidad_50_0mas=almacen[f][c];
        	
		}else{
			if(250<=almacen[f][c]){
		   	cantidad_250_0mas=almacen[f][c];
		   }
		}
		
		 
		   
			}
		}
       
       
    }
}cout<<" se encuentra que la cantidad de mercaderia es 50 o superior en alguna almacen:"<<cantidad_50_0mas<<endl;
 cout<<"se encuentra que la cantidad de mercaderia es 250 o superior en alguna almacen: "<<cantidad_250_0mas<<endl;
 
 
 int cantidad_0mas=0;
for( int f=0;f<3;f++)
{
    for(int c=0;c<2;c++)
    {  
        if(f==0){
        	if(c<2){
        		 if(0==almacen[f][c]){
        	cantidad_0mas=almacen[f][c];
        	
		}
			}
		}
    } 
   }    cout<<" en algun almacen se encuentra la cantidad de 0 mercaderia:"<<cantidad_0mas<<endl;



int pares_fila[3];
	int i=0;
int pares_filas=0;
for( int f=0;f<3;f++){
    for(int c=0;c<2;c++){  
   

	  	pares_fila[i];
	  if(f==1){
	  	if(c<2){
	  		pares_filas=almacen[f][c];
		  
                
		}	
	  	pares_fila[i]=pares_filas;
	
	}	
    
	}
  }
      for(int i=0;i<3;i++){

	  cout<<"las filas pares se almacenan en este vector"<<pares_fila[i]<<endl;
       
	}	



return 0;
}
