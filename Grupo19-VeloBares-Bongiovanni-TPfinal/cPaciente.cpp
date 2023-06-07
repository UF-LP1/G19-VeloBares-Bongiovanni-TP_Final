#include "cPaciente.h"
using namespace std;
#include <string>

cPaciente::cPaciente(string nombrepaciente_, string apellidopaciente_, time_t fechanacimiento_,  bool alergias_, string problema_, unsigned int telefonocontacto_, string radio_, unsigned int codigopaciente_)
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

string cPaciente::getproblema()
{
	return this-> problema;
}

void cPaciente::settelefonocontacto(unsigned int telefonocontacto)
{
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

void cPaciente::imprimirpaciente()
{
	/*string getnombrepaciente();
	string getapellidopaciente();
	cHospital gethospital();
	bool getalergias();
	string getradio();
	string getproblema();
	unsigned int getcodigopaciente();*/

	return;
}

string cPaciente::To_string()
{

	string auxpaciente = this->getnombrepaciente() + this->getapellidopaciente() + to_string(this->getalergias()) + this->getradio() + this->getproblema() + to_string(getcodigopaciente());

	return auxpaciente;
}
ostream& operator<<(ostream& out, cPaciente& pac)
{
	out << pac.To_string();
}