#include "cFabricante.h"

cFabricante::cFabricante(string nombrefabricante_, string direccionfabricante_, unsigned int nhabilitacion_)
{
	this->nombrefabricante = nombrefabricante_;
	this->direccionfabricante = direccionfabricante_;
	this->nhabilitacion = nhabilitacion_;
}

cFabricante::~cFabricante()
{
}

cProtesis cFabricante::hacerprotesis(cPaciente pte, cMedico m, cProtesis p)
{
	string radio = pte.getradio();
	bool alergia = pte.getalergias();
	vector<cProtesis> vectorpr = m.getlista();
	cProtesis protesisnueva();
	for (cProtesis p : vectorpr)
	{
		if ((p.getdimensiones() == radio) && !alergia)
		{
			protesisnueva = p;
			break;
		}
	}
	return protesisnueva;
			
		
}
	

void cFabricante::imprimirfabricante()
{
	return;
}

string cFabricante::to_string()
{
	return string();
}

void cFabricante::recibirsolicitud()
{
	return;
}
