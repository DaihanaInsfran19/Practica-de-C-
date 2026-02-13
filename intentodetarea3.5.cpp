/*  formar tres vectores con el nombre, el sexo y la edad de un grupo de personas e impromir lo siquiente 
promedio de edades
cantidad de mujeres que tiene una edad inferior al promedio
el nombre del hombre mas viejos
el nombre de la persona de menor edad */
#include<conio.h>

#include<iostream>

using namespace std;
string nomviejo="";
   string nomjoven="";
    string nombre[3];
   int sexo[3];
   int edad[3];
    int i=0;
   int c=0;
   int promedio=0;
   int suma=0;
   int contador=0;
   char buscar;
   int  menor=0;
   	int  mayor=0;
  int main(){
   
   
    
     
    for( i=0;i<3;i++){
     cout<<"\ningrese el nombre: ";
     cin>>nombre[i];
     cout<<"\n ingrese la edad:";
     cin>>edad[i];
     
	  cout<<"ingrese el sexo 1 si es femenino o 2 si es masculino: ";
	  	cin>>sexo[i];
	   suma=suma+ edad[i];
    
      if ( sexo [i] ==2  && mayor < edad[i]){
      	 mayor = edad[i];
      	 nomviejo=nombre[i];
	  }
	  
	  if(i==1){
	  	menor=edad[i];
	  	nomjoven=nombre[i];
	  }else{
	  	 if(edad[i]<menor){
	  	 	menor=edad[i];
	  	 	nomjoven=nombre[i];
		   }
	  }
   }


     
	promedio=suma/3;
	
    
   for( i=0;i<3;i++){
   	 if(sexo[i]== 1){
   	 	  if(edad[i]< promedio){
   	 	  	  contador=contador+1;
			  }
		}
   }
  
   cout<<" el promedio de las edades:"<<promedio<<endl;
   cout<<" el nombre de la persona mas joven: "<<nomjoven<<endl;
   cout<<" edad del hombre mas viejo : "<<nomviejo<<endl;
   cout<<" cantidad de mujeres  con enda menor al promedio :"<<contador<<endl;
   getch();
 return 0;
   	 
   }
  	
    
        
    

