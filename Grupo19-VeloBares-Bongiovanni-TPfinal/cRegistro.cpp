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

cHospital cRegistro::gethospital()
{
	//return this->hospital; //como se hace
}

cMedico cRegistro::getmedico()
{
	//return this->medico;
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
	//return this->protesis;
}

cPaciente* cRegistro::getpaciente()
{
	return this->paciente;
}

void cRegistro::imprimirregistro()
{
	/*cHospital gethospital();
	cMedico getmedico();
	time_t getfechasolicitud();
	cProtesis getprotesis();
	cPaciente getpaciente();*/

	return;
}

string cRegistro::to_string()
{
	return string();
}
