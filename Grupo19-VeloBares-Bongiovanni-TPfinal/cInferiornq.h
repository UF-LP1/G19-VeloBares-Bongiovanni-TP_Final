#pragma once
#include "cNoquirurgica.h"

class cInferiornq :
    public cNoquirurgica
{
    cInferiornq(string dimensiones_, string material_, string fabricante_);
    ~cInferiornq();
    void imprimirinferiornq();
    string to_string();
};

