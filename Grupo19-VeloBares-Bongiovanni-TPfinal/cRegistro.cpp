#include "cRegistro.h"

cRegsitro:: cRegistro (cHospital hospital_, cMedico medico_, time_t fechasolicitud_, time_t fechaentrega_, cProtesis protesis_, cPaciente paciente_);
{
	this->
	this->
	this->
	this->
	this->
	this->
}

cRegistro::~cRegistro()
{
}

cHospital cRegistro::gethospital(cHospital hospital)
{
	return this->hospital;
}

cMedico cRegistro::getmedico(cMedico medico)
{
	return this->medico;
}

time_t cRegistro::getfechasolicitud(time_t fechasolicitud)
{
	return this->fechadesolicitud;
}

void cRegistro::setfechaentrega(time_t fechaentrega)
{
}

cProtesis cRegistro::getprotesis(cProtesis protesis)
{
	return this->protesis;
}

cPaciente cRegistro::getpaciente(cPaciente paciente)
{
	return this->paciente;
}

void cRegistro::imprimirregistro()
{
}

string cRegistro::to_string()
{
	return string();
}
