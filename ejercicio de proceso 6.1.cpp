/* leer un vector de numeros y averiguar cunatas veces aparece el menor numero */
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	 int num[5];
	 int i;
	 int c=0;
	 int menor;
	for(int i=0;i<5;i++ ){
		
		cout<<" ingrese los numeros :";
		cin>>num[i];
	}
	
	for(int i=0;i<5;i++){
		
		if(num[i]<menor){
         menor=num[i];
	}
	 c=c+1;	
}
	cout<<" la cantidad de veces que aparece el numero menor es:"<<c<<endl;
	
	getch();
	return 0;
}
