/*
 * quicksort.hpp
 *
 *  Created on: 15 abr. 2018
 *      Author: mad18
 */

#pragma once

#include <iostream>

#include "ordenacion.hpp"
#include "../DNI.hpp"

template <class Clave>
class QuickSort: public Ordenacion<Clave>{

unsigned int contador;

public:
	QuickSort():
		contador(0){}

    ~QuickSort(){}

    int partition(Vector<Clave>& X, int izq, int dch, int p);
    void setcomp(unsigned int cont);
    int getcomp();
    int qs(Vector<Clave>& X, int izq, int dch, int p);
    unsigned int metodord(Vector<Clave>& X, unsigned int nCeldas, int p);
};
