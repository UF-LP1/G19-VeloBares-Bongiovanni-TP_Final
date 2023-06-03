#include "cFabricante.h"

cFabricante::cFabricante(string nombrefabricante_, string direccionfabricante_, unsigned int nhabilitacion_)
{
	this->nombrefabricante = nombrefabricante_;
	this->direccionfabricante = direccionfabricante_;
	this->nhabilitacion = nhabilitacion_;
}

cFabricante::~cFabricante()
{
}

void cFabricante::hacerprotesis()
{
	return;
}

void cFabricante::imprimirfabricante()
{
	return;
}

string cFabricante::to_string()
{
	return string();
}

void cFabricante::recibirsolicitud()
{
	return;
}
