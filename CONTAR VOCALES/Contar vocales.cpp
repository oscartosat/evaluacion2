#include<iostream>
#include<stdlib.h>

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
    char palabra[10];
    char vocales[]={'a','e','i','o','u'};
    int nvocales;
    int cont_let=0;
    int cont_voc=0;
    int cont_con=0;
    cout<<"Dime algo: ";
    cin>>palabra;
    for(cont_let=0;cont_let<devuelve_longitud(palabra);cont_let++){
       for(nvocales=0;nvocales<5;nvocales++){
           if (palabra[cont_let]==vocales[nvocales]){
           cont_voc++;
           
           }
       }
    }
    cont_con=cont_let-cont_voc;
    cout<<"Numero consonantes: "<<cont_con;
    
    
    system("pause");
    return 0;

}
