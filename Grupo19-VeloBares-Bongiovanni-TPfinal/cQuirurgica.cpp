#include "cQuirurgica.h"

cQuirurgica::cQuirurgica(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_,lado ladoprotesis_):cProtesis( dimensiones_,  material_,  fabricante_,  fechadefabricacion_,  codigo_)
{
	this->ladoprotesis = ladoprotesis_;
}

cQuirurgica::~cQuirurgica()
{
}

void cQuirurgica::norechazo(bool alergias)
{
	bool getalergias();
	string getmaterial();	
}

void cQuirurgica::imprimirprotesis()
{
	cout << this->getdimensiones() << endl;
	cout << this->getmaterial() << endl;
	cout << this->getfabricante() << endl;
	cout << this->getcodigo() << endl;

	return;
}

string cQuirurgica::to_string()
{
	return string();
}

