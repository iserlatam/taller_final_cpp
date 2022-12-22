#include "rentaCoche.h"
#include <iostream>
#include <string>
using namespace std;

//	Variables globales
// el simbolo $ se identifica en dec ASCI como 36
char currency = 36;
// Cadena km se almacena en una variable para su reutilizacion
string kmString = "km";
//	Usada para identificar el género del cliente automáticamente
string customerName;
//	Variable utilizada para dar dinamismo a la ejecucción del programa
string modelo;
//	Opt para los switchs
int opt;
//	Precio base para el alquiler de un vehículo hasta 300km
int basePriceAmount = 250000;
//	Kilometraje maximo antes de cobrar un excedente 
int fixedKmAmount = 300;

float newFinalPrice;
float finalTax;

float finalKmAmount;
float newFinalKmAmount;
		
rentaCoche::rentaCoche()
{
	//	EJERCICIO 1 - RENTA DE COCHE
	
		
	
		//	Identificando que genero del cliente por su nombre
		cout << "Ingrese su nombre: " << endl;
		
		getline(cin, customerName);
		
	//	Obtención del último caracter mediante el método std::string:back(). Devuelve un entero con el simbolo ASCI
		char lastCharacter = customerName.back();
		
	//	Comprobación de 
		if(lastCharacter == 97 || lastCharacter == 97)
		{
			cout << "Bienvenida: " << customerName << " al sistema de rentado de coches. Seleccione una de las siguientes opciones: " << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "1. Rentar un coche\n" << "2. Entregar un coche\n" << "3. Salir" << endl;
			cin >> opt;
			
			switch(opt)
			{
				case 1:
					
					cout << "Gracias por utilizar nuestros servicios. ¿Que modelo desea rentar?" << endl;
					cin.get();
					getline(cin, modelo);
					
					cout << "Ha elegido el modelo: " << modelo << "\n" << endl;
					cout << "-------------------------------\n" << endl;
					cout << "Caracteristicas iniciales:\n" << endl;
					cout << "Modelo: " << modelo << "\n" << endl;
					cout << "Kilometraje cubrido dentro del valor inicial: " << fixedKmAmount << kmString << endl;
					cout << "Precio de alquiler inicial: " << basePriceAmount << currency << endl;
					
					cout << "--------------------------------------------\nFelicidades, su coche ha sido rentado!" << endl;
					break;
				case 2:
					/*
					Para mï¿½s de 300 km y hasta 1000 
					km, cobra un monto adicional de $ 20.000 por cada kilï¿½metro que exceda los 300. 
					Para mï¿½s de 1000 km cobra un monto adicional de $ 10.000 por cada kilï¿½metro en 
					exceso sobre 1000.
					*/
					cout << "Ingrese el kilometraje final del coche: " << endl;
					cin.get();
					cin >> finalKmAmount;
					
					if (finalKmAmount > 300 && finalKmAmount < 1000)
					{
						newFinalKmAmount = finalKmAmount - 300;
						finalTax = newFinalKmAmount * 20000;
						newFinalPrice = basePriceAmount + finalTax;
					} 
					else if(finalKmAmount > 1000)
					{
						newFinalKmAmount = finalKmAmount - 300;
						finalTax = newFinalKmAmount * 10000;
						newFinalPrice = basePriceAmount + finalTax;
					}
					else if(finalKmAmount < 300)
					{
						finalTax = 0;
						newFinalPrice = basePriceAmount;
					}
					cout << "Usted ha excedido su km inicial en: " << newFinalKmAmount << kmString << endl;
					cout << "Se le cobrará un impuesto de: " << finalTax << currency << endl;
					cout << "El precio total a pagar es: " << newFinalPrice << currency << endl;
					break;
				case 3:
					exit(1);
					break;
			}
			
		} else
		{
			cout << "Bienvenido: " << customerName << " al sistema de rentado de coches. Seleccione una de las siguientes opciones: " << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "1. Rentar un coche\n" << "2. Entregar un coche\n" << "3. Salir" << endl;
			cin >> opt;
			
			switch(opt)
			{
				case 1:
					
					cout << "Gracias por utilizar nuestros servicios. ¿Que modelo desea rentar?" << endl;
					cin.get();
					getline(cin, modelo);
					
					cout << "Ha elegido el modelo: " << modelo << "\n" << endl;
					cout << "-------------------------------\n" << endl;
					cout << "Caracteristicas iniciales:\n" << endl;
					cout << "Modelo: " << modelo << "\n" << endl;
					cout << "Kilometraje cubrido dentro del valor inicial: " << fixedKmAmount << kmString << endl;
					cout << "Precio de alquiler inicial: " << basePriceAmount << currency << endl;
					
					cout << "--------------------------------------------\nFelicidades, su coche ha sido rentado!" << endl;
					break;
				case 2:
					/*
					Para mï¿½s de 300 km y hasta 1000 
					km, cobra un monto adicional de $ 20.000 por cada kilï¿½metro que exceda los 300. 
					Para mï¿½s de 1000 km cobra un monto adicional de $ 10.000 por cada kilï¿½metro en 
					exceso sobre 1000.
					*/
					cout << "Ingrese el kilometraje final del coche: " << endl;
					cin.get();
					cin >> finalKmAmount;
					
					if (finalKmAmount > 300 && finalKmAmount < 1000)
					{
					//	Monto adicional por km -> 20000 para > 300km & < 1000km
						newFinalKmAmount = finalKmAmount - 300;
						finalTax = newFinalKmAmount * 20000;
						newFinalPrice = basePriceAmount + finalTax;
					} 
					else if(finalKmAmount > 1000)
					{
					//	Monto adicional por km -> 10000 para > 1000km
						newFinalKmAmount = finalKmAmount - 300;
						finalTax = newFinalKmAmount * 10000;
						newFinalPrice = basePriceAmount + finalTax;
					}
					else if(finalKmAmount < 300)
					{
						finalTax = 0;
						newFinalPrice = basePriceAmount;
					}
					cout << "Usted ha excedido su km inicial en: " << newFinalKmAmount << kmString  << endl;
					cout << "Se le cobrará un impuesto de: " << finalTax << currency << endl;
					cout << "El precio total a pagar es: " << newFinalPrice << currency << endl;
					break;
				case 3:
					exit(1);
					break;
			}
		}

}
