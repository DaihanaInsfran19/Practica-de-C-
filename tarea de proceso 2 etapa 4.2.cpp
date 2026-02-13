/* cargar una matriz de orden 3+5.determinar e imprimir la suma elementos pares que se encuentra en las columnas impares y la suma de los 
elementos por columna */ 

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int f=0, c=0;
int suma_auto=0;
int suma_total=0; 
int mejor_vend=0;
int vendiomas=0;
int m[5][3];	
	
   for ( int c=0;c<3;c++){   
    for(int f=0;f<5;f++){
        cout<< "Ingrese el numero de automoviles vendidos ["<<f<<"]: ";
        cin >> m[f][c];
        suma_auto=suma_auto+m[f][c];
        }
     if (suma_auto>vendiomas){
       vendiomas=suma_auto;
       mejor_vend=c; 
        }
    cout << ">" << "El vendedor ["<<c<< "]" << " vendio en total " << suma_auto << " automoviles" << "\n";
    cout << "\n";
     }
     
        for (int f=0;f<5;f++){
        for(int c=0;c<3;c++){
        suma_total=suma_total+m[f][c];
     }
    cout<<"] " << "en total fue vendido " << suma_total << " veces" << "\n";
    suma_total=0;
    }
   cout << "\n";
   cout << "El premio del mejor vendedor es para el vendedor" <<" ["<<mejor_vend<<"]";
      getch();
return 0;
}

