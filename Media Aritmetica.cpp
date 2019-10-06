#include "pch.h"
#include <iostream>
using namespace std;

int numdatos, ingreso, suma, media;

int main()
{
    cout << "\n\t\ MEDIA ARITMETICA \n";
	cout << "\n\ Cuantos datos va a ingresar? \n"<<endl;
	cin >> numdatos;

	
	for (int i = 0; i < numdatos; i++)
	{
	
		cout << "\n\n\ Ingrese el dato " << (i+1) <<" :"<<endl;
		cin >> ingreso;

		suma += ingreso;
	}

	media = suma / numdatos;

	cout << "\n\t\ La media aritmetica es: "<<media <<endl;

	return 0;
}


