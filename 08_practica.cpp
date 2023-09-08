#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(){
	
	//Condigurando caracteres
	setlocale(LC_CTYPE,"spanish");
	
	//Declarando las variables
	int a,b;
	char opcion;
	
	do{
		//Recibiendo datos del usuario
		cout<<"Programa Operadores Condicionales";
		cout<<endl<<"Introduce 'a': ";
		cin>>a;
		cout<<endl<<"Introduce 'b': ";
		cin>>b;
		system("pause");
		system("cls");
		
		//Imprimiendo resultados de las operaciones lógicas
		cout<<"Resultados"<<endl;
		cout<<"\t"<<a<<" > "<<b<<": \t"<<((a>b)?"Verdadero":"Falso")<<endl;
		cout<<"\t"<<a<<" >= "<<b<<": \t"<<((a>=b)?"Verdadero":"Falso")<<endl;
		cout<<"\t"<<a<<" = "<<b<<": \t"<<((a==b)?"Verdadero":"Falso")<<endl;
		cout<<"\t"<<a<<" < "<<b<<": \t"<<((a<b)?"Verdadero":"Falso")<<endl;
		cout<<"\t"<<a<<" <= "<<b<<": \t"<<((a<=b)?"Verdadero":"Falso")<<endl;
		cout<<"\t"<<a<<" != "<<b<<": \t"<<((a!=b)?"Verdadero":"Falso")<<endl;
		cout<<"¿Desea continuar? (s/n): ";
		cin>>opcion;
		
		//limpiando consola
		system("cls");
	}while(opcion!='n'&&opcion!='N');
	
	
	
	return 0;
	
}
