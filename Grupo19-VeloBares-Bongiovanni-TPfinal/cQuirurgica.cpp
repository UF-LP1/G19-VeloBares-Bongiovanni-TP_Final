#include "cQuirurgica.h"


cQuirurgica::cQuirurgica(string dimensiones_, string material_, string fabricante_):cProtesis( dimensiones_,  material_,  fabricante_)
{
}

cQuirurgica::~cQuirurgica()
{
}

void cQuirurgica::norechazo(bool alergias)
{
	return;
}

void cQuirurgica::imprimirquirurgicas()
{
	return; //podriamos usar sobrecarga?
}

//to_string como va?