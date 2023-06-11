#include "cRegistro.h"

cRegistro::cRegistro(cHospital *hospital_, cMedico *medico_, time_t fechasolicitud_, time_t fechaentrega_, cProtesis *protesis_, cPaciente *paciente_)
{
	this->hospital = hospital_;
	this->medico = medico_;
	this->fechadesolicitud = fechasolicitud_;
	this->fechaentrega = fechaentrega_;
	this->protesis = protesis_;
	this->paciente = paciente_;
}

cRegistro::~cRegistro()
{
}

cHospital* cRegistro::gethospital()
{
	return this->hospital; 
}

cMedico* cRegistro::getmedico()
{
	return this->medico;
}

time_t cRegistro::getfechasolicitud()
{
	return this->fechadesolicitud;
}

void cRegistro::setfechaentrega(time_t fechaentrega)
{
	return;
}

cProtesis* cRegistro::getprotesis()
{
	return this->protesis;
}

cPaciente* cRegistro::getpaciente()
{
	return this->paciente;
}

ostream& operator<<(ostream& out, cRegistro& registro)
{
	out << registro.To_stringregistro();

	return out;
}

string cRegistro::To_stringregistro()
{
	string auxregistro;//como va el time_t? time_t getfechasolicitud()

	vector <cHospital> aux1 = this-> gethospital();//esta mal porque estamos igualando un vector con un solo elemento!

	for (int i = 0; i < aux1.size(); i++)
	{
		auxregistro += aux1[i].To_stringhospital();
	}

	vector <cMedico> aux2 = this->getmedico();

	for (int i = 0; i < aux2.size(); i++)
	{
		auxregistro += aux2[i].To_stringmedico();
	}

	vector <cPaciente> aux3 = this->getpaciente();

	for (int i = 0; i < aux3.size(); i++)
	{
		auxregistro += aux3[i].To_stringpaciente();
	}

	vector <cProtesis> aux4 = this->getprotesis();

	for (int i = 0; i < aux4.size(); i++)
	{
		auxregistro += aux4[i].To_stringprotesis();
	}

	return auxregistro;
}

void cRegistro::listasdeprotesis(cProtesis protesis, cMedico m, cPaciente pte, cOrtopedia o, cFabricante fabricante)
{
	vector <cProtesis> posiblesprotesis = m.recetarprotesis(pte,  o,  fabricante,  protesis, m); 
	//cProtesis pro = m.recetarprotesis(pte, o, fabricante, protesis, m); //no me toma

	return;
}
