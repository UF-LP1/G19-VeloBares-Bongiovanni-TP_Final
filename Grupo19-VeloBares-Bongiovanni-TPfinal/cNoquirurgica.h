#pragma once
#include "cProtesis.h"

class cNoquirurgica :
    public cProtesis 
{
public:
    cNoquirurgica(string dimensiones_, string material_, string fabricante_);
    ~cNoquirurgica();
    void ajustardimensiones();
    void inmprimirnoquirurgica();
    string to_string;

//private: no tiene nada, igual va?

};

