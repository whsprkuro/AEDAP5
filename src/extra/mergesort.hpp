/*
 * mergesort.hpp
 *
 *  Created on: 17 abr. 2018
 *      Author: mad18
 */

#pragma once

#include "../algord/ordenacion.hpp"
#include "../DNI.hpp"

template <class Clave>
class MergeSort: public Ordenacion<Clave>{

public:
	MergeSort(){}
    ~MergeSort(){}

    void doMerge(Vector<Clave>& X, int inicio, int fin, int p);
    void mezcla(Vector<Clave>& X, int inicio, int centro, int fin, int p);
    unsigned int metodord(Vector<Clave>& X, unsigned int nCeldas, int p);
};
