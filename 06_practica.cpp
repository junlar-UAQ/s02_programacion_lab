//Larios Estrada Juan José de Jesús 2.Operaciones aritméticas - Programa 3
/**
 * 3. Desarrolla un programa para convertir de moles a gramos para el caso de a) el agua, b) cloruro de sodio, c) y el ácido sulfúrico.
 */
 
#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<cctype>

using namespace std;

int main(){
	//Configuración de caracteres
	setlocale(LC_CTYPE,"spanish");
	
	//Declaración de las variables
	char opcion;
	float cantidadMoles;
	
	//Recibir datos del usuario
	cout<<"Programa Mol-Gramos"<<endl;
	cout<<"\tIntroduzca la cantidad de moles: ";
	cin>>cantidadMoles;
	cout<<"\tElige una sustancia:\n";
	cout<<"\t\ta.- Agua (H2O)"<<endl;
	cout<<"\t\tb.- Cloruro de Sodio (NaCl)"<<endl;
	cout<<"\t\tc.- Ácido Sulfúrico (H2SO4)"<<endl;
	cout<<"Introduzca la opción: ";
	cin>>opcion;
	cout<<endl;
	
	//Pausando y limpiando consola
	system("pause");
	system("cls");
	
	//Revisando que opción eligió el usuario
	opcion=tolower(opcion);
	switch(opcion){
		case 'a':
			cout<<cantidadMoles<<" de agua (H20 - 18.015g/mol) equivale a "<<(18.015*cantidadMoles)<<" gramos, que son: \n\tH (1.008g/mol) x 2: "<<(2.016*cantidadMoles)<<"g\n\tO (15.999g/mol): "<<(15.999*cantidadMoles)<<"g\n";//18.015 es la masa molar del agua
			break;
		case 'b':
			cout<<cantidadMoles<<" de Cloruro de Sodio (NaCl - 58.443g/mol) equivale a "<<(58.443*cantidadMoles)<<" gramos, que son: \n\tNa (22.99g/mol): "<<(22.99*cantidadMoles)<<"g\n\tCl (35.453g/mol): "<<(35.453*cantidadMoles)<<"g\n";
			break;
		case 'c':
			cout<<cantidadMoles<<" de ácido sulfúrico (H2SO4 - 98.078g/mol) equivale a "<<(98.078*cantidadMoles)<<" gramos, que son: \n\tH (1.008g/mol) x 2: "<<(2.016*cantidadMoles)<<"g\n\tS (32.006g/mol): "<<(32.006*cantidadMoles)<<"g\n\tO (15.999g/mol) x 4: "<<(63.996*cantidadMoles)<<"g\n";
			break;
		default:
			cout<<"No introdujo una opción valida";
		
	}
	
	//Pausando y limpiando consola
	cout<<endl;
	system("pause");
	system("cls");
	
	return 0;
}
