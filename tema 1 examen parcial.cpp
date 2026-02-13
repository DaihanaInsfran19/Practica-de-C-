/*tema 1:
 elabore un progrma en c++ que permita ingresar numeros  en un vector de cantidad de  5 elementos y que busque el numero que dese el usuario y que muestre en que 
 posicion se encuentra y la cantidad de veces que se repite ese numero en especifico . imprimir la cantidad de veces que se repite el numero que el usuario
 a deseado buecar dentro del vector y suma la suma total de los numeros ingresados en el vector */
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
  int main(){
 	int vec[5] ;
	int i=0;
 	 int contador=0;
 	 int suma;
	int buscar;
 	 int ban=0;
 	 
 	for( int i=0;i<5;i++){
 	  cout<<i+1<<"ingrese un numero:";
 	  cin>>vec[i];
	   	suma=suma+vec[i];

	 }
	 cout<<"ingrese el numero que buscar:"<<endl;
cin>>buscar;
	 
for( int i=0;i<5;i++){
	if(buscar==vec[i]){

ban=1;

cout<<"el numero"<<buscar<<"se encuentra en la posicion:"<<"["<<i<<"]"<<vec[i]<<endl;
contador=contador+1;
}

else{

ban=0;

cout<<"el numero"<<buscar<<"no se encuentra en ninguna de estas posicion:"<<"["<<i<<"]"<<vec[i]<<endl;

}
			
}

 	cout<<" la suma total de los numeros es:"<<suma<<endl;
 	cout<<" la cantidad de veces que se encuentra repetidos:"<<contador<<endl;
     getch();
 	return 0;
 }
