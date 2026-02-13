/*tema 3:
   realizar un programa con dos vectores de n elementos que usuario seleccione , y luego que los datos se cargen de forma parcial o automaticaen los vectores
   y convertir los elementos a numero negativo y crear un tercer con los elementos de los dos primeros apartir de la suma de estos dos  */
 
 #include<iostream>
 #include<conio.h>
 #include <ctime>
 #include<cstdlib>
 #include<cmath>
  using namespace std;
 int main(){
 	 int a[100],b[100], c[100];
 	 int n=0;
 	 int i=0;
 	int vec_in[100];
 	int vec_inver[100];
 	 cout<<" ingrese la cantidad de elementos:";
 	 cin>>n;
 	 double valor;
 	 srand(time(NULL) );
 	 	for(int i=0;i<n;i++){
 	 		valor=rand();
 	 	cout<<" los numeros de a son :"<<a[i]<<endl;
		  cout<< " los numeros de b son:"<<b[i]<<endl;
		  
		  }
   for(int i=0;i<n;i++){
   	if(a[i] !=vec_in[i]){
          vec_in[i]=-1*a[i];
          
		  }
   }
 for(int i=0;i<n;i++){
   	if(b[i] !=vec_inver[i]){
          vec_inver[i]=-1*b[i];
          
		  }
   }

 for(int i=0;i<n;i++){

cout<<" \n vector con valores invertidos a:"<<vec_in[i]<<endl;
cout<<" \n vector con valores invertidos b:"<<vec_inver[i]<<endl;
  
}

for( int i=0;i<n;i++){

c[i]=a[i]+b[i];



}
cout<<"la suma es:";
 	for( int i=0;i<n;i++){

cout<<c[i];

}
 
 	getch();
 	return 0;
 }
