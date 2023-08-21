#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main(){
	
	//Declarando las variables necesarias
	int primero, segundo;
	
	//Estableciendo los caracteres de impresión en pantalla como español
	setlocale(LC_CTYPE,"spanish");
	
	//Recibiendo datos para operación
	cout<<"Introduciendo los datos\n"<<endl;
	cout<<"\tIntroduzca el primer número:\t";
	cin>>primero;
	cout<<"\tIntroduzca el segundo número:\t";
	cin>>segundo;
	
	//Pausar y limpiar consola
	system("pause");
	system("cls");
	
	//Mostrar operaciones
	cout<<"Resultados de las operaciones entre "<<primero<<" y "<<segundo<<endl<<endl;
	cout<<"\tLa suma de "<<primero<<" + "<<segundo<<" = "<<primero+segundo<<endl;
	cout<<"\tLa resta de "<<primero<<" - "<<segundo<<" = "<<primero-segundo<<endl;
	cout<<"\tLa multiplicación de "<<primero<<" x "<<segundo<<" = "<<primero*segundo<<endl;
	cout<<"\tLa división de "<<primero<<" / "<<segundo<<" = "<<primero/segundo<<" y su residuo es "<<primero%segundo<<endl<<endl;
	system("pause");
	
}
