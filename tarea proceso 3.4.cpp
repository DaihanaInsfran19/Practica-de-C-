/* hacer un programa que permita ingresar 10 nombre de personas en un vecxtor, buscar el nombre: lucas, luego de recorrer el vector se requiere los siguientes mensajes
si encientra y no se repite 
si encuentra y se repite
si no encuentra*/


#include<iostream>
using namespace std;
      
  main(float){
   string nombre[5];
   int i=0;
   string buscar;
   
	int ban=0;
    cout<<"ingrese nombre:";
    for( int i=0;i<5;i++){
	
		
	cin>>nombre[i];	
	   
	}
	cout<<"ingrese el nombre que buscar:"<<i+1<<endl;
	cin>>buscar;
	for(i=0;i<5;i++){
	if(buscar==nombre[i]){
		
		ban=1;
	cout<<"el nombre es\n"<<buscar<<"\nse encuentra en la posicion="<< "["<<i+1<<"]"<<endl;
    break;
	}
	else{
		ban=0;
	 if(ban==0){
	 	cout<<" el nombre que busca\n" <<buscar<<"\n esta no se encuentra en ninguna de estas posiciones :\n"<< "["<<i+1<<"]"<<endl;
	 	break;
}	 	
	}

	}
	
	for(i=0;i<5;i++){
		if(buscar==nombre[i]){
			ban=2;
	 	cout<<" el nombre que busca\n" <<buscar<<"\n esta se encuentra repetido en  estas posiciones :\n"<< "["<<i+1<<"]"<<endl;
	 	break;
		}
	}
	 
	 
   return 0;
  }
 
  

   
   
  



