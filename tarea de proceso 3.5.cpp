/*  formar tres vectores con el nombre, el sexo y la edad de un grupo de personas e impromir lo siquiente 
promedio de edades
cantidad de mujeres que tiene una edad inferior al promedio
el nombre del hombre mas viejos
el nombre de la persona de menor edad */
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int edad[5]={78,30,46,11,24};


char *nombre[100];
char* nombre0= "Luis ";
char* nombre1= "Pedro ";
char* nombre2= "Luisa ";
char* nombre3= "Rosa ";
char* nombre4= "Jose ";

int sexo[5]={1,1,2,2,1};

int edadpromedio(int edad[])
{
    int i=0;
    int suma=0;
    int promedio=0;
    for (i=0; i<5; i++)
    {
        suma = suma + edad[i];
   }    
    promedio = suma / 5;

    return promedio;
}


void personamasjoven(int edad[5], char nombre[])
{
    int i=0;


    int menoredad[5]={100};
 
    int posicion;

    for (i=0; i<5; i++)
    {
        if (menoredad[i]< edad[i])
        {                                         //hasta aca esta bien
            menoredad[i] = edad[i];
            posicion = i;
        }
    }  

    switch (posicion)
    {

 
        case 0 : {printf("\nla persona mas joven es: %s\n",nombre0);
        break;}
        case 1 :  {printf("\nla persona mas joven es: %s\n",nombre1);
        break;}
        case 2 : {printf("\nla persona mas joven es: %s\n",nombre2);
        break;}
        case 3 : {printf("\nla persona  mas joven es: %s\n",nombre3);
        break;}
        case 4 : {printf("\nla persona  mas joven es: %s\n",nombre4);
        break;}
    }
  
}

void personamayor(char nombre[], int sexo[])
{
    
    int i=0;
    int j=0;
    int posicion;
    int mayor[5]={100};
    
    
    int masculino[5] = {1,1,1,1,1};
    printf("\n el nombre del hombre mas viejo: \n");
    do {
    for (  i=0; i<5; i++)
        for  ( j=0; j<5; j++)
    {

        if (edad[j]<mayor[5]) {
        
        
        	posicion =j;
		} 
                 
      }    
        
        
        switch (posicion)
    {
        case 0 : {printf("\n%s\n",nombre0);
        break;}
        case 1 :  {printf("\n%s\n",nombre1);
        break;}
        case 2 : {printf("\n%s\n",nombre2);
        break;}
        case 3 : {printf("\n%s\n",nombre3);
        break;}
        case 4 : {printf("\n%s\n",nombre4);
        break;}
    }
    } while (sexo[i] == masculino[i]); 
      }

void mujeresmenorprom(char nombre[], int sexo[])
{
     int edad[5];
    int i=0;
    int j=0;
    int c=0;
    int posicion;

    int femenino[5]={2,2,2,2,2};

    int promedio[5]={46,46,46,46,46};
    printf("\ncantidad de mujeres con edad inferior al promedio: \n");
    do {
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
    {

        if (edad[j] < promedio[j])
        { c=j;
          posicion = c;
        }
            }

    
  switch (posicion)
        {
        case 0 : {printf("\n%s\n",nombre0);
        break;}
        case 1 :  {printf("\n%s\n",nombre1);
        break;}
        case 2 : {printf("\n%s\n",nombre2);
        break;}
        case 3 : {printf("\n%s\n",nombre3);
        break;}
        case 4 : {printf("\n%s\n",nombre4);
        break;}
    }
}while (sexo[i] == femenino[i]); 
}
 

int main(int argc, char** argv) {
edadpromedio(edad);
printf("\nel promedio de las edades es : %d\n",edadpromedio(edad));
personamasjoven(edad,nombre[100]);
personamayor(nombre[100],sexo);
mujeresmenorprom(nombre[100],sexo);
system("pause");
return (EXIT_SUCCESS);
}
