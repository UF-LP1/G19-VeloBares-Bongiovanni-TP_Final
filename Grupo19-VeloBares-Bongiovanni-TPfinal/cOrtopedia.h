#pragma once
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
	bool buscar(unsigned int codigo);
	void setdireccionortopedia(string direccionortopedia);
	void llamarfabricante();
	string To_stringortopedia();

private:
	static unsigned int cantidadstock;
	string nombreortopedia;
	string direccionortopedia;
	//vector <cProtesis> vectorpr; noseee estaba comentada 

};

ostream& operator<<(ostream& out, cOrtopedia& ortopedia);
#endif