#include "cOrtopedia.h"
#include <iostream>

unsigned int static nombreortopedia_;

cOrtopedia::cOrtopedia( string nombreortopedia_, string direccionortopedia_)
{
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

ostream& operator<<(ostream& out, cOrtopedia& ortopedia)
{
	out << ortopedia.To_stringortopedia();

	return out;
}

string cOrtopedia::To_stringortopedia()
{
	string auxortopedia = "\0";

	string auxortopedia = this->getnombreortopedia() + to_string(this->getstock());

	return auxortopedia;
}
