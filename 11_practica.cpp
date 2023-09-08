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
	int edad;
	cout<<"Introduce la edad: ";
	cin>>edad;
	if(edad>=18){
		cout<<endl<<"Eres mayor de edad"<<endl;
	}else{
		cout<<endl<<"No eres lo suficientemente grande"<<endl;
		
	}
	system("pause");
	system("cls");
	
	return 0;
}
