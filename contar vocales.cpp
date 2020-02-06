#include<iostream>
using namespace std;
int devuelve_longitud(char palabra[]){
    int longitud=0;//Variable acumuladora
    int cont=0;
    while(palabra[cont]!='\0'){
         longitud++;
         cont++;
    }
    return(longitud);
}

int main(){
    char salir;
    char palabra[10];
    char vocales[]={'a','e','i','o','u'};
    int nvocales;
    int cont=0;
    int cont2=0;
    cout<<"Dime algo: ";
    cin>>palabra;
    for(cont=0;cont<devuelve_longitud(palabra);cont++){
       for(nvocales=0;nvocales<5;nvocales++){
           if (palabra[cont]==vocales[nvocales]){
           cont2++;
           
           }
       }
    }
    cout<<"Numero vocales: "<<cont2;
    
    
    cin>>salir;

}
