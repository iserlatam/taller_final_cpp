/*
Desarrolle una aplicación que permita al usuario seleccionar una de las siguientes 
magnitudes físicas:
a. Temperatura
b. Longitud
c. Presión
d. Masa
e. Tiempo
*/

#include "magnitudes.h"
#include <iostream>
#include <string>
using namespace std;

//	Variables generales
int opt1, unidad;
//	Var temperatura
float temp, newTemp1, newTemp2;


magnitudes::magnitudes()
{
	cout << "Seleccione una opción: \n1.Temp\n2. Long\n3. presion\n4. Masa\n5. Tiempo" << endl;
	cin >> opt1;
	
	switch(opt1) {
		case 1:
			cout << "Ingrese la unidad de temperatura:\n1. Celsius\n2. Kelvin\n3. Farenheit" << endl;
			cin.get();
			cin >> unidad;
			
			switch(unidad)
			{
				case 1:
					cout << "Seleccione el valor para celsius: " << endl;
					cin.get();
					cin >> temp;
					// C a K
					newTemp1 = temp + 273.15;
					// C a F
					newTemp2 = (9/5) * temp + 32;
					
					cout << "Temperatura inicial en Celsius: " << temp << "\nNueva temperatura en Kelvin: " << newTemp1 << endl;
					cout << "Nueva temperatura en Farenheit: " << newTemp2 << endl;
					break;
				case 2:
					cout << "Ha ingresado Kelvin. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					// Convertimos kelvin a c y f
					// K a C
					newTemp1 = temp-273.15;
					// K a F
					newTemp2 = ((9*temp)-2298.35)/5;
					cout << "C = " << newTemp1 << endl;
					cout << "F = " << newTemp2 << endl;
					break;
				case 3:
					cout << "Ha ingresado Farenheit. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					// Convertimos f a c y k
					// f a C
					newTemp1 = (temp-32)/1.8;
					// F a K
					newTemp2 = ((5*temp)+2298.35)/9;
					cout << "C = " << newTemp1 << endl;
					cout << "K = " << newTemp2 << endl;
					break;
			}
			break;
		case 2:
			cout << "Ingrese la unidad de longitud:\n1. Centimetros \n2. Metros\n3. Pulgadas" << endl;
			cin.get();
			cin >> unidad;
			switch(unidad)
			{
				case 1:
					cout << "Ha ingresado cm. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					newTemp1 = temp*100;
					newTemp2 = temp*0.393701;
					cout << "M = " << newTemp1 << endl;
					cout << "In = " << newTemp2 << endl;
					break;
				case 2:
					cout << "Ha ingresado m. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					newTemp1 = temp/100;
					newTemp2 = temp*39.3701;
					cout << "Cm = " << newTemp1 << endl;
					cout << "In = " << newTemp2 << endl;
					break;
				case 3:
					cout << "Ha ingresado In. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					newTemp1 = temp*2.54;
					newTemp2 = temp*0.0254;
					cout << "Cm = " << newTemp1 << endl;
					cout << "M = " << newTemp2 << endl;
					break;
			}
			break;
		case 3:
			cout << "Ingrese la unidad de presión:\n1. Pascal\n2. Atm\n3. Bar" << endl;
			cin.get();
			cin >> unidad;
			switch(unidad)
			{
				case 1:
					cout << "Ha ingresado Pa. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					newTemp1 = temp/0.00000986923;
					newTemp2 = temp/100000;
					cout << "Atm = " << newTemp1 << endl;
					cout << "Bar = " << newTemp2 << endl;
					break;
				case 2:
					cout << "Ha ingresado Atm. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					newTemp1 = temp*101325;
					newTemp2 = temp*1.01325;
					cout << "Pa = " << newTemp1 << endl;
					cout << "Bar = " << newTemp2 << endl;
					break;
				case 3:
					cout << "Ha ingresado Bar. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					newTemp1 = temp*100000;
					newTemp2 = temp/0.986923;
					cout << "Pa = " << newTemp1 << endl;
					cout << "Atm = " << newTemp2 << endl;
					break;
			}
			break;
		case 4:
			cout << "Ingrese la unidad de masa:\n1. Gramos\n2. Libras\n3. Kilogramos" << endl;
			cin.get();
			cin >> unidad;
			switch(unidad)
			{
				case 1:
					cout << "Ha ingresado G. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					newTemp1 = temp/1000;
					newTemp2 = temp/453.6;
					cout << "Kg = " << newTemp1 << endl;
					cout << "Lb = " << newTemp2 << endl;
					break;
				case 2:
					cout << "Ha ingresado Lb. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					newTemp1 = temp/2.205;
					newTemp2 = temp*453.6;
					cout << "Kg = " << newTemp1 << endl;
					cout << "G = " << newTemp2 << endl;
					break;
				case 3:
					cout << "Ha ingresado Kg. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					newTemp1 = temp*1000;
					newTemp2 = temp*2.205;
					cout << "G = " << newTemp1 << endl;
					cout << "Lb = " << newTemp2 << endl;
					break;
			}
			break;
		case 5:
			cout << "Ingrese la unidad de tiempo:\n1. Segundos\n2. Minutos\n3. Hora" << endl;
			cin.get();
			cin >> unidad;
			switch(unidad)
			{
				case 1:
					cout << "Ha ingresado s. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					newTemp1 = temp/60;
					newTemp2 = temp/3600;
					cout << "Min = " << newTemp1 << endl;
					cout << "H = " << newTemp2 << endl;
					break;
				case 2:
					cout << "Ha ingresado Min. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					newTemp1 = temp*60;
					newTemp2 = temp/60;
					cout << "S = " << newTemp1 << endl;
					cout << "H = " << newTemp2 << endl;
					break;
				case 3:
					cout << "Ha ingresado Hora. Ingrese el valor: " << endl;
					cin.get();
					cin >> temp;
					newTemp1 = temp*60;
					newTemp2 = temp*3600;
					cout << "Min = " << newTemp1 << endl;
					cout << "S = " << newTemp2 << endl;
					break;
			}
			break;
	}
}

