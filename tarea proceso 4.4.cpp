/* se tiene 2 vectores a y b de longitud (N) elaborar un algoritmo dque permita conformar un tercer vector
 con la suma de los vetores de la siguiente manera:
 el contenido de la primera posicion de (A) con el contenido de la ultima posicion de (B)*, el de la segunda posicion de (A)
 con el contenido de la penultima posicion de (B) y asi hasta acabar los vectores. IMPRIMIR LOS 3 VECTORES. */
 #include<iostream> 
  
 using namespace std;
 int main(){
 	
 	int A[100], B[100], C[100];
 	int i=0, n=0;
 	int suma=0;
 	int a=4;
 		cout<<" ingrese la cantidad de elementos:";
 		cin>>n;
 		
 	for( int i=0;i<n;i++ ){
 		cout<<" ingrese numeros A["<<i<<"]:";
 		cin>>A[i];
 		
 		cout<<"ingrese numeros B["<<i<<"]";
 		cin>>B[i];
 		
 		
	 }
	 for( int i=0;i<n;i++){
	 	C[i]=A[i]+B[i];
	 	a++;
	 }
 	 for( int i=0;i<n;i++){
 	 	cout<<"["<<	C[i]<<"]";
	  }
 	cout<<endl;
 
 	return 0;
 }
 
