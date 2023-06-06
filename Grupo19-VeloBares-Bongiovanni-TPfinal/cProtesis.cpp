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
	return;
}

string cProtesis::to_string()
{
	return string();
}
