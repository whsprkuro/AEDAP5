/*
 * ordenacion.hpp
 *
 *  Created on: 14 abr. 2018
 *      Author: mad18
 */

#pragma once

#include <iostream>

template <class Clave>
class Vector;
#include "../vector.hpp"

template <class Clave>
class Ordenacion{

public:
	Ordenacion(){}
    virtual ~Ordenacion(){}

    virtual unsigned int metodord(Vector<Clave>& X, unsigned int nCeldas, int p) = 0;

/*    void comparacion(int comp){
    	int acu = 0, min = 9999, max = 0;

    	acu = acu + comp;

    	if(comp < min)
    		min = comp;

    	if(comp > max)
    		max = comp;
    }*/
};

template class Ordenacion<class DNI>;
