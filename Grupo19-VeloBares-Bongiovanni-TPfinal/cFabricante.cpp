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

string cFabricante::getnombredefabricante()
{
	return this->nombrefabricante;
}

string cFabricante::getdirecciondefabricante()
{
	return this->direccionfabricante;
}

cProtesis cFabricante::hacerprotesis(cPaciente pte, cMedico m, cProtesis p)
{
	string radio = pte.getradio();
	bool alergia = pte.getalergias();
	vector<cProtesis> vectorpr = m.getlista();
	int pos = 0;//como ponemos una posicion especoifica del vector?
	cProtesis *protesisnueva = new cProtesis();//memoria dinamica, como se hace?
	for (cProtesis p : vectorpr)
	{
		if ((p.getdimensiones() == radio) && !alergia)
		{
			protesisnueva = p;
			break;
		}
	}
	return p;
}
	
ostream& operator<<(ostream& out, cFabricante& fabricante)
{
	out << fabricante.To_stringfabricante();

	return out;
}

string cFabricante::To_stringfabricante()
{
	string auxpaciente = this->getnombredefabricante() + this->getdirecciondefabricante();
	
	return auxpaciente;
	
}

void cFabricante::recibirsolicitud()
{
	return;
}
