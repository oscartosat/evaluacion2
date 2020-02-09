#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int dolares,euros;
	
	cout<<"Escriba la cantidad de dolares a depositar: ";
	cin>>dolares;
	
	euros=dolares*0.91;
	
	cout<<euros<<endl;
	
	system("pause");
	return 0;
}
