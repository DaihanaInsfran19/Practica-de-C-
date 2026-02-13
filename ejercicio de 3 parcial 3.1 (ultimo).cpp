/* en una empresa se cuenta con 36 trabajadores,cuyos salarios estan cargados en una matriz , por otro lado, 
se tiene un  vector en el que se tiene  cargado la antiguedad de cada trabajador, de los siguiente forma  1a5años 5a10años 10a20años
20 años o mas.
1- hacer un algoritmo que pueda aplicar,un aumento del 5% si su antiguedad es de 1 a 5años, 10% si la antiguedad es de 5 a 10 años,
15% si su antiguedad es de 10 y 20 años y 20% si su antiguedad es de 20 años o mas 
imprimir la matriz toda la matriz mostrando el aumento aplicando al salario base*/
	#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int salario[4][9];
int f=0;
int c=0;
 int antiguedad[4];// ingresar 1 a 60 años 
int i=0;

for( int f=0;f<4;f++)
{
    for(int c=0;c<9;c++)
    {
        cout<<"ingrese los salarios de los empleados :";
        cin>>salario[f][c];
    }
}

  cout<<"Esta es la matriz cargada: \n";

for(int f=0;f<4;f++){
 for(int c=0;c<9;c++){
    if(f<=0){

    if(c<9){
	
cout<<salario[f][0]<<" "<<salario[f][1]<<" "<<salario[f][2]<<" "<<salario[f][3]<<" "<<"\n";
}
}
}
}

for(int i=0;i<4;i++){
cout<<"ingrese la antiguedad de los empledos:";
cin>>antiguedad[i];
}


// empieza el aumento de 5% 1 a 5 años 
int aumento_1a5=0;

for( int f=0;f<4;f++){
for(int c=0;c<9;c++){
	
    for(int i=0;i<4;i++){
	    
        if(f==0){
		  
      	if(c<9){
      	if(i==0){
      	aumento_1a5=((salario[f][c]*antiguedad[i])/100);
      		
      		
          
		  }
		  }	
		  }
	      }
	      
      cout<<" el aumento en los salarios de los empleados es de 5% 1 a 5 años es:"<<aumento_1a5<<endl;
	  }
      
       
}



	  // empieza el aumento de 10% 5 a 10 años 
int aumento_5a10=0;

for( int f=0;f<4;f++){
for(int c=0;c<9;c++){
	
    for(int i=0;i<4;i++){
	    
        if(f==1){
		  
      	if(c<9){
      	if(i==1){
      	aumento_5a10=((salario[f][c]*antiguedad[i])/100);
      		
      		
          
		  }
		  }	
		  }
	      }
	      
      cout<<" el aumento en los salarios de los empleados es de 10 5 a 10años es:"<<aumento_5a10<<endl;
	  }
      
       
}
       
  	  // empieza el aumento de 15% 15 a 20 años 
int aumento_15a20=0;

for( int f=0;f<4;f++){
for(int c=0;c<9;c++){
	
    for(int i=0;i<4;i++){
	    
        if(f==2){
		  
      	if(c<9){
      	if(i==2){
      	aumento_15a20=((salario[f][c]*antiguedad[i])/100);
      		
      		
          
		  }
		  }	
		  }
	      }
	      
      cout<<" el aumento en los salarios de los empleados es de 15% 15 a 20 años es:"<<aumento_15a20<<endl;
	  }
      
       
}    

 	  // empieza el aumento de 20% 15 a 20 años 
int aumento_20amas=0;

for( int f=0;f<4;f++){
for(int c=0;c<9;c++){
	
    for(int i=0;i<4;i++){
	    
        if(f==3){
		  
      	if(c<9){
      	if(i==3){
      	aumento_20amas=((salario[f][c]*antiguedad[i])/100);
      		
      		
          
		  }
		  }	
		  }
	      }
	      
      cout<<" el aumento en los salarios de los empleados es de 20% 20 a mas es:"<<aumento_20amas<<endl;
	  }
      
       
}    


return 0;
}
