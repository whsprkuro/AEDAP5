/*
 * DNI.hpp
 *
 *  Created on: 11 abr. 2018
 *      Author: mad18
 */

#pragma once

#include <sstream>
#include <iostream>
//#include <string>
#include <string.h>		//strcpy
#include <stdlib.h>     //srand, rand, strtoul

using namespace std;

class DNI{

private:

	string numdni;

public:

	DNI();
	DNI(string s);
	~DNI();
	void destroy();

	bool operator ==(DNI &d);
	bool operator !=(DNI &d);
	bool operator <(DNI &d);
	bool operator >(DNI &d);
	bool operator <=(DNI &d);
	bool operator >=(DNI &d);

	operator unsigned long();
	operator char*();

	string get_numDNI();
	void set_numDNI(string d);
	void mostrar();
};
