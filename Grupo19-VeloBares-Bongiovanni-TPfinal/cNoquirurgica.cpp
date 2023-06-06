#include "cNoquirurgica.h"


cNoquirurgica::cNoquirurgica(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_, enum lado ladoprotesis_) : cProtesis(dimensiones_, material_, fabricante_, fechadefabricacion_, codigo_)

}

cNoquirurgica::~cNoquirurgica()
{
}

void cNoquirurgica::ajustardimensiones()
{
	return;
}

void cNoquirurgica::inmprimirnoquirurgica()
{
	return;
}

string cNoquirurgica::to_string()
{
	return string();
}


