#include "cProtesis.h"


cProtesis::cProtesis(string dimensiones_, string material_, string fabricante_)
{
	this->dimensiones = dimensiones_;
	this->material = material_;
	this->fabricante = fabricante_;
}

cProtesis::~cProtesis()
{
}

string cProtesis::getdimensiones(string dimensiones)
{
	return this->dimensiones;
}

string cProtesis::getmaterial(string material)
{
	return this-> material;
}

string cProtesis::getfabricante(string fabricante)
{
	return this->fabricante;
}

unsigned int cProtesis::getcodigo(unsigned int codigo)
{
	return this->codigo;
}

void cProtesis::setfechafabricacion()
{
}

void cProtesis::imprimirprotesis()
{
}
