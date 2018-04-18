/*
 * insercion.hpp
 *
 *  Created on: 14 abr. 2018
 *      Author: mad18
 */

#pragma once

#include <limits.h>

#include "ordenacion.hpp"
#include "../DNI.hpp"

template <class Clave>
class Insercion: public Ordenacion<Clave>{

public:
	Insercion(){}
    ~Insercion(){}

    unsigned int metodord(Vector<Clave>& X, unsigned int nCeldas, int p);
};
