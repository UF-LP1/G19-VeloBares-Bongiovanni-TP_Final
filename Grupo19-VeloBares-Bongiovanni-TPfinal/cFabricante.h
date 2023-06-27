#pragma once
#include <vector>
#include <string>
#include "cProtesis.h"
#include "cHospital.h"
using namespace std;

class cFabricante
{
public:
	cFabricante(string nombrefabricante_, string direccionfabricante_, unsigned int nhabilitacion_, vector<cProtesis*> vectorprfab_);
	~cFabricante();
	string getnombredefabricante();
	string getdirecciondefabricante();
	cProtesis* hacerprotesis(cPaciente pte, cProtesis p, int solicitud);
	string To_stringfabricante();
	bool recibirsolicitud(int solicitud);//recibe solicitud y la rechaza o no
	vector<cProtesis*> getvectorprotesisfab();

private:
	string nombrefabricante;
	string direccionfabricante;
	unsigned int nhabilitacion;
	vector<cProtesis*> vectorprfab;
};

ostream& operator<<(ostream& out, cFabricante& fabricante);

