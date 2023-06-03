#pragma once
#include "cQuirurgica.h"

class cSuperiorq :
    public cQuirurgica 
{
    cSuperiorq(string dimensiones_, string material_, string fabricante_);
    ~cSuperiorq();
    void imprimirsuperiorq();
    string to_string();
};

