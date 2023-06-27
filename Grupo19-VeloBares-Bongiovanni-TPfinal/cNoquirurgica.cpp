#include "cNoquirurgica.h"

time_t cNoquirurgica:: tiemporecupNQ = 0;
cNoquirurgica::cNoquirurgica(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_) : cProtesis(dimensiones_, material_, fabricante_, fechadefabricacion_, codigo_)
{
}

cNoquirurgica::~cNoquirurgica()
{
}

void cNoquirurgica::imprimirprotesis()
{
	cout << this->getdimensiones() << endl;
	cout << this->getmaterial() << endl;
	cout << this->getfabricante() << endl;
	cout << this->getcodigo() << endl;

	return;
}

void cNoquirurgica::recuperacionNOquirurgica(time_t tiemporecupNQ)
{
	time_t fechaderecuperacion = time(NULL) + 30;
	return;
}

string cNoquirurgica::To_stringno()
{
	string auxnoq = this->getdimensiones() + this->getmaterial()+ this->getfabricante() + to_string(this->getcodigo());

	return auxnoq;

}


