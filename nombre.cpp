#include<iostream>

int main(){
    char palabra[10];
    char salir;
    int cont;
    int longitud;
    std::cout<<"Dime tu nombre: ";
    std::cin>>palabra;
    std::cout<<"\nTe llamas ";
    std::cout<<palabra<<"\n";
    //std::cout<<"\nLa primera letra de tu nombre es ";//
    //std::cout<<palabra[0];//
    for (cont=0;cont<=9;cont++){
        std::cout<<palabra[cont];
        std::cout<<'\n';
}
    //Contamos cuantas letras tiene tu nombre
    for (cont=0;palabra[cont]!='\0';cont++){
        
              longitud=longitud+1;
              
}
    std::cout<<"El nombre de ";
    std::cout<<palabra;
    std::cout<<" tiene ";
    std::cout<<longitud;
    std::cout<<" letras";
    std::cin>>salir;
}
