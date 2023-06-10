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

	vector <cHospital> aux1 = this-> gethospital();

	for (int i = 0; i < this-> gethospital().size(); i++)
	{
		auxregistro += aux1[i].To_stringhospital();
	}

	vector <cMedico> aux2 = this->getmedico();

	for (int i = 0; i < this->getmedico().size(); i++)
	{
		auxregistro += aux2[i].To_stringmedico();
	}

	vector <cPaciente> aux3 = this->getpaciente();

	for (int i = 0; i < this->getpaciente().size(); i++)
	{
		auxregistro += aux3[i].To_stringpaciente();
	}

	vector <cProtesis> aux4 = this->getprotesis();

	for (int i = 0; i < this->getprotesis().size(); i++)
	{
		auxregistro += aux4[i].To_stringprotesis();
	}

	return auxregistro;
}

void cRegistro::listasdepacientes(cProtesis protesis, cMedico m, cPaciente pte, cOrtopedia o, cFabricante fabricante)
{
	//esta funcion cuenta cuantas protesis se solicitaron y entregaron
	int contsolicitadas = 0;
	int contortogadas = 0;
	vector <cProtesis> posiblesprotesis = m.recetarprotesis(pte,  o,  fabricante,  protesis, m); 

	if(!posiblesprotesis.empty())
	{
		contortogadas++;
	}

	else
	{
		contsolicitadas++;
	}

	return;
}
