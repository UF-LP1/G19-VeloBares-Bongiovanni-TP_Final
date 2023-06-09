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

void cOrtopedia::llamarfabricante(cFabricante fabricante, cOrtopedia o, cPaciente p, cMedico m, cProtesis pro) // lo que tiene tambien la funcion hacerprotesis.
{
	if (o.getstock() <= 0)
	{
		fabricante.hacerprotesis(p, m, pro);
	}

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
