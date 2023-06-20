#pragma once
#include <vector>
#include <string>
#include "cANPA.h"
using namespace std;

class cFabricante
{
public:
	cFabricante(string nombrefabricante_, string direccionfabricante_, unsigned int nhabilitacion_);
	~cFabricante();
	string getnombredefabricante();
	string getdirecciondefabricante();
	cProtesis hacerprotesis(cPaciente pte, cMedico m, cProtesis p);
	string To_stringfabricante();
	int recibirsolicitud();//recibe solicitud y la rechaza o no

private:
	string nombrefabricante;
	string direccionfabricante;
	unsigned int nhabilitacion;
};

ostream& operator<<(ostream& out, cFabricante& fabricante);

