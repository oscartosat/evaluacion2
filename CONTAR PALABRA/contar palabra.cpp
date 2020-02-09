#include<iostream>
#include<conio.h>

/*Un programa que lea una palabra y
sustituya las vocales por 'u'*/

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
    int cont,nvocales;
    cout<<"Dime algo: ";
    cin>>palabra;
    for(cont=0;cont<devuelve_longitud(palabra);cont++){
       for(nvocales=0;nvocales<5;nvocales++){
           if (palabra[cont]==vocales[nvocales]){
              palabra[cont]='u';
           }
       }
    }
    cout<<"Palabra troleada: "<<palabra<<endl;
    
    getch();
    return 0;
}
