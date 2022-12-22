/* 
DESCRIPCION DEL REQUERIMIENTO
----------------------------------------------
Una empresa que se dedica al alquiler de veh�culos cobra un monto fijo de 
$250.000 para los primeros 300 km de recorrido. Para m�s de 300 km y hasta 1000 
km, cobra un monto adicional de $ 20.000 por cada kil�metro que exceda los 300. 
Para m�s de 1000 km cobra un monto adicional de $ 10.000 por cada kil�metro en 
exceso sobre 1000. Los precios ya incluyen el 20% del IVA. Dise�e un algoritmo que 
determine el monto a pagar por el alquiler de un veh�culo y el monto incluido del 
impuesto
---------------------------------------------
COMENTARIO PERSONAL
Cada ejercicio le he puesto mucho m�s dinamismo para salirme de lo com�n y lo convencional de la actividad.
La raz�n por lo que lo he entregado tarde es por el an�lisis y estudio previo que elabor� para cada ejercicio
Y su respectiva representaci�n mediante este maravilloso lenguaje que ya estoy dominando poco a poco.
---------------------------------------------
DESARROLLADO POR
Jeison Hernandez Ga�an
TDIAM 44
10/12/2022
SENA
Regional valle
Centro de Dise�o Tecnol�gico Industrial
---------------------------------------------
COMENTARIO INNECESARIAMENTE NECESARIO
Felices fiestas instructor :D
 */

#include <iostream>
#include <string>
#include "rentaCoche.h"
#include "magnitudes.h"
#include "membresia.h"
#include "censo.h"
using namespace std;
int optMenu;

int main(int argc, char** argv) {

	cout << "Bienvenido a su asistente de confianza, mi nombre es Stein!" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Estoy programado con 4 funciones diferentes. Seleccione de las opciones medianta el n�mero: (1,2,3,4)" << endl;
	cout << "1. Rentar un coche\n2. Conversion de magnitudes\n3. Facturaci�n de productos\n4. Censo" << endl;

	cin >> optMenu;
	
	if(optMenu == 1)
	{
		//	EJERCICIO 1: RENTA COCHE
		system("cls");
		rentaCoche rentaCoche;
	}
	
	if (optMenu == 2)
	{
		//	EJERCICIO 2: CONVERSION DE UNIDADES
		system("cls");
		magnitudes magnitudes;
	}
	
	if (optMenu == 3)
	{
		//	EJERCICIO 3: CAJERO
		system("cls");
		membresia membresia;
	}
	
	if (optMenu == 4)
	{
		//	EJERCICIO 4: CENSO
		system("cls");
		censo censo;
	}	
	
	return 0;
}
