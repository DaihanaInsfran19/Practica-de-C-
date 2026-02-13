/*  usar la siguiente tabla  y escribir los algoritmos para caso:
articulos 
a)Calcular que articulo estan agotados en el almacen 1.
b) en cualquier de los almacenes cual es el articulo que esta agotado( debe de indicar el numeros de almacen en artriculo)
c) indicar el numero de articulo de existencia en cada uno de los almacenes.
d) cargar los costos de cada articulo en un vector costo,deternminar el costo total de cada articulo en cada almacen
    d.a) el costo total independiente de inventario en cada almaven.
	d.b) el costo total de cada articulo en todos los almacenes
	d.c) el costo total del inventario.         */
	#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int almacen[3][4];
int f=0;
int c=0;
 int pos=0;
int ar_almacen1=0;
int almacen2=0;
int pos_ar=0;
int posicion=0;
for( int f=0;f<3;f++)
{
    for(int c=0;c<4;c++)
    {
        cout<<"ingrese los las cantidad de articulos dentro del almacen:";
        cin>>almacen[f][c];
    }
}

  cout<<"Esta es la matriz cargada: \n";
for(int f=0;f<3;f++){
cout<<almacen[f][0]<<" "<<almacen[f][1]<<" "<<almacen[f][2]<<" "<<almacen[f][3]<<" "<<"\n";
}




cout<<" articulo agotados en el almacen 1:";
    for(int c=0;c<4;c++){
	  pos=0;
       if(almacen[f][c]==0){
       
        pos=c+1;
        ar_almacen1= pos;
     cout<<ar_almacen1<<endl;
    } 
    
    }

    cout<<" se encuentran en la posicion articulo agotado almacen 2 en la posicion :";
    for(int f=0;f<3;f++){
	   
       if(almacen[f][c]==0){
       
        posicion=f+1;
        almacen2= posicion;
     cout<<almacen2<<endl;
        
      for(int c=0;c<4;c++){
     	if(almacen[f][c]==0){
        pos_ar=c+1;
        almacen2= pos_ar;
        cout<<pos_ar<<endl;
    
    } 
	 }
    } 
    }
     int almacen1_arcan=0;
     int suma_ar_al1=0;
       for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		   
		   if(f==0){
		   	if(c<4){
		   		almacen1_arcan=almacen[f][c];
                suma_ar_al1=suma_ar_al1+almacen1_arcan;
        
			   }
		   }
       	
      }
    }
   
     cout<<" cantidad de articulos del almacen 1:"<<suma_ar_al1<<endl;
     
     int almacen2_arcan=0;
     int suma_ar_al2=0;
       for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		   
		   if(f==1){
		   	if(c<4){
		   		almacen2_arcan=almacen[f][c];
                suma_ar_al2=suma_ar_al2+almacen2_arcan;
        
			   }
		   }
       	
      }
    }
   
     cout<<" cantidad de articulos del almacen 2:"<<suma_ar_al2;
    
     cout<<endl;
     int almacen3_arcan=0;
     int suma_ar_al3=0;
       for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		   
		   if(f==2){
		   	if(c<4){
		   		almacen3_arcan=almacen[f][c];
                suma_ar_al3=suma_ar_al3+almacen3_arcan;
        
			   }
		   }
       	
      }
    }
    
     cout<<" cantidad de articulos del almacen 3:"<<suma_ar_al3;
    
   cout<<endl;
    
 int i=0;
 int costo[4];
 

