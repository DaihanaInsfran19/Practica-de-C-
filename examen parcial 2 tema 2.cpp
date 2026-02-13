/* tema2: una matriz de nombre A tiene una dimesion de N*M elementos donde se desea que el usuario ingrese la dimesion de la matriz
 se desea saber el total de elementos que se encuentra dentro de las fila de nuestra matriz a y luego se desea encontrar el promedio de 
 los elementos que se encuentra en la columna. se debe de utilizar elementos tipos real  */
  #include<iostream>
 #include<conio.h>
 #include<stdio.h>
 using namespace std;
 
int main(float){
	float a[100][100],n=0,m=0;
	int f=0;
	int c=0;
    int suma=0;
    int suma_fila=0;
    int promedio=0;
     int contador=0;
     
cout<<" ingrese la dimesion de elementos de la matriz fila:";
cin>>n;
cout<<" ingrese la dimesion de elementos de la matriz columna:";
cin>>m;
	for(int f=0;f<n;f++){
		for(int c=0;c<m;c++){
	   	cout<<"ingrese el numeros:"<<f+1<<","<<c+1<<":\t";
		cin>>a[f][c];
		
	}
	}
   
   
     //ya hace bien pero tengo que lograr que muestre de los otros
	  
   	for(int f=0;f<n;f++){
   		suma_fila=0;
   	 for (int c=0;c<m;c++){
	  
        suma_fila=suma_fila+a[f][c];
		}
		   	
	 cout<<"resultado cada fila : "<<f+1<<" la suma es: "<<suma_fila<<endl;	
    }
		
     
    

    	for(int c=0;c<m;c++){
    		suma=0;
    		for (int f=0;f<n;f++){

    	suma=suma+a[f][c];	
		contador= contador+1;	
	    
		}
	cout<<"La suma de los elementos de cada columna : "<<c+1<<" la suma: "<<suma<<endl;	
       }
       
       	for(int c=0;c<m;c++){
    	promedio=0;	
    		for (int f=0;f<n;f++){

    	promedio=suma/m;
	    
		}
	 cout<<"  las columnas"<<c+1<<" su promedio:"<<promedio<<endl;
       }
       cout<<endl;
	cout<< " cantidad de elementos en las columnas:"<<contador<<endl;

      getch();

    cout<<"Esta es la matriz cargada: \n";
for(int f=0;f<n;f++){
cout<<a[f][0]<<" "<<a[f][1]<<" "<<a[f][2]<<" "<<"\n";
}


return 0;
}
