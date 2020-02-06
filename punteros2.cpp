#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<my_programs.h>
#include<string.h>
using namespace std;
int main(){
    char *palabras[4];
    char *p_aux;
    char aux[20];
    int longitud;
    int cont;
    int veces;
    //Leo 4 palabras
    for (cont=0;cont<4;cont++){
        cout<<"palabra: ";
        cin>> aux;
        longitud=devuelve_longitud(aux);
        palabras[cont]=(char *)malloc((longitud+1)*sizeof(char)); //Reserva malloc, sizeof(char) calcular bites
        strcpy(palabras[cont],aux);//strcpy, los 2 
    }
    cout<<"\nLISTA DE PALABRAS\n";
    for(cont=0;cont<4;cont++){
        printf("%s\n",palabras[cont]);
    }
    //ORDENADAS POR EL METODO DE BURBUJA
    for (veces=1;veces<4;veces++){
        for (cont=0;cont<3;cont++){
            if (strcmp(palabras[cont],palabras[cont+1])>0){    //Intercambio a 3 bandas
                cout<<"\nentro\n";
                p_aux=palabras[cont];
                palabras[cont]=palabras[cont+1];
                palabras[cont+1]=p_aux;
            }
        }
    }

   cout<<"\nLISTA DE PALABRAS ORDENADAS\n";
    for(cont=0;cont<4;cont++){
        printf("%s\n",palabras[cont]);
        }
    system("pause");

}
