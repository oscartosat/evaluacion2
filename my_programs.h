#include<my_programs>
int devuelve_longitud(char palabra[]){
    int longitud=0;
    int cont=0;
    while(palabra[cont]!='\0'){
         longitud++;
         cont++;
    }
    return(longitud);
}



void cambio_m_M(char palabra[]){
    int cont=0;
    for (cont=0;cont<devuelve_longitud(palabra);cont++){
        if (palabra[cont]>=65&&palabra[cont]<=90){
            palabra[cont]=palabra[cont]+32;
        }
        else if (palabra[cont]>=97&&palabra[cont]<=122){
            palabra[cont]=palabra[cont]-32;
        }
    }
}
