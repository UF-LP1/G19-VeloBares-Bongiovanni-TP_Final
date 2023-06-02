#include "cRegistro.h"



cRegistro::cRegistro(cHospital hospital_, cMedico medico_, time_t fechasolicitud_, time_t fechaentrega_, cProtesis protesis_, cPaciente paciente_)
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
