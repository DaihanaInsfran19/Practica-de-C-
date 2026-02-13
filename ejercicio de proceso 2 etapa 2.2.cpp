/* cada alumno de una clase de 5 alumnos tiene notas correspondientes a 3 asignaturas diferentes,pudiendo no tener calificacion en alguna
asignatura.
escribir un algoritmo  que permita calcular:
a.el promedio de cada alumno
b. el promedio general de la clase
c. el promedio de la clase en cada asignatura 
imprimir los resultados y la matriz cargada */
#include<iostream>
 #include<conio.h>
 using namespace std;
 main(){
	int m[100][100],n=0;
	string ma=0;
   int c=0;
	int i=0;
	 int j=0;

	cout<<" ingrese la dimesion de elementos de la matriz fila";
cin>>n;
cout<<" ingrese la dimesion de elementos de la matriz columna";
cin>>ma;
	for( i=0;i<ma;i++){
		for(int j=0;j<n;j++){
	   	cout<<"ingrese el nombre de la materia y luego la nota:";
		cin>>a[i][j];
		
	}
	}
	
	
  
	
	

	return 0;
}
