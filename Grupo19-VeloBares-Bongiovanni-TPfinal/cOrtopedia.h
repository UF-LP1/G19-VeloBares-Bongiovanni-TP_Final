#pragma once
#include <string>
using namespace std;

class cOrtopedia
{
private:
	unsigned int cantidadstock;
	string nombreortopedia;
	string direccionortopedia;
	//vector protesis

public:
	cOrtopedia(unsigned int cantidadstock_, string nombreortopedia_, string direccionortopedia_);
	~cOrtopedia();
	unsigned int getstock(unsigned int  cantidadstock);
	string getnombreortopedia(string nombreortopedia);
	//getlisapr
	void setdireccionortopedia(string direccionortopedia);
	void llamarfabricante();
	void buscarpaciente();
	void buscarprotesis();
	void imprimirortopedia();
	string to_string;


};

