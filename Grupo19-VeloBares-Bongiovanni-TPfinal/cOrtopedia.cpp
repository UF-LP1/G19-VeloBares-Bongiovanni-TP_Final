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

unsigned int cOrtopedia::getstock()
{
	return this->cantidadstock;
}

string cOrtopedia::getnombreortopedia()
{
	return this->nombreortopedia;
}

bool cOrtopedia::buscar(unsigned int codigo)
{
	return false;
}

void cOrtopedia::setdireccionortopedia(string direccionortopedia)
{
	return;
}

void cOrtopedia::llamarfabricante()
{
	return;
}

void cOrtopedia::buscarpaciente()
{
	return;
}

void cOrtopedia::buscarprotesis()
{
	return;
}

void cOrtopedia::imprimirortopedia()
{
	return;
}

string cOrtopedia::to_string()
{
	return string();
}
