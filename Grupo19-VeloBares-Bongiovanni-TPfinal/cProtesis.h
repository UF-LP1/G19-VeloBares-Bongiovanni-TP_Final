#pragma once

#include <string>
using namespace std;
class cProtesis
{
protected:
	string dimensiones;
	string material;
	string fabricante;
	unsigned int codigo;
public:
	friend class cRegistro; //asi el registro tiene como atributo a paciente.
		cProtesis(string dimensiones_, string material_, string fabricante_);
		~cProtesis();
		string getdimensiones(string dimensiones);
		string getmaterial(string material);
		string getfabricante(string fabricante);
		unsigned int getcodigo(unsigned int codigo);
		void setfechafabricacion();
		void imprimirprotesis();
		string to_string;

};

