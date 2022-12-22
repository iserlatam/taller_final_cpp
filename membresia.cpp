#include "membresia.h"
#include <iostream>
#include <string>
using namespace std;
string typeMembership;
int cant, cantProduct, priceProduct, newPriceProduct, totalBase, descFinal, totalFinal;

membresia::membresia()
{
	cout << "Ingrese cuantos productos va a facturar:\t" << endl;
	cin >> cant;
	
//	FACTURACION TOTAL
	for (int i=0; i < cant; i++)
	{
		cout << "Ingrese el precio del producto numero:\t" << i+1 << endl;
		cin.get();
		cin >> priceProduct;
		
		cout << "Ingrese la cantidad total del producto numero:\t" << i+1 << endl;
		cin.get();
		cin >> cantProduct;
		
		newPriceProduct = priceProduct * cantProduct;
		
		cout << "Total del producto numero:\t" << i+1 << ":    " <<newPriceProduct << endl;
		
		totalBase = totalBase + newPriceProduct;
		
		cout << "Total hasta el momento:\t" << totalBase << "\n-----------------------------------" <<endl;
		
	}
	
//	MEMBRESIA
	cout << "Ingrese la membresia del cliente (A,B,C):" << endl;

	cin >> typeMembership;
	
	if (typeMembership == "A" || typeMembership == "a")
	{
		if (totalBase > 2000)
		{
			descFinal = (totalBase * 20) / 100;
			
			totalFinal = totalBase - descFinal;
			
			cout << "¡Felicidades! Se ha aplicado un 20% de descuento al total de su compra" << endl;
			
			cout << "Total anterior:\t" << totalBase << endl;
			cout << "Total con descuento:\t" << totalFinal << endl;
		}
		else if (totalBase > 1000 && totalBase < 2000)
		{
			descFinal = (totalBase * 10) / 100;
			
			totalFinal = totalBase - descFinal;
			
			cout << "¡Felicidades! Se ha aplicado un 10% de descuento al total de su compra" << endl;
			
			cout << "Total anterior:\t" << totalBase << endl;
			cout << "Total con descuento:\t" << totalFinal << endl;
		}
		else if (totalBase < 1000)
		{
			descFinal = (totalBase * 5) / 100;
			
			totalFinal = totalBase - descFinal;
			
			cout << "¡Felicidades! Se ha aplicado un 5% de descuento al total de su compra" << endl;
			
			cout << "Total anterior:\t" << totalBase << endl;
			cout << "Total con descuento:\t" << totalFinal << endl;
		}
		
	} 
	else if (typeMembership == "B" || typeMembership == "b")
	{
		if (totalBase > 1000 && totalBase < 2000)
		{
			descFinal = (totalBase * 10) / 100;
			
			totalFinal = totalBase - descFinal;
			
			cout << "¡Felicidades! Se ha aplicado un 10% de descuento al total de su compra" << endl;
			
			cout << "Total anterior:\t" << totalBase << endl;
			cout << "Total con descuento:\t" << totalFinal << endl;
		}
		else if (totalBase < 1000)
		{
			descFinal = (totalBase * 5) / 100;
			
			totalFinal = totalBase - descFinal;
			
			cout << "¡Felicidades! Se ha aplicado un 5% de descuento al total de su compra" << endl;
			
			cout << "Total anterior:\t" << totalBase << endl;
			cout << "Total con descuento:\t" << totalFinal << endl;
		} 
		else
		{
			cout << "No se ha aplicado descuento al total de su compra" << endl;
			
			cout << "Total anterior:\t" << totalBase << endl;
			cout << "Total con descuento:\t" << totalBase << endl;
		}
		
	} 
	else if (typeMembership == "C" || typeMembership == "c") 
	{
		
		if (totalBase > 1000 && totalBase < 2000)
		{
			descFinal = (totalBase * 10) / 100;
			
			totalFinal = totalBase - descFinal;
			
			cout << "¡Felicidades! Se ha aplicado un 10% de descuento al total de su compra" << endl;
			
			cout << "Total anterior:\t" << totalBase << endl;
			cout << "Total con descuento:\t" << totalFinal << endl;
		}
		else if (totalBase < 1000)
		{
			descFinal = (totalBase * 5) / 100;
			
			totalFinal = totalBase - descFinal;
			
			cout << "¡Felicidades! Se ha aplicado un 5% de descuento al total de su compra" << endl;
			
			cout << "Total anterior:\t" << totalBase << endl;
			cout << "Total con descuento:\t" << totalFinal << endl;
		} 
		else
		{
			cout << "No se ha aplicado descuento al total de su compra" << endl;
			
			cout << "Total anterior:\t" << totalBase << endl;
			cout << "Total con descuento:\t" << totalBase << endl;
		}
		
	} 
	else
	{
		cout << "Ha ingresado una membresia incorrecta!";
		exit(1);
	}
	
}
