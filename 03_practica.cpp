#include<iostream>
#include<stdio.h>
#include<math.h>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"spanish");
	float grados, radianes;
	
	//Recibiendo datos del usuario
	cout<<"Introduzca los grados para obtener sus funciones trigonom�tricas: ";
	cin>>grados;
	radianes=(grados*M_PI)/180;
	//Pausando y limpiando pantalla
	system("pause");
	system("cls");
	
	//Realizando las operaciones e imprimiendo
	cout<<"Funciones trigonom�tricas de "<<grados<<"� "<<endl;
	printf("\tsin(%.3f): %.2f\n",grados,sin(radianes));
	printf("\tcos(%.3f): %.2f\n",grados,cos(radianes));
	printf("\ttan(%.3f): %.2f\n",grados,tan(radianes));
	system("pause");
}