cout<<endl;
for(int i=0;i<4;i++){
cout<<" los costos cargados:"<<costo[i]<<endl;
}
     //comienza el almacen 1
    int costo_al1_ar1=0;
     for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		   if(i==0){
		   if(f==0){
		   	if(c<1){
		   	 costo_al1_ar1=almacen[f][c]*costo[i];
               }
			   }
			   
		      }
		   }
       	
      }
    }
    
    cout<<"el costo total del articulo 1 del almacen 1:"<<costo_al1_ar1;
     cout<<endl;
     int costo_al1_ar2=0;
     for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		   if(i==1){
		   if(f==0){
		   	if(c<2){
		   	 costo_al1_ar2=almacen[f][c]*costo[i];
        
        
               }
			   }
			   
		      }
		   }
       	
      }
    }
    
    cout<<"el costo total del articulo 2 del almacen 1:"<<costo_al1_ar2;
    cout<<endl;
     
     int costo_al1_ar3=0;
     for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		   if(i==2){
		   if(f==0){
		   	if(c<3){
		   	 costo_al1_ar3=almacen[f][c]*costo[i];
        
               }
			   }
			   
		      }
		   }
       	
      }
    }
    
    cout<<"el costo total del articulo 3 del almacen 1:"<<costo_al1_ar3;
    cout<<endl;
   
     
     int costo_al1_ar4=0;
     for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		   if(i==3){
		   if(f==0){
		   	if(c<4){
		   	 costo_al1_ar4=almacen[f][c]*costo[i];
        
               }
			   }
			   
		      }
		   }
       	
      }
    }
    
    cout<<"el costo total del articulo 4 del almacen 1:"<<costo_al1_ar4;
    cout<<endl;
     int suma_al1=0;
      for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		 suma_al1=costo_al1_ar1+costo_al1_ar2+costo_al1_ar3+costo_al1_ar4;
		   
		 
		   }
       	
      }
    }
    cout<<" la suma total de los articulos del almacen 1:"<<suma_al1<<endl;
    
    //comienza el almacen 2
    
    int costo_al2_ar1=0;
     for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		   if(i==0){
		   if(f==1){
		   	if(c<1){
		   	 costo_al2_ar1=almacen[f][c]*costo[i];
               }
			   }
			   
		      }
		   }
       	
      }
    }
    
    cout<<"el costo total del articulo 1 del almacen 2:"<<costo_al2_ar1;
     cout<<endl;
     int costo_al2_ar2=0;
     for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		   if(i==1){
		   if(f==1){
		   	if(c<2){
		   	 costo_al2_ar2=almacen[f][c]*costo[i];
        
        
               }
			   }
			   
		      }
		   }
       	
      }
    }
    
    cout<<"el costo total del articulo 2 del almacen 2:"<<costo_al2_ar2;
    cout<<endl;
     
     int costo_al2_ar3=0;
     for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		   if(i==2){
		   if(f==1){
		   	if(c<3){
		   	 costo_al2_ar3=almacen[f][c]*costo[i];
        
               }
			   }
			   
		      }
		   }
       	
      }
    }
    
    cout<<"el costo total del articulo 3 del almacen 2:"<<costo_al2_ar3;
    cout<<endl;
   
     
     int costo_al2_ar4=0;
     for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		   if(i==3){
		   if(f==1){
		   	if(c<4){
		   	 costo_al2_ar4=almacen[f][c]*costo[i];
        
               }
			   }
			   
		      }
		   }
       	
      }
    }
    
    cout<<"el costo total del articulo 4 del almacen 2:"<<costo_al2_ar4;
    cout<<endl;
     int suma_al2=0;
      for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		 suma_al2=costo_al2_ar1+costo_al2_ar2+costo_al2_ar3+costo_al2_ar4;
		   
		 
		   }
       	
      }
    }
    cout<<" la suma total de los articulos del almacen 2:"<<suma_al2<<endl;
    
    // comienza el almacen 3
    
      int costo_al3_ar1=0;
     for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		   if(i==0){
		   if(f==2){
		   	if(c<1){
		   	 costo_al3_ar1=almacen[f][c]*costo[i];
               }
			   }
			   
		      }
		   }
       	
      }
    }
    
    cout<<"el costo total del articulo 1 del almacen 3:"<<costo_al3_ar1;
     cout<<endl;
     int costo_al3_ar2=0;
     for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		   if(i==1){
		   if(f==3){
		   	if(c<2){
		   	 costo_al3_ar2=almacen[f][c]*costo[i];
        
        
               }
			   }
			   
		      }
		   }
       	
      }
    }
    
    cout<<"el costo total del articulo 2 del almacen 3:"<<costo_al3_ar2;
    cout<<endl;
     
     int costo_al3_ar3=0;
     for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		   if(i==2){
		   if(f==2){
		   	if(c<3){
		   	 costo_al3_ar3=almacen[f][c]*costo[i];
        
               }
			   }
			   
		      }
		   }
       	
      }
    }
    
    cout<<"el costo total del articulo 3 del almacen 3:"<<costo_al3_ar3;
    cout<<endl;
   
     
     int costo_al3_ar4=0;
     for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		   if(i==3){
		   if(f==2){
		   	if(c<4){
		   	 costo_al3_ar4=almacen[f][c]*costo[i];
        
               }
			   }
			   
		      }
		   }
       	
      }
    }
    
    cout<<"el costo total del articulo 4 del almacen 3:"<<costo_al3_ar4;
    cout<<endl;
     int suma_al3=0;
      for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		 suma_al3=costo_al3_ar1+costo_al3_ar2+costo_al3_ar3+costo_al3_ar4;
		   
		 
		   }
       	
      }
    }
    cout<<" la suma total de los articulos del almacen 3:"<<suma_al3<<endl;
    
     int suma_total_inv=0;
      for(int f=0;f<3;f++){
       	for(int c=0;c<4;c++){
		  for(int i=0;i<4;i++) {
		 suma_total_inv= suma_al1+suma_al2+suma_al3;
	
		   }
       	
      }
    }
    
    cout<<" lA SUMA TOTAL DEL INVENTARIO DEL ALMACEN:"<<suma_total_inv<<endl;
    

return 0;
}
