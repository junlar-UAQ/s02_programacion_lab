#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
using namespace std;
int main(){
	int value;
	setlocale(LC_CTYPE,"spanish");
	cout<<"Introduce una calificación: ";
	cin>>value;
	switch(value){
		case 0:cout<<"Burro"<<endl;
		case 1:
		case 2:cout<<"Otro más"<<endl;
		case 3:
		case 4:
		case 5:cout<<"No aprobado"<<endl;break;
		case 6:cout<<"Aprobado"<<endl;break;
		case 7:cout<<"Bueno"<<endl;break;
		case 8:
		case 9:cout<<"Sobresaliente"<<endl;break;
		case 10:cout<<"excelente"<<endl;break;
		default:cout<<"No valido"<<endl;break;
	}
	system("pause");
	return 0;
}
