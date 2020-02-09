#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero[4], multiplicacion=1;
	
	for(int i=0;i<4;i++){
		cout<<"Introduzca un numero: ";
		cin>>numero[i];
		multiplicacion*=numero[i];
	}
	
	cout<<"La multiplicacion vale: "<<multiplicacion<<endl;
	system("pause");
	return 0;
}
