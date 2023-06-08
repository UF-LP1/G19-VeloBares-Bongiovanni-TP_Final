#pragma once
#include "cProtesis.h"
#include "cPaciente.h"
#include "ladoenum.h"

#ifndef _CQUIRURGICA_H
#define _CQUIRURGICA_H*
class cQuirurgica :
    public cProtesis
{
public:
    cQuirurgica(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_, lado ladoprotesis_);
    ~cQuirurgica();
    void norechazo(bool alergias);
    void imprimirprotesis();
    string To_stringq();

private:
  
    lado ladoprotesis;

};

#endif 
