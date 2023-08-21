//Larios Estrada Juan Jos� de Jes�s 2.Operaciones aritm�ticas - Programa 1
/**
 * 1. Crear un algoritmo que pida al usuario los coeficientes (a, b, c) 
 * de un sistema de segundo orden en la forma ax2+bx+c=0. 
 * Con esta informaci�n, el programa obtendr� las 2 raices correspondientes. 
 */
#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>

using namespace std;

int main(){
	
	//Configuraci�n de caracteres
    setlocale(LC_CTYPE,"spanish");
    
    //Declaraci�n de variables
    float coeficienteA, coeficienteB, coeficienteC, raiz1, raiz2;
    
    //Recibiendo datos del usuario
    cout<<"Programa para la F�rmula General"<<endl;
    printf("\tIntroduzca los coeficientes de la ecuaci�n de segundo grado ax%c+bx+c: \n",178);
    cout<<"\t\ta: ";
    cin>>coeficienteA;
    cout<<"\t\tb: ";
    cin>>coeficienteB;
    cout<<"\t\tc: ";
    cin>>coeficienteC;
    
    //Pausando y limpiando consola
    system("pause");
    system("cls");
    
    //Obteniendo las dos raices
    raiz1=((-coeficienteB)+sqrt(pow(coeficienteB,2)-4*coeficienteA*coeficienteC))/(2*coeficienteA);
    raiz2=((-coeficienteB)-sqrt(pow(coeficienteB,2)-4*coeficienteA*coeficienteC))/(2*coeficienteA);
    
    //Imprimiendo los resultados
    cout<<"Las raices de la ecuaci�n son: "<<endl;
    cout<<"x1: "<<raiz1<<endl;
    cout<<"x2: "<<raiz2<<endl;
    
    //Pausando y limpiando consola
    system("pause");
    system("cls");
    
    return 0;
}
