#pragma once
#include "cProtesis.h"
#include "cPaciente.h"
class cQuirurgica :
    public cProtesis
{
public:
    cQuirurgica(); // le paso lo que tiene protesis pues hija
    ~cQuirurgica();
    void norechazo(bool alergias);
    void imprimirquirurgicas();
    string to_string;
private:

};

