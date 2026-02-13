      /*  formar tres vectores con el nombre, el sexo y la edad de un grupo de personas e impromir lo siquiente 
promedio de edades
cantidad de mujeres que tiene una edad inferior al promedio
el nombre del hombre mas viejos
el nombre de la persona de menor edad */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int edad[5]={50,35,46,77,24};


char *nombre[100];
char* nombre0= "Luis ";
char* nombre1= "Eglis ";
char* nombre2= "Luisa ";
char* nombre3= "Rosa ";
char* nombre4= "Jose ";

//1 masculino, 2 femenino (es mas sencillo trabajar con numeros)
int sexo[5]={1,2,2,2,1};

int edadpromedio(int edad[])
{
    int i=0;
    int suma=0;
    int promedio=0;
    for (i=0; i<5; i++)
    {
        suma = suma + edad[i];
   }    
//dividido entre 5 porque nada mas ubique 5 profesores en el vector inicial
    promedio = suma / 5;

    return promedio;
}

//profesor mas joven del grupo
void personamasjoven(int edad[5], char nombre[])
{
    int i=0;

//la menor edad debe tener un numero muy alto para poder ejercer la primera comparacion
//solo se comparan vectores
    int menoredad[5]={100};
//posicion se encargara de determinar el punto donde se encuentra la menor edad  
    int posicion;
//el ciclo es para 5 profesores
    for (i=0; i<5; i++)
    {
        if (menoredad[i]> edad[i])
        {
            menoredad[i] = edad[i];
            posicion = i;
        }
    }  
//hace un llamado al vector donde se encuentra el nombre del profesor en dicha posicion
    switch (posicion)
    {
//para imprimir nombres se utiliza %s y no %c a pesar de ser un char
//el  %c no imprime la cadena completa del vector, en cambio el %s si lo hace
 
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

//profesora con edad mayor al promedio
void personamayorprom(char nombre[], int sexo[])
{
    
    int i=0;
    int j=0;
    int posicion;

//vector que sirve para ejercer las comparaciones 
    int femenino[5] = {2,2,2,2,2};
//como ya había corrido el programa sabía que ese era el valor promedio
//lo ideal es usar edadpromedio para llenar el vector
    int promedio[5] = {46,46,46,46,46};
    printf("\nLas peronas con edad mayor al promedio son: \n");
    do {
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
    {
//determina que la edad sea mayor al promedio
        if (edad[j] < promedio[5])
        {
          posicion = j;
        } 
                 
        }
//ubica los nombres de las profesoras con edad mayor al promedio
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
    } while (sexo[i] == femenino[i]); //mientras sean profesoras
      }

//profesores con edad menor al promedio
void personamenorprom(char nombre[], int sexo[])
{
     int edad[5];
    int i=0;
    int j=0;
    int posicion;
//vector para profesores (hombres)
    int masculino[5]={1,1,1,1,1};
//promedio de las edades (dado previamente por el programa)
    int promedio[5]={46,46,46,46,46};
    printf("\nLos profesores con edad menor al promedio son: \n");
    do {
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
    {
//compara la menor edad en relacion a la edad promedio
        if (edad[j] < promedio[j])
        {
          posicion = j;
        }
            }
//determina el nombre del profesor con menor edad en relacion al promedio
    
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
}while (sexo[i] == masculino[i]); 
}
 

//parte principal del programa, solo llamara los metodos en el orden pre establecido
int main(int argc, char** argv) {
edadpromedio(edad);
//como el metodo edadpromedio estaba pensado para ser usado como una variable entera
//se procedio a imprimir en el principal y no desde su mismo metodo para evitar errores
printf("\nel promedio de las edades es : %d\n",edadpromedio(edad));
personamasjoven(edad,nombre[100]);
personamayorprom(nombre[100],sexo);
personamenorprom(nombre[100],sexo);
//pausa la pantalla para ver los resultados
system("pause");
return (EXIT_SUCCESS);
}
