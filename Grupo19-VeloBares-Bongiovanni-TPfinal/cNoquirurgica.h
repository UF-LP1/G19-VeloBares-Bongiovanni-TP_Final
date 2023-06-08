#pragma once
#include "cProtesis.h"
#include "ladoenum.h"
#ifndef _CNOQUIRURGICA_H
#define _CNOQUIRURGICA_H*
class cNoquirurgica : public cProtesis 
{
public:
    cNoquirurgica(string dimensiones_, string material_, string fabricante_, time_t fechafabricacion_, unsigned int codigo_,lado ladoprotesis_);
    ~cNoquirurgica();
    void ajustardimensiones();
    string To_stringno();

private: 
   
    lado ladoprotesis;
};
#endif
