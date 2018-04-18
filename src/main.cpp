/*
 * main.cpp
 *
 *  Created on: 11 abr. 2018
 *      Author: mad18
 */

#include <iostream>

#include "DNI.hpp"
#include "vector.hpp"
#include "vector.hpp"

using namespace std;

void demo(){
	cout << endl << "Introducir Tamaño del Vector" << endl;
	int tv;
	cin >> tv;

	cout << endl << "Introducir Algoritmo de Ordenación" << endl << endl;
	cout << "1. InserSort (Inserción)" << endl;
	cout << "2. BubbleSort (Intercambio)" << endl;
	cout << "3. HeapSort" << endl;
	cout << "4. QuickSort" << endl;
	cout << "5. ShellSort (Incrementos Decrecientes)" << endl;
	cout << "Otro: Salir" << endl;
	int ord;
	cin >> ord;

	Vector<DNI> C(tv, ord, 0);

	DNI* dniv = new DNI[tv]; //Generar DNIs
	for(int i = 0; i < tv; i++){
		dniv[i] = DNI();
		C.Insertar(dniv[i]);
	}

//	C.Mostrarc();
//	cout << endl << endl;

	cout << C.ordena(1);
}

void est(){
	cout << endl << "Introducir Tamaño del Vector" << endl;
	int tv;
	cin >> tv;

	cout << endl << "Introducir Número de Pruebas a Realizar" << endl;
	unsigned int nPruebas;
	cin >> nPruebas;
	cout << endl;

	int min1 = 99999, acu1 = 0, max1 = 0, cont1 = 0;
	int min2 = 99999, acu2 = 0, max2 = 0, cont2 = 0;
	int min3 = 99999, acu3 = 0, max3 = 0, cont3 = 0;
	int min4 = 99999, acu4 = 0, max4 = 0, cont4 = 0;
	int min5 = 99999, acu5 = 0, max5 = 0, cont5 = 0;
//	int min6 = 99999, acu6 = 0, max6 = 0, cont6 = 0;

	for(unsigned int i = 0; i < nPruebas; i++){
		Vector<DNI> C(tv, nPruebas);
		DNI* dniv = new DNI[tv];
		for(int i = 0; i < tv; i++){
			dniv[i] = DNI();
			C.Insertar(dniv[i]);
		}
//		C.Mostrarc();

		cont1 = C.est_insert();
		if(cont1 < min1){ min1 = cont1; }
		if(cont1 > max1){ max1 = cont1; }
		acu1 += cont1;

		cont2 = C.est_bubble();
		if(cont2 < min2){ min2 = cont2; }
		if(cont2 > max2){ max2 = cont2; }
		acu2 += cont2;

		cont3 = C.est_heap();
		if(cont3 < min3){ min3 = cont3; }
		if(cont3 > max3){ max3 = cont3; }
		acu3 += cont3;

		cont4 = C.est_quick();
		if(cont4 < min4){ min4 = cont4; }
		if(cont4 > max4){ max4 = cont4; }
		acu4 += cont4;

		cont5 = C.est_shell();
		if(cont5 < min5){ min5 = cont5; }
		if(cont5 > max5){ max5 = cont5; }
		acu5 += cont5;

//		cont5 = C.est_merge();
//		if(cont6 < min6){ min6 = cont6; }
//		if(cont6 > max6){ max6 = cont6; }
//		acu6 += cont6;
	}

	cout << "\t\t\t   Numero de comparaciones" << endl;
	cout << "\t\t\tMaximo\tMedio\tMinimo\tTotal" << endl;
	cout << "<< |InsertSort| >>\t  " << max1 << "  \t " << acu1/nPruebas << "\t  " << min1 << "\t " << acu1 << endl;
	cout << "<< |BubbleSort| >>\t  " << max2 << "  \t " << acu2/nPruebas << "\t  " << min2 << "\t " << acu2 << endl;
	cout << "<<  |HeapSort|  >>\t  " << max3 << "  \t " << acu3/nPruebas << "\t  " << min3 << "\t " << acu3 << endl;
	cout << "<< |Quick_Sort| >>\t  " << max4 << "  \t " << acu4/nPruebas << "\t  " << min4 << "\t " << acu4 << endl;
	cout << "<< |Shell_Sort| >>\t  " << max5 << "  \t " << acu5/nPruebas << "\t  " << min5 << "\t " << acu5 << endl;
//	cout << "<< |Merge_Sort| >>\t  " << max6 << "  \t " << acu6/nPruebas << "\t  " << min6 << "\t " << acu6 << endl;
}

void prueba(){

	int tv = 11;
	int ord = 1;

	Vector<DNI> C(tv, ord, 0);

	DNI* dniv = new DNI[tv]; //Generar DNIs
	for(int i = 0; i < tv; i++){
		dniv[i] = DNI();
		C.Insertar(dniv[i]);
	}

	C.Mostrarc();
	cout << endl << endl;

	cout << C.ordena(1);
}

int main(){

	cout << endl << "Introducir Tipo de Prueba" << endl << endl;
	cout << "1. Demostración" << endl;
	cout << "2. Estadística" << endl;
	int tPrueba;
	cin >> tPrueba;

	if(tPrueba == 1)
		demo();
	else if(tPrueba == 2)
		est();
	else{
		cout << "Opción inválida" << endl;
		main();
	}

	cout << endl << endl;
	main();


//	prueba();
//	est();
	return 0;
}
