/*
 * celda.hpp
 *
 *  Created on: 13 abr. 2018
 *      Author: mad18
 */

#pragma once

#include <iostream>
#include <cassert>

#include "DNI.hpp"

template <class Clave>
class Ordenacion;
#include "algord/ordenacion.hpp"

template <class Clave>
class Insercion;
#include "algord/insercion.hpp"

template <class Clave>
class Intercambio;
#include "algord/intercambio.hpp"

template <class Clave>
class HeapSort;
#include "algord/heapsort.hpp"

template <class Clave>
class QuickSort;
#include "algord/quicksort.hpp"

template <class Clave>
class ShellSort;
#include "algord/shellsort.hpp"

template <class Clave>
class MergeSort;
#include "extra/mergesort.hpp"

template <class Clave>
class RadixSort;
#include "extra/radixsort.hpp"

template <class Clave>

class Vector{

private:

	unsigned int nClaves;
	Clave* contenido;
	unsigned int current_index;
	Ordenacion<Clave>* orden;
	unsigned int nPruebas;

public:

	Vector();
	Vector(int sz, unsigned int nPruebas);
	Vector(int sz, int metodord, unsigned int nPruebas);
	~Vector();

	int est_insert();
	int est_bubble();
	int est_heap();
	int est_quick();
	int est_shell();
	int est_merge();

	bool Insertar(Clave X);
	void Mostrarc();
	int ordena(int p);
	void compare(int cont);
	void ImprimirOrd(unsigned int i, unsigned int j, unsigned int cont);

	bool estaLlena();
	unsigned int get_numclaves();
	Clave get_clave(unsigned int i);
	void set_clave(Clave X, unsigned int index);

};
