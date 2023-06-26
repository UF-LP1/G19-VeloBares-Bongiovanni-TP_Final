#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;


class cProtesis
{
public:
	/*cProtesis();*/
	cProtesis(string dimensiones_, string material_, string fabricante_, time_t fechadefabricacion_, unsigned int codigo_);
	~cProtesis();
	string getdimensiones();
	string getmaterial();
	string getfabricante();
	unsigned int getcodigo();
	void setfechafabricacion(time_t fechadefabricacion1);
	virtual void imprimirprotesis();
	string To_stringprotesis();

protected:
	string dimensiones;
	string material;
	string fabricante;
	time_t fechadefabricacion;
	unsigned int codigo;

};



