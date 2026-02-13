#include<iostream>

#include<conio.h>

using namespace std;

int main(){

int m[3][3];

int c=0; int i=0;

int j=0;

for(int i=0;i<3;i++){

for(int j=0;j<3;j++){

cout<<"ingrese el numeros";

cin>>m[i][j];

}

}

for(int i=0;i<3;i++){

for(int j=0;j<3;j++){

cout<<"\t"<<m[i][j];

}

cout<<"\n";

}

cout<<" diagonal secundaria"<<endl;

for(int i=0;i<3;i++){

for(int j=0;j<3;j++){

if(i!=j){

cout<<"\t"<<m[i][j];

}

if(i%2==0){

c=c+1;

}

}

}

getch();

cout<<endl;

cout<<" cantidad de numeros impares debajo de la diaginal se:"<<c<<endl;

return 0;

}
