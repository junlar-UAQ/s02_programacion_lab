/*
* if 
*     if
*/
#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;
int main(){
	setlocale(LC_CTYPE,"spanish");
	const int claveCorrecta=123456;
	const int passwordCorrecta=123456;
	int clave, password;
	cout<<"SISTEMA DE INICIO DE SESION"<<endl;
	cout<<"\tIntroduce tu clave de acceso: ";
	cin>>clave;
	if(clave==claveCorrecta){
		cout<<"\tIntroduce tu contrase�a: ";
		cin>>password;
		if(password==passwordCorrecta){
			cout<<"Acceso concedido!"<<endl<<"Bonito d�a"<<endl;
		}else{
			system("cls");
			cout<<"Acceso denegado"<<endl;
		}
	}else{
		system("cls");
		cout<<"Acceso denegado"<<endl;
	}
	
	system("pause");
	system("cls");
	
	return 0;
}
