#include "cOrtopedia.h"
#include <iostream>

unsigned int cOrtopedia ::cantidadstock = 0;
cOrtopedia::cOrtopedia( string nombreortopedia_, string direccionortopedia_)
{
	this->nombreortopedia = nombreortopedia_;
	this->direccionortopedia = direccionortopedia_;
	++cantidadstock;
}

cOrtopedia::~cOrtopedia()
{
	--cantidadstock;
}
 
unsigned int cOrtopedia::getstock()
{
	return this->cantidadstock;
}

string cOrtopedia::getnombreortopedia()
{
	return this->nombreortopedia;
}

void cOrtopedia::setdireccionortopedia(string direccionortopedia1)
{
	this->direccionortopedia = direccionortopedia1;
	return;
}

ostream& operator<<(ostream& out, cOrtopedia& ortopedia)
{
	out << ortopedia.To_stringortopedia();

	return out;
}

string cOrtopedia::To_stringortopedia()
{
	string auxortopedia = this->getnombreortopedia() + to_string(this->getstock());

	return auxortopedia;
}


