/*
 * heapsort.hpp
 *
 *  Created on: 15 abr. 2018
 *      Author: mad18
 */

#pragma once

//#include <algorithm> //swap

#include "ordenacion.hpp"
#include "../DNI.hpp"

template <class Clave>
class HeapSort: public Ordenacion<Clave>{

public:
	HeapSort(){}
    ~HeapSort(){}

    int left(int i);
    int right(int i);
    void BuildMaxHeap(Vector<Clave>& X, int n);

    int heapify(Vector<Clave>& X, int i, int n, int p);
    unsigned int metodord(Vector<Clave>& X, unsigned int nCeldas, int p);
};
