/* 1)en un condurso de belleza (25 participante) se califican por:ropa de baño,personalidad y traje de noche.
a) crear la matriz puntos,en la que se considera los puntos de cada participante en las tres areas.
b) crear un vector toppun para cada participante (total de puntos por participantes)
c) determinar el primer propuesto . aquel que tirnr mayor puntaje
d) si la miss simpatia se elije por el mayor puntanje en personalidad, indicar el numero de miss simpatia,en que posision de fila y columna */
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int puntos[5][5];
int f,c;


for( int f=0;f<5;f++)
{
    for(int c=0;c<5;c++)
    {
        cout<<"ingrese los puntos:";
        cin>>puntos[f][c];
    }
}
cout<<endl;

cout<<"Esta es la matriz cargada: \n";
for(int f=0;f<5;f++){
cout<<puntos[f][0]<<" "<<puntos[f][1]<<" "<<puntos[f][2]<<" "<<puntos[f][3]<<" "<<puntos[f][4]<<" "<<"\n";
}
	   

int top_pun_par1=0; //participante 1
int suma_par1=0;
  for(int c=0;c<5;c++){
  	for(int f=0;f<5;f++){
  		   if(c==0){
  		  	if(f<5){
  		  
  		  	suma_par1=suma_par1+puntos[f][c];
			
			top_pun_par1=suma_par1;
			
			}
			}
		  }
	  }
  cout<<" total de punto participante 1:"<<top_pun_par1<<endl;
  
int top_pun_par2=0;   //participante 2
int suma_par2=0;
  for(int c=0;c<5;c++){
  	for(int f=0;f<5;f++){
  	
  		  if(c==1){
  		  	if(f<5){
  		  
  		  	suma_par2=suma_par2+puntos[f][c];
			
			top_pun_par2=suma_par2;
						
			}
			}
		  
	  }
  }  cout<<" total de punto participante 2:"<<top_pun_par2<<endl;

int top_pun_par3=0;   //participante 3
int suma_par3=0;
  for(int c=0;c<5;c++){
  	for(int f=0;f<5;f++){
  		
  		  if(c==2){
  		  	if(f<5){
  		  
  		  	suma_par3=suma_par3+puntos[f][c];
			
			top_pun_par3=suma_par3;
					
			}
			}
		  
	  }
  }  cout<<" total de punto participante 3:"<<top_pun_par3<<endl;

int top_pun_par4=0;   //participante 4
int suma_par4=0;
  for(int c=0;c<5;c++){
  	for(int f=0;f<5;f++){
  		  if(c==3){
  		  	if(f<5){
  		  
  		  	suma_par4=suma_par4+puntos[f][c];
			
			top_pun_par4=suma_par4;

			}
			} 
	  }
  }  cout<<" total de punto participante 4:"<<top_pun_par4<<endl;

int top_pun_par5=0;   //participante 5
int suma_par5=0;
  for(int c=0;c<5;c++){
  	for(int f=0;f<5;f++){
  		  if(c==4){
  		  	if(f<5){
  		  
  		  	suma_par5=suma_par5+puntos[f][c];
			
			top_pun_par5=suma_par5;
			
			}
			}
	  }
  }  cout<<" total de punto participante 5:"<<top_pun_par5<<endl;


   
int i=0;
int top_pun[5];
   for(int i=0;i<5;i++){
   if(i==0){
	top_pun[i]=top_pun_par1;
    }  if(i==1){
	top_pun[i]=top_pun_par2;
      }if(i==2){
	top_pun[i]=top_pun_par3;
      }if(i==3){
	top_pun[i]=top_pun_par4;
      }if(i==4){
	top_pun[i]=top_pun_par5;
      }
	
     }


for(int i=0;i<5;i++){
	cout<<"\n top_pun["<<i<<"]="<<top_pun[i]<<endl;
	
}   
  int pri_puesto=0;
  for(int i=0;i<5;i++){
   if(	top_pun[i]>pri_puesto){
   	    pri_puesto=top_pun[i];
   	  
   }
} 	cout<<" el primer puesto entre las participantes:"<< pri_puesto<<endl;		
    
 cout<<" ganadora de miss simpatia:";		
		
   int posicion_miss_simpatiaf=0;
	int posicion_miss_simpatiac=0;
	int miss_col=0;
	int miss_fil=0;
    for(int f=0;f<5;f++){
	 for(int c=0;c<5;c++){
	  if(puntos[f][c]==0){
       miss_fil=puntos[f][c];
       posicion_miss_simpatiaf=f+1;
        posicion_miss_simpatiaf=miss_fil;
        cout<<posicion_miss_simpatiaf<<endl;
        	if(puntos[f][c]==0){
        		miss_col=puntos[f][c];
          posicion_miss_simpatiac=c+1;
        miss_col=posicion_miss_simpatiac;
        cout<<posicion_miss_simpatiac<<endl;
          
        
    }
    
	 }
	    
     }
     }
	 
	 
       
	 

    	
		

getch();

return 0;
}
