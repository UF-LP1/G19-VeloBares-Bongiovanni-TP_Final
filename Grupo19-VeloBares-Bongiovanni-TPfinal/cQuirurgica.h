#pragma once
#include "cProtesis.h"
#include "ladoenum.h"

class cQuirurgica :
    public cProtesis
{
public:
    cQuirurgica(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_, lado ladoprotesis_);
    ~cQuirurgica();
    void imprimirprotesis();
    string To_stringq();
    void recuperacionquirurgica(time_t tiemporecupQ);

private:
  
    lado ladoprotesis;
    static time_t  tiemporecupQ;
};


