/*
* if - else
*/
#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;
int main(){
	setlocale(LC_CTYPE,"spanish");
	char turno;
	cout<<"Introduce el turno en el que vas (M/V): ";
	cin>>turno;
	if((turno=='M')||(turno=='m')){
		cout<<endl<<"Eres del turno matutino"<<endl;
	}else{
		cout<<endl<<"Eres del turno vespertino"<<endl;
		
	}
	
	system("pause");
	system("cls");
	
	return 0;
}
