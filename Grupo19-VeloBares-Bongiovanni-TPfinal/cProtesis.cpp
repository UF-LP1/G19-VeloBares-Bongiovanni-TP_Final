#include "cProtesis.h"

cProtesis::cProtesis(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_)
{
	this->dimensiones = dimensiones_;
	this->material = material_;
	this->fabricante = fabricante_;
	this-> fechadefabricacion =  fechadefabricacion_;
	this->codigo = codigo_;
}

cProtesis::~cProtesis()
{
}

string cProtesis::getdimensiones()
{
	return this->dimensiones;
}

string cProtesis::getmaterial()
{
	return this-> material;
}

string cProtesis::getfabricante()
{
	return this->fabricante;
}

unsigned int cProtesis::getcodigo()
{
	return this->codigo;
}

void cProtesis::setfechafabricacion(time_t fechadefabricacion)
{
	return;
}

void cProtesis::imprimirprotesis()
{
	cout << this->getdimensiones () << endl;
	cout << this->getmaterial () << endl;
	cout << this->getfabricante() << endl;
	cout << this->getcodigo() << endl;
	
	return;
}

string cProtesis::To_stringprotesis()
{
	string auxprotesis = "\0";

	string auxprotesis = this->getdimensiones() + this->getmaterial() + this->getfabricante() + to_string(this->getcodigo());

	return auxprotesis;
}
