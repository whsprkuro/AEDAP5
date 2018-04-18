/*
 * shellsort.hpp
 *
 *  Created on: 16 abr. 2018
 *      Author: mad18
 */

#pragma once

#include "ordenacion.hpp"
#include "../DNI.hpp"

template <class Clave>
class ShellSort: public Ordenacion<Clave>{

public:
	ShellSort(){}
    ~ShellSort(){}

    unsigned int metodord(Vector<Clave>& X, unsigned int nCeldas, int p);
};
