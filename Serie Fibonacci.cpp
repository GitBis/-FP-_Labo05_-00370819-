#include "pch.h"
#include <iostream>
using namespace std;

int numi, actual, anterior, save, i;

int main()
{
    cout << "\n\t\SERIE FIBONACCI\n\n";
	cout << "\n\Ingrese un numero:\n"<<endl;
	cin >> numi;

	cout << "\n\n\Los numeros del fibonacci son: \n\n";
	cout << "\n\Para " << numi << " tenemos hasta: \n";


	// 0,1,1,2,3,5,8

	// comenzamos con 1 y le sumamos 0 y asi sucesivamente

	anterior = 0;  
	actual = 1;
	save = actual; //guardar el 1 o lo que seria el numero actual cuando se sueme


	if (numi == 0) {

		cout << "\n\t" << numi << "\n"; // Si el numero que se ingresa es cero, solo se muestra un cero
	}

	else{   //sino es cero si hace el proceso de fibonacci

	for (i = 0; i < numi; i++) { // inicia cuando desde cero, termina cuando sea igual al numero que ingresamos, y decimos que se va a sumar

		save = actual;            
		actual = actual + anterior; // sumamos el 1 con el 0
		anterior = save; // usamos el valor guardado de actual
		
		cout << "\n\t" << anterior << "\n";
	}

	}

	return 0;
}

