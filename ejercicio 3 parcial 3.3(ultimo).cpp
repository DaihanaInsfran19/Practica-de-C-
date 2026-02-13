/* una libreria tiene clasificado sus libros por areas, las cantidades,areas e indice se guardan en una matriz.hacer un algoritmo que permita:
a)determinar la cantidad total de libros de dicha libreria.
b) cuantos libros hay en cada area
c) cual es el minimo valor de libros en dicha libreria e indicar en que areas la cantidad de libros es igual al minimo
d) cual es el maximo valor de libros en dicha libreria e indicar en que areas la cantidad de libros es igual al maximo
  */
 	#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int libreria[3][5];// que guarde la cantidad areas y indice
int cantidad=0; // en cada area 
int val_minimo=0; // indicar el valor minimo de libros y decir en que area
int val_maximo=0;// lo mismo que arriba pero con los maximos valores 
int f=0;
int c=0;

for( int f=0;f<3;f++)
{
    for(int c=0;c<5;c++)
    {
        cout<<"ingrese los las cantidad de articulos dentro del almacen:";
        cin>>libreria[f][c];
    }
}




int suma_total_libro=0;
for( int f=0;f<3;f++)
{
    for(int c=0;c<5;c++)
    {
    	
		
        suma_total_libro=suma_total_libro+libreria[f][c];
        
    
    }
}

cout<<" la cantidad de libros en la libreria:"<<suma_total_libro<<endl;
    


int suma_cien_li=0;
for( int c=0;c<5;c++)
{
    for(int f=0;f<3;f++)
    {
    	if(c==0){
    	if(f<3){
    	 suma_cien_li=suma_cien_li+libreria[f][c];	
    		
		}	
    		
		}
        
    
    }
} 
cout<<"la cantidad de libros de ciencias:"<<suma_cien_li<<endl;

int suma_mat_li=0;
for( int c=0;c<5;c++)
{
    for(int f=0;f<3;f++)
    {
    	if(c==1){
    	if(f<3){
    	 suma_mat_li=suma_mat_li+libreria[f][c];	
    		
		}	
    		
		}
        
    
    }
} 
cout<<"la cantidad de libros de matematicas:"<<suma_mat_li<<endl;

int suma_his_li=0;
for( int c=0;c<5;c++)
{
    for(int f=0;f<3;f++)
    {
    	if(c==2){
    	if(f<3){
    	 suma_his_li=suma_his_li+libreria[f][c];	
    		
		}	
    		
		}
        
    
    }
} 
cout<<"la cantidad de libros de historia:"<<suma_his_li<<endl;

int suma_est_li=0;
for( int c=0;c<5;c++)
{
    for(int f=0;f<3;f++)
    {
    	if(c==3){
    	if(f<3){
    	 suma_est_li=suma_est_li+libreria[f][c];	
    		
		}	
    		
		}
        
    
    }
} 
cout<<"la cantidad de libros de estadistica:"<<suma_est_li<<endl;

int suma_inf_li=0;
for( int c=0;c<5;c++)
{
    for(int f=0;f<3;f++)
    {
    	if(c==4){
    	if(f<3){
    	 suma_inf_li=suma_inf_li+libreria[f][c];	
    		
		}	
    		
		}
        
    
    }
} 
cout<<"la cantidad de libros de informatica:"<<suma_inf_li<<endl;
    
    for( int f=0;f<3;f++)
{
    for(int c=0;c<5;c++)
    {
    	  if (libreria[f][c]>val_maximo ) {
			val_maximo =libreria[f][c] ;
		}
    }
} cout<<" el valor maximo de libros en la libreria es:"<<val_maximo<<endl;
    
    //me olvide en cada area sacar igual al maximo
    
    int posi_cien_val_igual_max=0;
    
    
    cout<<"posision de las cantidades de libros igual al valor maximo :";
    
	for(int f=0;f<3;f++){
	
	for(int c=0;c<5;c++){
	
	  posi_cien_val_igual_max=0;
       if(libreria[f][c] ==val_maximo){
         if(c==0){
         	if(f<3){
         	 posi_cien_val_igual_max=c+1;
      val_maximo=posi_cien_val_igual_max ;
     	
         	cout<<posi_cien_val_igual_max<<endl;	
			 }
		 }
       
    } 
    
    }
}

    cout<<endl;
  
 
    
    
    
   for( int f=0;f<3;f++)
{
    for(int c=0;c<5;c++)
    {  val_minimo;
    	  if (libreria[f][c]<=val_minimo ) {
			val_minimo=libreria[f][c];
		}
    }
} cout<<" el valor minimo de libros en la libreria es:"<<val_minimo<<endl;
  
//me olvide en cada area sacar igual al minimo

    int posi_val_igual_mini=0;
    
    
    cout<<"posision de las cantidades de libros igual al valor minimo :";
    
	for(int f=0;f<3;f++){
	
	for(int c=0;c<5;c++){
	
	  posi_cien_igual_mini=0;
       if(libreria[f][c] ==val_minimo){
         if(c==0){
         	if(f<3){
         	 posi_val_igual_mini=c+1;
      val_minimo=posi_val_igual_mini ;
     	
         	cout<<posi_val_igual_mini<<endl;	
			 }
		 }
       
    } 
    
    }
}

    cout<<endl;

return 0;
} 
  
