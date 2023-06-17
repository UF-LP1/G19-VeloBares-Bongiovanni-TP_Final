#include "cPaciente.h"
using namespace std;
#include <string>

cPaciente::cPaciente(string nombrepaciente_, string apellidopaciente_, time_t fechanacimiento_,  bool alergias_, bool problema_, unsigned int telefonocontacto_, string radio_, unsigned int codigopaciente_)
{
	this->nombrepaciente = nombrepaciente_;
	this->apellidopaciente = apellidopaciente_;
	this->fechadenacimiento = fechanacimiento_;
	this->alergia = alergias_;
	this->problema = problema_;
	this->telefonocontacto = telefonocontacto_;
	this->radio = radio_;
	this->codigopaciente = codigopaciente_;
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

bool cPaciente::getalergias()
{
	return false;
}

string cPaciente::getradio()
{
	return this->radio;
}

int cPaciente::getproblema()
{
	int valor = 1 + rand() % 100;
	return valor;
}

void cPaciente::settelefonocontacto(unsigned int telefonocontacto1)
{
	this->telefonocontacto = telefonocontacto1;
	return;
}

unsigned int cPaciente::getcodigopaciente()
{
	return this->codigopaciente;
}

void cPaciente::setfechanacimiento(time_t fechanacimiento)
{
	return;
}

ostream& operator<<(ostream& out, cPaciente& paciente)
{
	out << paciente.To_stringpaciente();

	return out;
}

string cPaciente::To_stringpaciente()
{
	string auxpaciente = this->getnombrepaciente() + this->getapellidopaciente() + to_string(this->getalergias()) + this->getradio() + to_string(this->getproblema()) + to_string(getcodigopaciente());

	return auxpaciente;
}

