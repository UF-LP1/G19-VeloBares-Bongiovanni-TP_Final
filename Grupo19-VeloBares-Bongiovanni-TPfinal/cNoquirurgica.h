#pragma once
#include "cProtesis.h"
class cNoquirurgica :
    public cProtesis //tiene a su madre.
{
private:
public:
    cNoquirurgica();
    ~cNoquirurgica();
    void ajustardimensiones();
    void inmprimirnoquirurgica();
    string to_string;

};

