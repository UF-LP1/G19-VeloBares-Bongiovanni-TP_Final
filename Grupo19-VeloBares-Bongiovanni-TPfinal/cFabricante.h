#pragma once
#include <vector>
#include <string>
#include "cProtesis.h"
#include "cPaciente.h"
using namespace std;

class cFabricante
{
public:
	cFabricante(string nombrefabricante_, string direccionfabricante_, unsigned int nhabilitacion_);
	~cFabricante();
	string getnombredefabricante();
	string getdirecciondefabricante();
	cProtesis hacerprotesis(cPaciente pte, cMedico m, cProtesis p);
	void imprimirfabricante();
	string to_string();
	void recibirsolicitud();//recibe solicitud y la rechaza o no

private:
	string nombrefabricante;
	string direccionfabricante;
	unsigned int nhabilitacion;//para que esta?
};

