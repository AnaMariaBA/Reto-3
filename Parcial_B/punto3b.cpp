/*
* Nombre del archivo : punto3B.cpp
* Descripcion: recibe tres numeros enteros y retorna un entero
* Autor : Ana Maria Bolaños, Juan Daniel Azcarate, Carlos Mauricio Serna
* Fecha de creacion: 5 de abril de 2017
* Ultima fecha de modificacion: 5 de abril de 2017
*/

#include <iostream>

using namespace std;

int funcion (int a, int b, int c);
int main(){
	int a, b, c;
	cout<<"ingrese tres numeros enteros"<<endl;
	cin>> a;
	cin>> b;
	cin>> c;
	cout<<funcion (a, b, c)<<endl;
}
	
int funcion (int a, int b, int c){
	
	if(a>0 && b>0){
		return (c*2);
	}
		else{
			if (a<0){
				if(b>5 || b<-5){
					return (c*3);
					}
				if(a<=5 && b>5){
					return (c*5);
					}
				else{
					return (c*4);
					}
				}
		else{
			if (b==0 && a>0){
			return (c*5);
			}
			return c;
		}
	}
}


