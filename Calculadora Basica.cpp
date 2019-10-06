#include "pch.h"
#include <iostream>
using namespace std;

int opcion, repetir;
float operacion, num1, num2;
int main()
{
	repetir = 1;

	do {
		cout << "\n\t\CALCULADORA BASICA\n" << endl;
		cout << "\n\Elije la operacion a realizar con su numero1\n" << endl;
		cout << "1.-Suma de dos numeros" << endl;
		cout << "2.-Resta de dos numeros" << endl;
		cout << "3.-Multiplicacion de dos numeros" << endl;
		cout << "4.-Division de dos numeros" << endl;
		cout << "5.-Fibonacci de un numero" << endl;
		cout << "6.-Factorial de un numero" << endl;
		cout << "7.-Salir\n" << endl;

		cin >> opcion;


		system("cls");

		switch (opcion) {

		case 1:
			cout << "\n\Suma de dos numeros\n" << endl;
			cout << "\n\Ingrese dos numeros\n" << endl;
			cout << "Primer numero: ";
			cin >> num1;
			cout << "Segundo numero: ";
			cin >> num2;
			operacion = num1 + num2;
			cout << "\n\El resultado es: " << operacion << endl;

			break;

		case 2:
			cout << "\n\Resta de dos numeros\n" << endl;
			cout << "\n\Ingrese dos numeros\n" << endl;
			cout << "Primer numero: ";
			cin >> num1;
			cout << "Segundo numero: ";
			cin >> num2;
			operacion = num1 - num2;
			cout << "\n\El resultado es: " << operacion << endl;

			break;

		case 3:
			cout << "\n\Multiplicacion de dos numeros\n" << endl;
			cout << "\n\Ingrese dos numeros\n" << endl;
			cout << "Primer numero: ";
			cin >> num1;
			cout << "Segundo numero: ";
			cin >> num2;
			operacion = num1 * num2;
			cout << "\n\El resultado es: " << operacion << endl;

			break;

		case 4:
			cout << "\n\Division de dos numeros\n" << endl;
			cout << "\n\Ingrese dos numeros\n" << endl;
			cout << "Primer numero: ";
			cin >> num1;
			cout << "Segundo numero: ";
			cin >> num2;
			operacion = num1 / num2;
			cout << "\n\El resultado es: " << operacion << endl;

			break;


		case 5:

			int numi, actual, anterior, save, i;

			cout << "\n\t\SERIE FIBONACCI\n\n";
			cout << "\n\Ingrese un numero:\n" << endl;
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

			else {   //sino es cero si hace el proceso de fibonacci

				for (i = 0; i < numi; i++) { // inicia cuando desde cero, termina cuando sea igual al numero que ingresamos, y decimos que se va a sumar

					save = actual;
					actual = actual + anterior; // sumamos el 1 con el 0
					anterior = save; // usamos el valor guardado de actual

					cout << "\n\t" << anterior << "\n";
				}

			}

			break;


		case 6:

			int num, factorial;

			cout << "\n\t\FACTORIAL DE UN NUMERO\n\n";
			cout << "Ingrese un numero:\n" << endl;
			cin >> num;

			factorial = num; //decimos que el numero ingresado num va a serl el factorial

			for (int i = num - 1; i >= 1; i--) { // la variable i va a ser igual al numero ingresado - 1 y decresiendo hasta ser igual a 1

				factorial = factorial * i;   // se va a multiplicar con cada numero menor al ingresado hasta 1

			}
			cout << "\n\El Factorial de " << num << " es: " << factorial << endl;

		break;


		case 7:
			exit(0);


		default: cout << "\n\t\Esa no era una de las opciones :( vuelve a elegir\n" << endl;
		break;
		
		}
		system("pause");

		system("cls");
	} 
	
	while (repetir == 1);

	

		return 0;
	
}
