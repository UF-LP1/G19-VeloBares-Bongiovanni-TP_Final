#include "cQuirurgica.h"

cQuirurgica::cQuirurgica(string dimensiones_, string material_, string fabricante_):cProtesis( dimensiones_,  material_,  fabricante_)
{
}

cQuirurgica::~cQuirurgica()
{
}

void cQuirurgica::norechazo(bool alergias)
{
	bool getalergias();
	string getmaterial();
	if("titanio" == getmaterial())
	else if("cobre" == getmaterial())
	else ("plastico" == getmaterial())
	return;
}

void cQuirurgica::imprimirquirurgicas()//probamos sobrecarga
{
	return; 
}

string cQuirurgica::to_string()
{
	return string();
}

