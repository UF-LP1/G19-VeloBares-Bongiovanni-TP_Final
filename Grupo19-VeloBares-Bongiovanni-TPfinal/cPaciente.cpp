#include "cPaciente.h"
using namespace std;
#include <string>

cPaciente::cPaciente(string nombrepaciente_, string apellidopaciente_, time_t fechanacimiento_, cHospital *hospital_, bool alergias_, string problema_, unsigned int telefonocontacto_, unsigned int radio_)
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

string cPaciente::getnombrepaciente()
{
	return this->nombrepaciente;
}

string cPaciente::getapellidopaciente()
{
	return this->apellidopaciente;
}

cHospital cPaciente::gethospital()
{
	//tal vez hay que hacer como con Saul y declarar un nombre con memoria dinamica
	//return this->hospital; //esta bien? si pongo return cHospital llora
	//ahora llora asi tambien 
}

bool cPaciente::getalergias()
{
	return false;
}

unsigned int cPaciente::getradio()
{
	return this->radio;
}

string cPaciente::getproblema()
{
	return this-> problema;
}

void cPaciente::setfechanacimiento(time_t fechanacimiento)
{
	return;
}

void cPaciente::imprimirpaciente()
{
	return;
}

string cPaciente::to_string()
{
	return string();
}
