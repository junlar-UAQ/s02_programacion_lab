//Larios Estrada Juan José de Jesús 2.Operaciones aritméticas - Programa 4
/**
 * 4. Crear un algoritmo que pida al usuario la captura de las medidas de los catetos de un triángulo rectángulo (cateto opuesto y cateto adyacente). 
 * A partir de esta información, el programa debe calcular la hipotenusa y los 3 ángulos de dicho triángulo rectángulo (en grados sexagesimales).
 */
 
#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

//No se si math.h tenga una función parecida, pero por si acaso
float radianesGrados(float radianes){
	return (radianes*180)/M_PI;
}

int main(){
	
	//Configuración de caracteres
	setlocale(LC_CTYPE,"spanish");
	
	//Declarando las variable
	float catetoAdyacente,catetoOpuesto,tangente;
	
	//Recibiendo datos del usuario
	cout<<"Programa Triángulo"<<endl;
	cout<<"\tIntroduzca el valor del cateto adyacente: ";
	cin>>catetoAdyacente;
	cout<<"\tIntroduzca el valor del cateto opuesto: ";
	cin>>catetoOpuesto;
	
	//Pausando y limpiando la consola
	system("pause");
	system("cls");
	
	//Tangente
	tangente=catetoOpuesto/catetoAdyacente;
	
	//Mostrando resultados de las operaciones en consola
	cout<<"Valores del triángulo rectángulo: "<<endl<<endl;
	cout<<"\tHipotenusa: "<<sqrt((pow(catetoAdyacente,2)+pow(catetoOpuesto,2)))<<endl<<endl;
	cout<<"\tCateto adyacente: "<<catetoAdyacente<<endl<<endl;
	cout<<"\tCateto opuesto: "<<catetoOpuesto<<endl<<endl;
	cout<<"\tÁngulo a (Entre la hipotenusa y el cateto adyacente): "<<radianesGrados(atan(tangente))<<" grados"<<endl<<endl;
	cout<<"\tÁngulo b (Entre el cateto adyacente y el opuesto): 90 grados"<<endl<<endl;//:)
	cout<<"\tÁngulo c (Entre la hipotenusa y el cateto opuesto): "<<radianesGrados(atan((1/tangente)))<<endl<<endl;
	cout<<"\tLa suma de los ángulos internos es: "<<(radianesGrados(atan((catetoAdyacente/catetoOpuesto)))+90+radianesGrados(atan((catetoOpuesto/catetoAdyacente))))<<endl<<endl;//Para verificar que el programa funciona y que no me equivoqué en ninguna operación
	
	//Pausando y limpiando la consola
	system("pause");
	system("cls");
	return 0;
}
