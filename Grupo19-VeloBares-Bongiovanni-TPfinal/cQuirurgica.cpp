#include "cQuirurgica.h"
time_t cQuirurgica::tiemporecupQ = 0;
cQuirurgica::cQuirurgica(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_):cProtesis( dimensiones_,  material_,  fabricante_,  fechadefabricacion_,  codigo_)
{
}

cQuirurgica::~cQuirurgica()
{
}

void cQuirurgica::imprimirprotesis()
{
	cout << this->getdimensiones() << endl;
	cout << this->getmaterial() << endl;
	cout << this->getfabricante() << endl;
	cout << this->getcodigo() << endl;

	return;
}

string cQuirurgica::To_stringq()
{

	string auxq = this->getdimensiones() + this->getmaterial() + this->getfabricante() + to_string(this->getcodigo());

	return auxq;
}

void cQuirurgica::recuperacionquirurgica(time_t tiemporecupQ)
{
	time_t fechaderecuperacion = time(NULL) + 90; //se va a recuperar en 90 dias a partir de que se apico la protesis
	return;
}

