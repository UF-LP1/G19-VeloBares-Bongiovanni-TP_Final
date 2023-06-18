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
	int rechazo = recibirsolicitud(); //si es par no la rechaza
	string radio = pte.getradio(); //guardo el radio
	bool alergia = pte.getalergias(); //guardo las alergias
	vector<cProtesis> vectorpr = m.getlista(); //guardo mi lista de protesis que esta en medicos
	
	for (int i =0; i<vectorpr.size(); i++)
	{
		if ((p.getdimensiones() == radio) && !alergia && rechazo%2==0) //si yo recorro la lista de protesis y las dimensiones y el radio coinciden, me quedo con esa protesis.
		{
			p = vectorpr.at(i);
			break;
		}

		else
			return p;
		throw exception("No se puede otorgar la protesis solicitada"); //null ntiene que ser 
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

int cFabricante::recibirsolicitud()
{
	int rechazo = 1 + rand() % 100;
	return rechazo;
}
