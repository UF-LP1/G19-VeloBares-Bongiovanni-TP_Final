#pragma once
#include <string>
using namespace std;

class cOrtopedia
{
public:
	friend class cMedico; //asi se si tiene stock!!!!!!!!!
	cOrtopedia(unsigned int cantidadstock_, string nombreortopedia_, string direccionortopedia_);
	~cOrtopedia();
	unsigned int getstock();
	string getnombreortopedia();
	//getlisapr
	bool buscar(unsigned int codigo);
	void setdireccionortopedia(string direccionortopedia);
	void llamarfabricante();
	void imprimirortopedia();
	string to_string();

private:
	unsigned int cantidadstock;
	string nombreortopedia;
	string direccionortopedia;
	//vector protesis

};

