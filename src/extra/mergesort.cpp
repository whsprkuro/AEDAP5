/*
 * mergesort.cpp
 *
 *  Created on: 17 abr. 2018
 *      Author: mad18
 */

#include "mergesort.hpp"

template <class Clave>
void MergeSort<Clave>::doMerge(Vector<Clave>& X, int inicio, int fin, int p){
    if(inicio < fin){
        int centro = (inicio + fin)/2;

        doMerge(X, inicio, centro, p);
        doMerge(X, centro + 1, fin, p);
        mezcla(X, inicio, centro, fin, p); //esto va dividiendo el vector a la mitad
    }
}

template <class Clave>
void MergeSort<Clave>::mezcla(Vector<Clave>& X, int inicio, int centro, int fin, int p){

	unsigned int comp = 0;
    int i = inicio;
    int j = centro + 1;
    int k = inicio;
    Vector<Clave> aux(X);

    while((i <= centro) && (j <= fin)){
        comp++;
        if((unsigned long)X.get_clave(i) < (unsigned long)X.get_clave(j)){
            aux.set_clave(X.get_clave(i), k);
            i++;
        }
        else{
            aux.set_clave(X.get_clave(j), k);
            j++;
        }
        k++;
        if(p == 1)
        	X.ImprimirOrd(i, j, comp);
    }

    if(i > centro){
        while(j <= fin){
            aux.set_clave(X.get_clave(j), k);
            j++;
            k++;
        }
        if(p == 1)
        	X.ImprimirOrd(i, j, comp);
    }
    else{
        while(i <= centro){
            aux.set_clave(X.get_clave(i), k);
            i++;
            k++;
        }
        if(p == 1)
        	X.ImprimirOrd(i, j, comp);
    }

    for(int k = inicio; k <= fin; k++){
        X.set_clave(aux.get_clave(k), k);

        if(p == 1)
        	X.ImprimirOrd(i, j, comp);
    }
}

template <class Clave>
unsigned int MergeSort<Clave>::metodord(Vector<Clave>& X, unsigned int nCeldas, int p){
	unsigned int comp = 0;

	doMerge(X, 0, nCeldas-1, p);

	return comp;
}

template class MergeSort<class DNI>;
