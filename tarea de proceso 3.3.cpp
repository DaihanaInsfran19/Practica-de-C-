/* Dimensionar y cargar un vector de 9 elementos, buscar entre los elementos ingresados el mayor, menor y cuanto eran impares */
#include<iostream>

using namespace std;
int main(){
	
	int n; //va tener el tamaño del vector
	int mayor=0;
	int menor=0;
	int suma=0;
	
	cout<<"ingrese la cantidad de elementos del vector: ";
	cin>>n;
	
	
	// declarar el vector
	
	float vec[n]; // definir un vector  vec de n elementos 
	
	int i;
	for(i=0; i<n; i++){
		
		cout<< "ingres el elemento vec["<<i<<"]: ";
		cin>>vec[i];
		
		 if(i==0){
		 	mayor=vec[i];
		 	menor=vec[i];
		 }else{
		 		if(vec[i]>mayor){
			mayor=vec[i];
			
		}if(vec[i]<=menor){
				menor=vec[i];
				
			}
			
		 }
			
		
	}
	suma=0;
	  for(i=1;i<n;i=i+2){
	  	suma=suma+vec[i];
	
	  }
	 
	 cout<<" la suma de elementos en posiciones impares:"<<suma<<endl;
	  
	cout<<"\n el mayor elemento del vector es: "<<mayor<<endl;
	cout<<"\n el menor elemento del vector es: "<<menor<<endl;
	
	return 0;
}
