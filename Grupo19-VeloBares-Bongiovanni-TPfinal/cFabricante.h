#pragma once
#include <string>
using namespace std;

class cFabricante
{
private:
	string nombrefabricante;
	string direccionfabricante;
	unsigned int nhabilitacion;
public:
	cFabricante(string nombrefabricante_, string direccionfabricante, unsigned int nhabilitacion_);
	~cFabricante();
	void hacerprotesis();
	void imprimirfabricante();
	string to_string;
	void recibirsolicitud(); // recibe solicitud y la rechaza o no.
};

