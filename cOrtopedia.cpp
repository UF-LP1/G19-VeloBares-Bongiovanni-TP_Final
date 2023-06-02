#include "cOrtopedia.h"

cOrtopedia::cOrtopedia(unsigned int cantidadstock_, string nombreortopedia_, string direccionortopedia_)
{
	this->cantidadstock = cantidadstock_;
	this->nombreortopedia = nombreortopedia_;
	this->direccionortopedia = direccionortopedia_;
}



cOrtopedia::~cOrtopedia()
{
}

unsigned int cOrtopedia::getstock(unsigned int cantidadstock)
{
	return this->cantidadstock;
}

string cOrtopedia::getnombreortopedia(string nombreortopedia)
{
	return this->nombreortopedia;
}

void cOrtopedia::setdireccionortopedia(string direccionortopedia)
{
}

void cOrtopedia::llamarfabricante()
{
}

void cOrtopedia::buscarpaciente()
{
}

void cOrtopedia::buscarprotesis()
{
}

void cOrtopedia::imprimirortopedia()
{
}
