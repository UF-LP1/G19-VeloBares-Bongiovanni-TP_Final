#pragma once
#include "cFabricante.h"
#include <string>
using namespace std;

class cOrtopedia
{
public:
	//friend class cMedico;//asi se si tiene stock!
	cOrtopedia(string nombreortopedia_, string direccionortopedia_, unsigned int  cantidadstock_);
	~cOrtopedia();
	unsigned int getstock();
	string getnombreortopedia();
	void setdireccionortopedia(string direccionortopedia1);
    string To_stringortopedia();

private:
	unsigned int cantidadstock;
	string nombreortopedia;
	string direccionortopedia;

};

ostream& operator<<(ostream& out, cOrtopedia& ortopedia);
