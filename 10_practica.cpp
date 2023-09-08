#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"spanish");
	char genero;
	cout<<"¿Cuál es tu género? (H/M): ";
	cin>>genero;
	if(genero=='H'||genero=='h'){
		cout<<endl<<"Eres hombre :)";
	}else if(genero=='M'||genero=='m'){
		cout<<endl<<"Eres mujer :)";
	}else{
		cout<<endl<<"No se que eres :| Ni tu tampoco!";
	}
	
	return 0;
}
