/*dada una matriz A de dimension N*M Y UN VECTOR DE B de dimension n de enteros,crear
una matriz C cuyos elementos seran el producto de los arrays A*B.Imprimir las matrices
 cargada y la matriz resultante.  */
  #include<iostream>
 #include<conio.h>
 #include<stdio.h>
 using namespace std;
 
int main(){
	int a[100][100],n=0,m=0;
	int i=0;
	int j=0;
int b[100],d=0;
int k= 0;
int c[100][100],f=0,s=0;
    int p=0;
    int y=0;
   int multipli=0;

 
 cout<<" ingrese la dimesion del los elementos de los vector:";
 cin>>d;
 
for( int k=0; k<d; k++){
	cout<<"ingrese los numeros:";
	cin>>b[k];
}

cout<<" ingrese la dimesion de elementos de la matriz fila";
cin>>n;
cout<<" ingrese la dimesion de elementos de la matriz columna";
cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
	   	cout<<"ingrese el numeros";
		cin>>a[i][j];
			
	}
	}
	cout<<endl;
	cout<<" los elementos de la matriz a:";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
	   	cout<<a[i][j]<<endl;
		
	}
	cout<<"\n";
	
	}i=0;
	j=0;
cout<<"los elementos de la matriz c son:";
   
   	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		 		c[p][y]= a[i][j]*b[k];
	   	cout<<c[p][y]<<endl;
	}
	cout<<"\n";
   }
   getch();
	return 0;
}
