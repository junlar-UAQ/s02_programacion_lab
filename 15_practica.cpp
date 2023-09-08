#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"spanish");
	char tieneINE;
	int edad;
	cout<<"¿Cuál es tu edad?: ";
	cin>>edad;
	cout<<"¿Tienes INE?(S/N): ";
	cin>>tieneINE;
	if((tieneINE=='s'||tieneINE=='S')&&edad>=18){
		cout<<endl<<"Puedes votar!"<<endl;
	}else{
		cout<<endl<<"No puedes votar!"<<endl;
	}
	system("pause");
	system("cls");
	
	return 0;
}
