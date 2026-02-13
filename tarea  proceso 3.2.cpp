/* hacer un pseudocodigo que pueda declarar un vector de 7 elementos de tipo real,hallar
 la sumatoria de todos los elementos negativos   */
 #include<iostream>  

   
using namespace std;

 main(float){
 int vec[7];      // este funciona todo
int suma_n=0;
int i=0;
int negativo=0;

	 
	for( int i=1;i<=7;i++){
		printf("ingrese los numeros:");
		scanf("%d",&vec[i]);
	   
	   
	   if(vec[i]<0){
    	negativo++;
    	suma_n=suma_n+vec[i];
		}	
				
	}
		
  
   cout<<"\n la suma total de los numeros negativos ingresados es :"<<suma_n;
 
   
	return 0;
		
}
