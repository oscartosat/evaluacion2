#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	int horas,extras,sueldo;
	
	cout<<"Introduzca el numero de horas trabajadas: ";
	cin>>horas;
	
	if(horas<=40){
		sueldo=horas*30;
		cout<<"Tu sueldo es de: "<<sueldo;
	}
	
	else if(horas>40){
		sueldo=40*30+(horas-40)*45;
		cout<<"Tu sueldo es de: "<<sueldo;
	}
	
	cout<<"\n\n";
	system ("pause");
	return 0;
}
