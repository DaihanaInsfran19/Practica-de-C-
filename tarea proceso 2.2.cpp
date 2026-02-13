/* cargar un vector de 20 elementos. determina e imprimir la suma de  
aquellos que se encuentra en las posiciones impares */
#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;
float vec[20];
 float suma=0;
int x,n;
void crear()
{
	cout<<"digite cantidad de elementos=";
	cin>>n;
	for(x=0;x<n;x++)
	{cout<<"digite un valor";
	cin>>vec[x];
}
}
	void suma_impar()
	{suma=0;
		for(x=1;x<n;x=x+2)
		{suma=suma+vec[x];
		}
		cout<<"la suma de los valores de las posiciones impares es"<<suma;
		cout<<endl;
		getch();
	}
	
	main()
	{crear();
	suma_impar();
	}

	 

	

