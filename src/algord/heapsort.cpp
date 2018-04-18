/*
 * heapsort.cpp
 *
 *  Created on: 15 abr. 2018
 *      Author: mad18
 */

#include "heapsort.hpp"

template <class Clave>
int HeapSort<Clave>::heapify(Vector<Clave>& X, int i, int n, int p){
	int comp = 0;
	int largest = i;
	int l = 2*i + 1;
	int r = 2*i + 2;

	if((l <= n) && ((unsigned long)X.get_clave(l) > (unsigned long)X.get_clave(largest))){
		comp++;
		largest = l;
	}

	if((r < n) && ((unsigned long)X.get_clave(r) > (unsigned long)X.get_clave(largest))){
		comp++;
		largest = r;
	}

	if(largest != i){
		Clave temp = X.get_clave(i);
		X.set_clave(X.get_clave(largest), i);
		X.set_clave(temp, largest);

		if(p == 1)
			X.ImprimirOrd(i, largest, comp);

		heapify(X, largest, n, p);
	}
	return comp;
}

template <class Clave>
unsigned int HeapSort<Clave>::metodord(Vector<Clave>& X, unsigned int nCeldas, int p){
	int comp = 0;

	for(int i = nCeldas / 2 - 1; i >= 0; i--)
		heapify(X, i, nCeldas, p);

	for(int i = nCeldas-1; i >= 0; i--){
		comp++;
		Clave temp = X.get_clave(0);
		X.set_clave(X.get_clave(i), 0);
		X.set_clave(temp, i);

		heapify(X, 0, i, p);
	}
	X.compare(comp);
	return comp;
}

template class HeapSort<class DNI>;
