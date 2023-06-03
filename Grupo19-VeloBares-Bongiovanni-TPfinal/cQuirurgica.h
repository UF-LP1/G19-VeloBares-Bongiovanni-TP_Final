#pragma once
#include "cProtesis.h"
#include "cPaciente.h"

/*#ifndef _CQUIRURGICA_H
#define _CQUIRURGICA_H*/ //esta en el tp anterior, nose si va

class cQuirurgica :
    public cProtesis
{
public:
    cQuirurgica(string dimensiones_, string material_, string fabricante_);//le paso lo que tiene protesis pues hija
    ~cQuirurgica();
    void norechazo(bool alergias);
    void imprimirquirurgicas();
    string to_string; 

//private: (no tenemos atributos)

};

//#endif (esta en el tp anterior, no se si va)
