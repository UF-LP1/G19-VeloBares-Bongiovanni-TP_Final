#pragma once
#include "cProtesis.h"
#include "cPaciente.h"

/*#ifndef _CQUIRURGICA_H
#define _CQUIRURGICA_H*/ //esta en el tp anterior, nose si va

class cQuirurgica :
    public cProtesis
{
public:
    cQuirurgica(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_, enum lado ladoprotesis);
    ~cQuirurgica();
    void norechazo(bool alergias);
    void imprimirquirurgicas();
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

//#endif (esta en el tp anterior, no se si va)
