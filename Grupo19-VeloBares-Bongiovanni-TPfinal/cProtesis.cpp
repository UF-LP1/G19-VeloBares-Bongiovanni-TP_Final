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

void cProtesis::setfechafabricacion(time_t fechadefabricacion1)
{
	this->fechadefabricacion = fechadefabricacion1;
	return;
}

void cProtesis::imprimirprotesis()
{
	cout <<"Las dimensiones de la protesis son:" << this->getdimensiones()<<"cm"<< endl;
	cout <<"El material de la protesis es:"<< this->getmaterial() << endl;
	cout << "El nombre del fabricante es:"<<this->getfabricante() << endl;
	cout << "El codigo de identificacion de la protesis es:"<<this->getcodigo() << endl;
	
	return;
}

string cProtesis::To_stringprotesis()
{
	string auxprotesis = this->getdimensiones() + this->getmaterial() + this->getfabricante() + to_string(this->getcodigo());

	return auxprotesis;
}






