#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main(){
	
	//Declarando las variables necesarias
	int primero, segundo;
	
	//Estableciendo los caracteres de impresi�n en pantalla como espa�ol
	setlocale(LC_CTYPE,"spanish");
	
	//Recibiendo datos para operaci�n
	cout<<"Introduciendo los datos\n"<<endl;
	cout<<"\tIntroduzca el primer n�mero:\t";
	cin>>primero;
	cout<<"\tIntroduzca el segundo n�mero:\t";
	cin>>segundo;
	
	//Pausar y limpiar consola
	system("pause");
	system("cls");
	
	//Mostrar operaciones
	cout<<"Resultados de las operaciones entre "<<primero<<" y "<<segundo<<endl<<endl;
	cout<<"\tLa suma de "<<primero<<" + "<<segundo<<" = "<<primero+segundo<<endl;
	cout<<"\tLa resta de "<<primero<<" - "<<segundo<<" = "<<primero-segundo<<endl;
	cout<<"\tLa multiplicaci�n de "<<primero<<" x "<<segundo<<" = "<<primero*segundo<<endl;
	cout<<"\tLa divisi�n de "<<primero<<" / "<<segundo<<" = "<<primero/segundo<<" y su residuo es "<<primero%segundo<<endl<<endl;
	system("pause");
	
}
