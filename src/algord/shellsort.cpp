/*
 * shellsort.cpp
 *
 *  Created on: 16 abr. 2018
 *      Author: mad18
 */

#include "shellsort.hpp"

template <class Clave>
unsigned int ShellSort<Clave>::metodord(Vector<Clave>& X, unsigned int nCeldas, int p){
	unsigned int comp = 0;
//	float alpha;
	float alpha = 0.6;

//	cout << "Defina un valor para Alfa entre 0 y 1: " << endl;
//	cin >> alpha;
//	cout << endl;

	for(int gap = (alpha*nCeldas/2); gap > 0; gap /= 2){
		for(unsigned int i = gap; i < nCeldas; i += 1){
			comp++;
			Clave tmp = X.get_clave(i);
			int j;

			for(j = i; (j >= gap) && ((unsigned long)X.get_clave(j - gap) > tmp); j -= gap){
				comp++;
				X.set_clave(X.get_clave(j - gap), j);
			}
			X.set_clave(tmp, j);
			tmp.destroy();

			if(p == 1)
				X.ImprimirOrd(i, j, comp);
		}
	}
	X.compare(comp);
	return comp;
}

template class ShellSort<class DNI>;
