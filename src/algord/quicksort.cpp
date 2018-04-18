/*
 * quicksort.cpp
 *
 *  Created on: 15 abr. 2018
 *      Author: mad18
 */

#include "quicksort.hpp"

template <class Clave>
int QuickSort<Clave>::partition(Vector<Clave>& X, int izq, int dch, int p){
	Clave pivot = X.get_clave(dch); //((izq+dch)/2)
	int i = (izq - 1);
	int comp = 0;

	for(int j = izq; j <= dch - 1; j++){
		comp++;
		if((unsigned long)X.get_clave(j) <= pivot){
			comp++;
			i++;
			Clave tmp = X.get_clave(i);
			X.set_clave(X.get_clave(j), i);
			X.set_clave(tmp, j);
			tmp.destroy();

			if(p == 1)
				X.ImprimirOrd(i, j, comp);
		}
	}
	Clave tmp = X.get_clave(i + 1);
	X.set_clave(X.get_clave(dch), i + 1);
	X.set_clave(tmp, dch);
	tmp.destroy();

	if(p == 1)
		X.ImprimirOrd(i + 1, dch, comp);

	setcomp(comp);

	return (i + 1);
}

template <class Clave>
void QuickSort<Clave>::setcomp(unsigned int cont){
	contador = cont;
}

template <class Clave>
int QuickSort<Clave>::getcomp(){
	return contador;
}

template <class Clave>
int QuickSort<Clave>::qs(Vector<Clave>& X, int izq, int dch, int p){

	int comp = 0, cont = 0; //valor que almacena número de comparaciones

	if(izq < dch){
		int pivot = partition(X, izq, dch, p);
		comp = getcomp();
		cont += comp;

		qs(X, izq, pivot - 1, p); // Ordeno la lista de los menores
		qs(X, pivot + 1, dch, p); // Ordeno la lista de los mayores
	}
	X.compare(cont);
	return cont;
}

template <class Clave>
unsigned int QuickSort<Clave>::metodord(Vector<Clave>& X, unsigned int nCeldas, int p){
	int cont = qs(X, 0, nCeldas-1, p);
	return cont;
}

template class QuickSort<class DNI>;
