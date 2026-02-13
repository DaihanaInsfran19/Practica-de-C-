/*tema 2:
     realize un programa en c++  donde le deje ingresar los numeros al usuario en un vector de tamaño 10 elementos, y buscar el numero menor entre los numeros
	 ingresados en el  del vector luego de esto que logre encotrar entre los elementos numeros multiplos de 2 y que se guarde en un acumulador, sumar la 
	 cantidad de numeros multiplos y hallar el promedio . imprimir los multiplos , la suma y el promedio */
 #include<iostream>
 #include<conio.h>
  using namespace std;
 
 int main(){
 	int numero[10];
 	int i=0;
 	 int menor;
 	 int multiplo=0;
 	 int acumulador=0;
 	 int sumar=0;
 	 int prom=0;
 	for(int i=0;i<10;i++){
 		cout<<i+1<<" ingrese los numeros :";
 		cin>>numero[i];
   	if(numero[i]%2==0){
 		multiplo=numero[i];
 		sumar=sumar+multiplo;
 		cout<<" los numeros multiplos son:"<<multiplo<<endl; 
	 }
	 prom=sumar/5;
	 }
	 
	 for(int i=0;i<10;i++){
	if(i==0){
	menor=numero[i];
	}else{
		if(numero[i]<menor){
      menor=numero[i];
     }
	}
}
	
	 cout<<" la suma de los numeros multiplos :"<<sumar<<endl;
	 cout<<" el promedio:"<<prom<<endl;
 	cout<<" el numero menor de entre los elementos :"<<menor<<endl;
 	
 	getch();
 	return 0;
 
}
