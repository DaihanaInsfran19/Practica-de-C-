#include<iostream>

using namespace std;

int main(){

int m[2][3];

int suma=0;

int mult3=0;

int i=0;

int j=0;

for(int i=0;i<2;i++){

for(int j=0;j<3;j++){

cout<<"ingrese el numeros";

cin>>m[i][j];

if(m[i][j]%3==0){

mult3++;

suma=suma+mult3;

}

suma=suma+mult3;

}

}

cout<<"la suma de los numeros multiplos:"<<suma<<endl;

cout<<endl;

cout<<" numeros multiplos de 3 son:"<<mult3<<endl;

return 0;

}
