#pragma once
#include <string>
#include "cPaciente.h"
#include "cNoquirurgica.h" //SI NO PONEMOS LOS .H DE LAS HIJAS, NO LO TOMA
#include "cQuirurgica.h" // NO NOS GUSTA LA RECURSIVIDAD PERO SINO NO PODEMOS AVANZAR.
using namespace std;

class cProtesis
{
public:
	friend class cMedico;//asi el medico tiene como atributo a protesis
	friend class cRegistro;//asi el registro tiene como atributo a protesis
	friend class cFabricante;//asi me hace la protesis si la ortopedia tiene stock =0
	cProtesis();
	cProtesis(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_);
	~cProtesis();
	string getdimensiones();
	string getmaterial();
	string getfabricante();
	unsigned int getcodigo();
	void setfechafabricacion(time_t fechadefabricacion1);
	virtual void imprimirprotesis();
	string To_stringprotesis();
	void tiemporecuperacion(vector<cProtesis*> listaprotesis, time_t tiemporecup);

protected:
	string dimensiones;
	string material;
	string fabricante;
	time_t fechadefabricacion;
	unsigned int codigo;

};



