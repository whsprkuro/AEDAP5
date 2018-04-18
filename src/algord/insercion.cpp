/*
 * ordenacion.cpp
 *
 *  Created on: 14 abr. 2018
 *      Author: mad18
 */

#include "insercion.hpp"

template <class Clave>
unsigned int Insercion<Clave>::metodord(Vector<Clave>& X, unsigned int nCeldas, int p){
	unsigned int comp = 0;

	for(unsigned int i = 1; i < nCeldas; i++){
		for(unsigned int j = i; j > 0; j--){
			if(((unsigned long)X.get_clave(j)) < ((unsigned long)X.get_clave(j - 1))){
				comp++;
				Clave aux = X.get_clave(j);
				X.set_clave(X.get_clave(j - 1), j);
				X.set_clave(aux, j - 1);
				aux.destroy();

				if(p == 1)
					X.ImprimirOrd(i, j, comp);
			}
		}
	}
	X.compare(comp);
	return comp;
}

template class Insercion<class DNI>;
