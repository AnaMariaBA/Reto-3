/*
* Nombre del archivo : punto3B.cpp
* Descripcion: recibe tres numeros enteros y retorna un entero
* Autor : Ana Maria Bolaños, Juan Daniel Azcarate, Carlos Mauricio Serna
* Fecha de creacion: 5 de abril de 2017
* Ultima fecha de modificacion: 5 de abril de 2017
*/


#include <iostream>
using namespace std;
//Aqui declaramos la funcion que en este caso se llama funcion..
char funcion (int a , int b );

int main(){
	int a = 0;
	int b = 0;
	cout << " ingrese dos numeros" << endl;
	cin >> a;
	cin >> b; 
	cout << funcion(a,b) << endl;
}
//la funcion "funcion" recibe 2 enteros y retorna un char dependiendo del valor de los dos numeros anteriores.
char funcion (int a , int b){
	if ((b > 0)  && (a > 0)){
		return 'c';
		}if (b < 0){
			if (a > 5 or b < -5){
				return 'd';
				}if (a <= 5 && b > 5){
					return 'f';
					}else return 'k';
			}if (b == 0 && a > 0){
				return 'u';
			}else return 'v';
	
}
