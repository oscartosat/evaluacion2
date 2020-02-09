#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	float num1,num2;
	int operacion;
	
	cout<<"Introduzca el numero: ";
	cin>>num1;
	cout<<"Introduzca el numero: ";
	cin>>num2;
	cout<<"Introduzca tipo operacion:\n 1. suma\n 2. resta\n 3. multiplicacion\n 4. division\n  ";
	cin>>operacion;
	
	if(operacion==1){
		cout<<"El resultado es: "<<num1+num2;
	}
	else if(operacion==2){
		cout<<"El resultado es: "<<num1-num2;
	}
	else if(operacion==3){
		cout<<"El resultado es: "<<num1*num2;
	}
	else if(operacion==4){
		cout<<"El resultado es: "<<num1/num2;
	}
	
	cout<<"\n\n";
	
	system("pause");
	return 0;
}
