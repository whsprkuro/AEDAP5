/*
 * radixsort.hpp
 *
 *  Created on: 18 abr. 2018
 *      Author: mad18
 */

#pragma once

#include "../algord/ordenacion.hpp"
#include "../DNI.hpp"

template <class Clave>
class RadixSort: public Ordenacion<Clave>{

public:
	RadixSort(){}
    ~RadixSort(){}

    Clave getMax(Vector<Clave>& X, int n);
    void countSort(Vector<Clave>& X, int n, int exp);
    unsigned int metodord(Vector<Clave>& X, unsigned int nCeldas, int p);
};
