/*
* if - elseif -else
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
	cout<<"Introduce tu edad: ";
	cin>>edad;
	if(edad<12){
		cout<<endl<<"Eres un niño"<<endl;
	}else if(edad<18){
		cout<<endl<<"Eres un adolescente"<<endl;
	}else if(edad<60){
		cout<<endl<<"Eres un adulto joven"<<endl;
	}else{
		cout<<endl<<"Eres un adulto mayor"<<endl;
	}
	
	system("pause");
	system("cls");
	
	return 0;
}
