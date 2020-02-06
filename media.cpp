/*Vamos a hacer un programa que nos pida 4 numeros
y los guarde para hacer la media*/

#include<iostream>

int main (){
    //Definicion de variables
    char salir;
    int num[4];
    int cont;
    float suma_numeros;
    float media;
    //Introducimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
          std::cout<<"Introduce el numero: ";
          std::cin>>num[cont];
    }
    //Sacamos los numeros guardados
    std::cout<<"Has metido los siguientes numeros\n";
    for(cont=0;cont<=3;cont++){
          std::cout<<num[cont];
          std::cout<<", ";
    }
    //Hacemos la media
    std::cout<<"MEDIA\n";
    suma_numeros=0;
    for(cont=0;cont<=3;cont++){
         suma_numeros=suma_numeros+num[cont];//suma acumulada
    }
    std::cout<<"La suma vale: ";
    std::cout<<suma_numeros;
    media=suma_numeros/4;
    std::cout<<"La media vale: ";
    std::cout<<media;
    //Hacemos la lista en orden inverso
    for(cont=0;cont<=3;cont--){
         std::cout<<num[cont]:
    }
    
    
    
    
    std::cin>> salir;
}
