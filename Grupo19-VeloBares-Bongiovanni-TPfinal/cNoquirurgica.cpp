#include "cNoquirurgica.h"

cNoquirurgica::cNoquirurgica(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_,lado ladoprotesis_) : cProtesis(dimensiones_, material_, fabricante_, fechadefabricacion_, codigo_)
{
	this->ladoprotesis = ladoprotesis_;
}

cNoquirurgica::~cNoquirurgica()
{
}

void cNoquirurgica::ajustardimensiones()
{
	return;
}

void cNoquirurgica::imprimirprotesis()
{
	cout << this->getdimensiones() << endl;
	cout << this->getmaterial() << endl;
	cout << this->getfabricante() << endl;
	cout << this->getcodigo() << endl;

	return;
}

string cNoquirurgica::To_stringno()
{
	string auxnoq = "\0";

	//asi es con herencia?
	string auxnoq = this->getdimensiones() + this->getmaterial()+ this->getfabricante() + to_string(this->getcodigo());

	return auxnoq;

}


