#pragma once
#include "cNoquirurgica.h"

class cSuperiornq :
    public cNoquirurgica
{
    cSuperiornq(string dimensiones_, string material_, string fabricante_);
    ~cSuperiornq();
    void imprimirsuperiornq();
    string to_string();
};

