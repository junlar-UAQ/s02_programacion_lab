#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE,"spanish");
	char seguir;
	int rangoSup, rangoInf, numero;
	do{
		cout<<"Programa Operadores L�gicos"<<endl;
		cout<<"\tIntroduce un el l�mite superior del rango: ";
		cin>>rangoSup;
		cout<<"\tIntroduce un el l�mite inferior del rango: ";
		cin>>rangoInf;
		cout<<"\tIntroduce un el n�mero: ";
		cin>>numero;
		system("pause");
		system("cls");
		cout<<"�El "<<numero<<" se encuentra dentro del rango ["<<rangoInf<<","<<rangoSup<<"]?: "<<(((rangoInf<=numero)&&(numero<=rangoSup))?"Si":"No")<<endl;
		cout<<"�El "<<numero<<" se encuentra fuera del rango ["<<rangoInf<<","<<rangoSup<<"]?: "<<((!(rangoInf>=numero||numero>=rangoSup))?"No":"Si")<<endl;
		cout<<"�Desea seguir? (s/n): ";
		cin>>seguir;
		system("cls");
	}while(seguir=='s'||seguir=='S');
	
	return 0;
}
