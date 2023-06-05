#pragma once
#include <string>
#include "cPaciente.h"
using namespace std;

class cProtesis
{
public:
	friend class cMedico; //asi el medico tiene como atributo a protesis
	friend class cRegistro; //asi el registro tiene como atributo a protesis
	friend class cFabricante; // asi me hace la protesis si la ortopedia tiene stock =0
		cProtesis(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_);
		~cProtesis();
		string getdimensiones();
		string getmaterial();
		string getfabricante();
		unsigned int getcodigo();
		void setfechafabricacion(time_t fechadefabricacion);
		void imprimirprotesis();
		string to_string();

protected:
	string dimensiones;
	string material;
	string fabricante;
	unsigned int codigo;
	time_t fechadefabricacion;

};

