#include "cQuirurgica.h"

cQuirurgica::cQuirurgica(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_, enum lado ladoprotesis_):cProtesis( dimensiones_,  material_,  fabricante_,  fechadefabricacion_,  codigo_)
{

}

cQuirurgica::~cQuirurgica()
{
}

void cQuirurgica::norechazo(bool alergias)
{
	bool getalergias();
	string getmaterial();
	
}

void cQuirurgica::imprimirquirurgicas()//probamos sobrecarga
{
	return; 
}

string cQuirurgica::to_string()
{
	return string();
}

