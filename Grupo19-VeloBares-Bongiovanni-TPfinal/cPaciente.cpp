#include "cPaciente.h"
using namespace std;
#include <string>

cPaciente::cPaciente(string nombrepaciente_, string apellidopaciente_, time_t fechanacimiento_, cHospital hospital_, bool alergias_, string problema_, unsigned int telefonocontacto_, unsigned int radio_)
{
	this->nombrepaciente = nombrepaciente_;
	this->apellidopaciente = apellidopaciente_;
	this->fechadenacimiento = fechanacimiento_;
	this->hospital = hospital_;
	this->alergia = alergias_;
	this->problema = problema_;
	this->telefonocontacto = telefonocontacto_;
	this->radio = radio_;

}

cPaciente::~cPaciente()
{
}

string cPaciente::getnombrepaciente(string nombrepaciente)
{
	return this->nombrepaciente;
}

string cPaciente::getapellidopaciente(string apellidopaciente)
{
	return this->apellidopaciente;
}

cHospital cPaciente::gethospital(cHospital hospital)
{
	return this->hospital; //esta bien? si pongo return cHospital llora
}

bool cPaciente::getalergias(bool alergias)
{
	return false;
}

unsigned int cPaciente::getradio(unsigned int radio)
{
	return this->radio;
}

string cPaciente::getproblema(string problema)
{
	return this-> problema;
}

void cPaciente::setfechanacimiento(time_t fechanacimiento)
{
}

void cPaciente::imprimirpaciente()
{
}

string cPaciente::to_string()
{
	return string();
}
