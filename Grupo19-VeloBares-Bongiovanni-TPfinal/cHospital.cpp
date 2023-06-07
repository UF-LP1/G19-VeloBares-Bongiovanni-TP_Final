#include "cHospital.h"

cHospital::cHospital(string nombrehoispital_, string direccionhospital_, vector <cMedico> vectorm_, vector <cPaciente> vectorpa_)
{
	this->nombrehospital = nombrehoispital_;
	this->direccionhospital = direccionhospital_;
	this-> vectorm=vectorm_;
	this-> vectorpa=vectorpa_;
}

cHospital::~cHospital()
{
}

string cHospital::getnombrehospital()
{
	return this->nombrehospital;
}

void cHospital::setdireccionhospital(string direccionhospital)
{
	return;
}

vector<cMedico> cHospital::getvectormedico()
{
	return vector<cMedico>();
}

vector<cPaciente> cHospital::getvectorpaciente()
{
	return vector<cPaciente>();
}

void cHospital::agregarpaciente(cPaciente p)
{
	vectorpa.push_back(p);
	return;
}

void cHospital::eliminarpaciente()//hacerloo
{
	return;
}

void cHospital::imprimirhospital()
{
	//string getnombrehospital();
	//vector <cMedico> getvectormedico();
	//vector <cPaciente> getvectorpaciente();

	return;
}

string cHospital::To_stringh()
{
	string auxhos;
	//es igual al to string de pacientes y medicos
	return auxhos;
}
void cHospital::buscarpaciente() 
{
	return;
}

void operator++(const cPaciente& p)//no lleva cHospital pues está fuera de la clase en el .h
{
	return;
}
