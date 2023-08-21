//Larios Estrada Juan José de Jesús 2.Operaciones aritméticas - Programa 2
/**
 * 2. Imprime las primeras 10 tablas de multiplicar usando el operador multiplicación. 
 * De manera opcional, puede solicitar al usuario que escoja qué tabla quiere que se 
 * imprima, de manera que solo se desarrolle una tabla en vez de las 10 de manera consecutiva.
 */
 
#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

using namespace std;

int main(){
	
	//Configuración de caracteres
	setlocale(LC_CTYPE,"spanish");
	
	//Declaración de las variables
	int tablaDeMultiplicar, finalTablaDeMultiplicar;//Estas variables nos ayudan a que con un solo algoritmo, podamos imprimir cualquier tabla de multiplicar
	
	int opcion;
	
	//Recibiendo datos del usuario
	cout<<"Programa Tablas de multiplicar"<<endl<<endl;
	cout<<"\tEscribe '0' para mostrar la tabla de multiplicar de 10 x 10"<<endl;
	cout<<"\tEscribe un numero para obtener su tabla de multiplicar hasta el 10"<<endl<<endl;
	cout<<"\tIntroduce '0' o el numero: ";
	cin>>opcion;
	
	//Pausando y limpiando consola
	system("pause");
	system("cls");
	
	//Revisando la opción elegida por el usuario
	if(opcion!=0){//Se usa el '0', porque la verdad, no tendría mucho chiste hacer una tabla de multiplicar del 0
		tablaDeMultiplicar=opcion;
		finalTablaDeMultiplicar=opcion;
	}else{
		tablaDeMultiplicar=1;
		finalTablaDeMultiplicar=10;
	}
	
	//Imprimiendo la tabla de multiplicar, sin importar su tamaño
	cout<<"   \t1\t2\t3\t4\t5\t6\t7\t8\t9\t10"<<endl;
	cout<<"------------------------------------------------------------------------------------------"<<endl;
	
	//Sería posible inclusive imprimir rangos dentro de la tabla de multiplicar, pero sería más trabajo
	for(int i=tablaDeMultiplicar;i<=finalTablaDeMultiplicar;i++){
		cout<<i<<"|\t";
		for(int j=1;j<=10;j++){
			cout<<j*i<<"\t";
		}
		cout<<endl;
	}
	
	//Pausando y limpiando consola
	system("pause");
	system("cls");
	return 0;
}
