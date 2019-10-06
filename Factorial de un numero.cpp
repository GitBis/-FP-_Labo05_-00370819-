#include "pch.h"
#include <iostream>
using namespace std;

int num, factorial;

int main()
{
    cout << "\n\t\FACTORIAL DE UN NUMERO\n\n";
	cout << "Ingrese un numero:\n"<<endl;
	cin >> num;
	
	factorial = num; //decimos que el numero ingresado num va a serl el factorial

		for (int i = num - 1; i >= 1; i--) { // la variable i va a ser igual al numero ingresado - 1 y decresiendo hasta ser igual a 1

			factorial = factorial * i;   // se va a multiplicar con cada numero menor al ingresado hasta 1

	}
		cout << "\n\El Factorial de " << num <<" es: " << factorial <<endl;

		return 0;
}
