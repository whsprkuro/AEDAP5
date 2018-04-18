/*
 * intercambio.cpp
 *
 *  Created on: 15 abr. 2018
 *      Author: mad18
 */

#include "intercambio.hpp"

template <class Clave>
unsigned int Intercambio<Clave>::metodord(Vector<Clave>& X, unsigned int nCeldas, int p){
	unsigned int comp = 0;

	for(unsigned int i = 0; i < nCeldas; i++){
		comp++;
		for(unsigned int j = (i + 1); j < nCeldas; j++){
			comp++;
			if((unsigned long)X.get_clave(j) < (unsigned long)X.get_clave(i)){
				comp++;
				Clave buff = X.get_clave(i);
				X.set_clave(X.get_clave(j), i);
				X.set_clave(buff, j);
				buff.destroy();

				if(p == 1)
					X.ImprimirOrd(i, j, comp);
			}
		}
	}
	X.compare(comp);
	return comp;
}

template class Intercambio<class DNI>;
