#pragma once
#include <string>
using namespace std;

class cFabricante
{
public:
	cFabricante(string nombrefabricante_, string direccionfabricante_, unsigned int nhabilitacion_);
	~cFabricante();
	void hacerprotesis();
	void imprimirfabricante();
	string to_string;
	void recibirsolicitud(); // recibe solicitud y la rechaza o no

private:
	string nombrefabricante;
	string direccionfabricante;
	unsigned int nhabilitacion;
};

