#pragma once
#include "cProtesis.h"
#include "ladoenum.h"

class cNoquirurgica : public cProtesis 
{
public:
    cNoquirurgica(string dimensiones_, string material_, string fabricante_, time_t fechafabricacion_, unsigned int codigo_,lado ladoprotesis_);
    ~cNoquirurgica();
    void ajustardimensiones();//es necesaria, se puede?
    void imprimirprotesis();
    string to_string();

private: 
   
    lado ladoprotesis;
};

