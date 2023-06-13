#pragma once
#include "cFabricante.h"
#include <string>
using namespace std;
#ifndef _CORTOPEDIAA_H
#define _CORTOPEDIA_H*

class cOrtopedia
{
public:
	friend class cMedico;//asi se si tiene stock!
	cOrtopedia(string nombreortopedia_, string direccionortopedia_);
	~cOrtopedia();
	unsigned int getstock();
	string getnombreortopedia();
	void setdireccionortopedia(string direccionortopedia);
    string To_stringortopedia();

private:
	static unsigned int cantidadstock;
	string nombreortopedia;
	string direccionortopedia;

};

ostream& operator<<(ostream& out, cOrtopedia& ortopedia);
#endif