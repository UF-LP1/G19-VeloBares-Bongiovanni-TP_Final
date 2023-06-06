#pragma once
#include "cProtesis.h"

class cNoquirurgica : public cProtesis 
{
public:
    cNoquirurgica(string dimensiones_, string material_, string fabricante_, time_t fechafabricacion_, unsigned int codigo_, enum lado ladoprotesis_);
    ~cNoquirurgica();
    void ajustardimensiones();
    void inmprimirnoquirurgica();
    string to_string();

private: 
    enum lado 
    {
         SuperiorDerecha = 1,
         SuperiorIzquierda,
         InferiorDerecha,
         InferiorIzquierda
    };
    lado ladoprotesis;
};

