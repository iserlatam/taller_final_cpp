#include "censo.h"
#include <iostream>
#include <string>
using namespace std;

int edad, estrato, cantPersonas, cantMayores, cantMujeresMayores, cantDiscapacidad;
int cantPersonasEstracto4_6, cantMenoresEstrato1_2, cantMujeresEstrato1_2, cantMujeres;
float promedioMujeresMayores, porcentajeDiscapacitados, totalMujeresMayores;
string discapacidad, sexo;

censo::censo()
{
//	CANTIDAD TOTAL DE PERSONAS QUE SE ENTREVISTARAS
	cout << "Ingrese la cantidad de personas que va a entrevistar: " << endl;
	cin >> cantPersonas;
	
//	ENTREVISTA
	for (int i = 0; i < cantPersonas; i++)
	{
//		DETERMINAR CANTIDAD DE PERSONAS MAYORES
		cout << "Edad de la persona: " << i+1 << endl;
		cin.get();
		cin >> edad;
		
//		DETERMINAR HOMBRES Y MUJERES MAYORES DE EDAD CENSADOS
		if (edad >= 18)
		{
			cantMayores++;
		}
		
//		DETERMINAR ESTRACTO
		cout << "Estrato de la persona: " << i+1 << endl;
		cin.get();
		cin >> estrato;
				
//		CANTIDAD PERSONAS ESTRACTO > 4
		if (estrato > 4)
		{
			cantPersonasEstracto4_6++;
		}
				
//		CANTIDAD MENORES DE EDAD 1 Y 2
		if (edad < 18)
		{
			if (estrato == 1 || estrato == 2)
			{
				cantMenoresEstrato1_2++;
			}
		}

		
//		DETERMINAR INCAPACIDAD
		cout << "Cuenta con alguna discapacidad la persona: (S,N) " << i+1  << endl;
		cin.get();
		cin >> discapacidad;
				
//		CANTIDAD DISCAPACIDAD
		if (discapacidad == "S" || discapacidad == "s")
		{
			cantDiscapacidad++;
		}
		
//		DETERMINAR SEXO
		cout << "Sexo de la persona: " << i+1 << endl;
		cin.get();
		cin >> sexo;
		
//		CANTIDAD DE MUJERES, CANT MUJERES ESTRATO 1 Y 2
		
		if (sexo == "f" || sexo == "F")
		{
			cantMujeres++;
			
			if (edad >= 18)
			{
				totalMujeresMayores = totalMujeresMayores + edad;
				
				if (estrato == 1 || estrato == 2)
				{
					cantMujeresEstrato1_2++;
				}
				
			}
		}
	
	}
		
		
//		PROMEDIO DE EDADES DE MUJERES ENCUESTADAS
	promedioMujeresMayores = totalMujeresMayores / cantMujeres;
	porcentajeDiscapacitados = cantDiscapacidad * 100 / cantPersonas;
	
	cout << "Resultados:" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "Cantidad de personal total:\t" << cantPersonas << endl;
	cout << "Promedio de edades de las mujeres mayores encuestadas:\t" << promedioMujeresMayores << endl;
	cout << "Mujeres mayores de edad de estratos 1 y 2:\t" << cantMujeresEstrato1_2 << endl;
	cout << "Porcentaje de personas encuestadas con alguna discapacidad:\t" << porcentajeDiscapacitados << "%" << endl;
	cout << "Cantidad de menores de edad de estratos 1 y 2:\t" << cantMenoresEstrato1_2 << endl;
	cout << "Porcentaje de personas encuestadas de estratos 4 en adelante:\t" << cantPersonasEstracto4_6 << endl;
}



















