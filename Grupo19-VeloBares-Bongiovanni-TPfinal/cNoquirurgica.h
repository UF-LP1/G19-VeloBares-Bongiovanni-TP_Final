#pragma once
#include "cProtesis.h"


class cNoquirurgica : public cProtesis 
{
public:
    cNoquirurgica(string dimensiones_, string material_, string fabricante_, time_t fechafabricacion_, unsigned int codigo_);
    ~cNoquirurgica();
    string To_stringno();
    void imprimirprotesis();
    void recuperacionNOquirurgica(time_t tiemporecupNQ);


private: 

    static time_t  tiemporecupNQ;
};

