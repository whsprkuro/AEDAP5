/*
 * celda.cpp
 *
 *  Created on: 13 abr. 2018
 *      Author: mad18
 */

#include "vector.hpp"

using namespace std;

template <class Clave>
Vector<Clave>::Vector():
	nClaves(0), contenido(NULL), current_index(0), orden(NULL), nPruebas(0){}

template <class Clave>
Vector<Clave>::Vector(int sz, unsigned int nP):
	nClaves(sz), contenido(new Clave[sz]), current_index(0), orden(NULL), nPruebas(nP){}

template <class Clave>
Vector<Clave>::Vector(int sz, int metodord, unsigned int nP):
	nClaves(sz), contenido(new Clave[sz]), current_index(0), orden(NULL), nPruebas(nP){

	switch(metodord){
	case 1:
		orden = new Insercion<Clave>();
		break;
	case 2:
		orden = new Intercambio<Clave>();
		break;
	case 3:
		orden = new HeapSort<Clave>();
		break;
	case 4:
		orden = new QuickSort<Clave>();
		break;
	case 5:
		orden = new ShellSort<Clave>();
		break;
	case 6:
		orden = new MergeSort<Clave>();
		break;
	default:
		cout << "Fin del Programa";
		break;
	}
}

template <class Clave>
Vector<Clave>::~Vector(){}

template <class Clave>
int Vector<Clave>::est_insert(){
	int a = 0;

	orden = new Insercion<Clave>();
	a = ordena(0);

	return a;
}

template <class Clave>
int Vector<Clave>::est_bubble(){
	int a = 0;

	orden = new Intercambio<Clave>();
	a = ordena(0);

	return a;
}

template <class Clave>
int Vector<Clave>::est_heap(){
	int a = 0;

	orden = new HeapSort<Clave>();
	a = ordena(0);

	return a;
}

template <class Clave>
int Vector<Clave>::est_quick(){
	int a = 0;

	orden = new QuickSort<Clave>();
	a = ordena(0);

	return a;
}

template <class Clave>
int Vector<Clave>::est_shell(){
	int a = 0;

	orden = new ShellSort<Clave>();
	a = ordena(0);

	return a;
}

template <class Clave>
int Vector<Clave>::est_merge(){
	int a = 0;

	orden = new MergeSort<Clave>();
	a = ordena(0);

	return a;
}

template <class Clave>
bool Vector<Clave>::Insertar(Clave X){
	if(estaLlena()){
		return false;
	}
	else{
		contenido[current_index] = X;
		current_index++;
		return true;
	}
}

template <class Clave>
void Vector<Clave>::Mostrarc(){
	cout << "|";
	for (unsigned int i = 0; i < current_index; ++i){
		unsigned long a = contenido[i];
		cout << a << "|";
	}
	cout << endl << endl;
}

template <class Clave>
int Vector<Clave>::ordena(int p){
	unsigned int cont = orden->metodord(*this, nClaves, p);
	unsigned int q = 0;

	if(p != 1)
		q = cont;

	return q;
}

template <class Clave>
void Vector<Clave>::compare(int cont){
	int min = 99999, acu = 0, max = 0;

	if(cont < min)
		min = cont;
	if(cont > max)
		max = cont;
	acu += cont;

//	cout << "Max = " << max << " , med = " << acu/nPruebas << " , min = " << min << " , total = " << acu << endl << endl;
}

template <class Clave>
void Vector<Clave>::ImprimirOrd(unsigned int i, unsigned int j, unsigned int cont){
	cout << "|";

	for(unsigned int k = 0; k < nClaves; k++){
		unsigned long a = contenido[k];

		if(i == k){
			cout << " " << a << " ";
		}else if(j == k){
			cout << " " << a << " ";
		}else
			cout << " " << a << " ";
	} unsigned long b = contenido[j], c = contenido[j-1];
	cout << "|" <<  "  " << cont << "  Intercambio: " << b << " y " << c << endl;
}

template <class Clave>
bool Vector<Clave>::estaLlena(){
	return current_index >= nClaves;
}

template <class Clave>
unsigned int Vector<Clave>::get_numclaves(){
	return nClaves;
}

template <class Clave>
Clave Vector<Clave>::get_clave(unsigned int i){
	assert(i <= nClaves);
	return contenido[i];
}

template <class Clave>
void Vector<Clave>::set_clave(Clave X, unsigned int index){
	assert(index <= nClaves);
	contenido[index] = X;
}

template class Vector<class DNI>;
