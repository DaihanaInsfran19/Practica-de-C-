#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
	int n,i , cambio=0;
int a[n],b[n],c[n];
	cout<<"ingrese la cantidad de elementos:";
	cin>>n;
	 
	 for(int i=1;i<=n;i++){
	 	cout<<" ingrese datos del vector a: ";
	 	cin>>a[i];
	 }
	 for( int i=1;i<=n;i++){
	 	cout<<" ingrese datos al vector b:";
	 	cin>>b[i];
	 }
	 for(int i=1; i<=n;i++){
	 	c[i]=a[i]+b[n+1-i];
	 }
	 for(int i=1;i<=n;i++){
	 	cout<<"vector a:"<<a[i]<<"\n";
	 }
	 for(int i=1;i<=n;i++){
	 	cout<<" vector c:"<<c[i]<<"\n";
	 }
	 
}
