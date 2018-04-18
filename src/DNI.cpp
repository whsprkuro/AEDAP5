/*
 * DNI.cpp
 *
 *  Created on: 11 abr. 2018
 *      Author: mad18
 */

#include "DNI.hpp"

using namespace std;

DNI::DNI(){ //valor aleatorio entre 0 y 99999999
	numdni = "";

	for (int i = 0; i < 8; ++i){ //coge cada número del DNI y le da un valor aleatorio entre 0 y 9
		int n = rand() % 10;

		ostringstream convert;
		convert << n;
		numdni += convert.str();
	}
}

DNI::DNI(string s){
	numdni = "";

	char *arr = new char[s.length() + 1];
	copy(s.begin(), s.end(), arr);
	arr[s.size()] = '\0';
	numdni = arr;
}

DNI::~DNI(){
	destroy();
}

void DNI::destroy(){
	numdni.erase(numdni.begin(), numdni.end());
}

bool DNI::operator ==(DNI &d){
	return numdni.compare(d.get_numDNI()) == 0;
}

bool DNI::operator !=(DNI &d){
	return numdni.compare(d.get_numDNI()) != 0;
}

bool DNI::operator <(DNI &d){
	return numdni.compare(d.get_numDNI()) < 0;
}

bool DNI::operator >(DNI &d){
	return numdni.compare(d.get_numDNI()) > 0;
}

bool DNI::operator <=(DNI &d){
	return numdni.compare(d.get_numDNI()) <= 0;
}

bool DNI::operator >=(DNI &d){
	return numdni.compare(d.get_numDNI()) >= 0;
}

DNI::operator unsigned long(){
	return strtoul(numdni.c_str(), NULL, 0);
}
/*
DNI::operator char*(){
	char *arr = new char[numdni.length() + 1];
	strcpy(arr, numdni.c_str());
	return arr;
}
*/
string DNI::get_numDNI(){
	return numdni;
}

void DNI::set_numDNI(string d){
	numdni = d;
}

void DNI::mostrar(){
	cout << numdni;
}
