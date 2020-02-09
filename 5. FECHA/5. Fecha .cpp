#include<iostream>
#include<conio.h>

using namespace std;

int mian(){
int dia,n_mes,ano; 
char mes;

	cout<<"Introduzca su fecha:\nDia: "; 
	cin>>dia; 
	cout<<"mes: "; cin>>n_mes; 
	cout<<"año: "; cin>>ano;
	
	if(n_mes==1){mes="Enero";} 
	else if(n_mes==2){mes="Febrero";} 
	else if(n_mes==3){mes="Marzo";}
	else if(n_mes==4){mes="Abril";} 
	else if(n_mes==5){mes="Mayo";} 
	else if(n_mes==6){mes="Junio";} 
	else if(n_mes==7){mes="Julio";} 
	else if(n_mes==8){mes="Agosto";}
	else if(n_mes==9){mes="Septiembre";}
	else if(n_mes==10){mes="Octubre";} 
	else if(n_mes==11){mes="Noviembre";} 
	else if(n_mes==12){mes="Diciembre";}
	
	cout<<"Su fecha es: "<<dia<<" / "<<mess<<" / "<<ano<<endl<<endl;
	
	getch();
	return 0;
}
