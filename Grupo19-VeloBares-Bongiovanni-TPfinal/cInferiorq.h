#pragma once
#include "cQuirurgica.h"

class cInferiorq :
    public cQuirurgica
{
    cInferiorq(string dimensiones_, string material_, string fabricante_);
    ~cInferiorq();
    void imprimirinferiorq();
    string to_string();
};

