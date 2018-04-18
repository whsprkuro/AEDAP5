/*
 * intercambio.hpp
 *
 *  Created on: 15 abr. 2018
 *      Author: mad18
 */

#pragma once

#include "ordenacion.hpp"
#include "../DNI.hpp"

template <class Clave>
class Intercambio: public Ordenacion<Clave>{

public:
	Intercambio(){}
    ~Intercambio(){}

    unsigned int metodord(Vector<Clave>& X, unsigned int nCeldas, int p);
};
