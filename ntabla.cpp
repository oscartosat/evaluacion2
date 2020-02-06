#include<iostream>

int main(){
    //Definicion de variables
    int ntabla;
    int cont;
    char salir;
    std::cout <<"Que tabla deseas que muestre: ";
    std::cin >>ntabla;
    std::cout <<"**************************\n";
    std::cout <<"*       TABLA DEL ";
    std::cout << ntabla;   
    std::cout <<"      *\n";
    std::cout <<"**************************\n";
    for (cont=0;cont<=10;cont++){
        std::cout << ntabla;
        std::cout << " x ";
        std::cout << cont;
        std::cout << " = ";
        std::cout << " x ";
        std::cout << ntabla*cont;
        std::cout << "\n";
    }
    std::cin >> salir;

}
