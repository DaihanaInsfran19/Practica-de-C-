/* definir y cargar una matriz de orden 3*3.se solicita un algoritmo que cree un vector cuyos elementos sean la sumatoria de cada columna menos 
el ultimo elemento de dicha columna. imprimir el vertor resultante. */
# include<iostream>
#include<conio.h>

using namespace std;
#include<iostream>



int main()
{

int matriz[3][3];
int horizontal[3];
int vertical[3];
int fila,columna;
int suma=0;
int i;


for(fila=0;fila<3;fila++)
{
    for(columna=0;columna<3;columna++)
    {
        cout<<"Introduce un numero para la posicion:";
        cin>>matriz[fila][columna];
    }
}

for (int fila=0;fila<3;fila++)
{
for( int columna=0;columna<3;columna++)
{
 cout<<matriz[fila][columna];
}
cout<<"\n";
}

for(fila=0;fila<3;fila++)
{
    suma=0;
    for(columna=0;columna<3;columna++)
    {
        suma+=matriz[fila][columna];
    }
    vertical[fila]=suma;
}


for(i=0;i<3;i++)
{
    cout<<vertical[i];
}
 cout<<"\n";

for(columna=0;columna<3;columna++)
{
    suma=0;
    for(fila=0;fila<3;fila++)
    {
        suma+=matriz[fila][columna];
    }
    horizontal[columna]=suma;
}


for(i=0;i<5;i++)
{
    cout<<horizontal[i];
}
getch ();
 return 0;
}
