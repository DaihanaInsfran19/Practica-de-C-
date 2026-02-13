/* leer vectores a y b ,de n y m elementos respectivamente y formar un tercer
con los elementos de b que esten reperido en a */
#include<iostream>
#include<conio.h>

using namespace std;

  main(){
	int a[100], n;
	int b[100],m;
	int c[100];
	int i=0;
	int ban=0;

    int iguales;
	cout<<" ingrese la cantidad de elementos para a:";
		cin>>n;
		cout<<endl;
		
	cout<<"ingrese la cantidad de elementos para b:";
	cin>>m;
	for( i=0;i<n;i++){
		 cout<<"ingrese elementos al a["<<i<<"]:";
		 cin>>a[i];
		 c[i]=a[i];
	}
	
	cout<<endl;
	for(int j=0;j<m;j++){
		cout<<"ingrese elementos al b["<<j<<"]:";
		 cin>>b[j];
		 c[i]=b[i];
	}
    for(int i=0;i<n;i++){
    	
    	for(int i=0;i<n;i++){
    	 if(a[i]==b[i]){
ban=1;

cout<<"el numero"<<a[i]<<"se encuentra en la posicion:"<<"["<<i<<"]"<<b[i]<<endl;
}
 
else{

ban=0;

cout<<"el numero"<<a[i]<<"no se encuentra en ninguna de estas posicion:"<<"["<<i<<"]"<<b[i]<<endl;

}
	}
	}
	
	 cout<<" el tercer vector creado apartir del elementos repetidos b en a  :";
	 cout<<c[i];
	getch();
	return 0;
}
