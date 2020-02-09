#include<iostream>
#include<stdlib.h>
 using namespace std;
 
 int main(){
 	float precio,iva,precio_final;
 	
 	cout<<"Introduzca el precio: ";
 	cin>>precio;
 	
 	cout<<"Introduzca tipo IVA:\n 1.General\n 2.Reducido\n 3.Superreducido\n";
 	cin>>iva;
 	
 	if(iva==1){
 		precio_final=precio*1.16;
	 }
	 if(iva==2){
	 	precio_final=precio*1.07;
	 }
	 if(iva==3){
	 	precio_final=precio*1.04;
	 }
	 
	 cout<<"El precio final es: "<<precio_final<<endl;
	 system("pause");
	 return 0;
 }
