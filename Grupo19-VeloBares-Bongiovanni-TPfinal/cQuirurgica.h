#pragma once
#include "cProtesis.h"



class cQuirurgica : public cProtesis
{
public:
    cQuirurgica(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_);
    ~cQuirurgica();
    void imprimirprotesis();
    string To_stringq();
    void recuperacionquirurgica(time_t tiemporecupQ);

private:
  
    static time_t  tiemporecupQ;
};


