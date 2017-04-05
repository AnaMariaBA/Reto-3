#include <iostream>


using namespace std;

char funcion (int a , int b );
		
int main(){
	int a = 0;
	int b = 0;
	char h = 'c';
	cout << " ingrese dos numeros" << endl;
	cin >> a;
	cin >> b; 
	cout << funcion(a,b) << endl;
}

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
