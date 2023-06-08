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

void cHospital::eliminarpaciente()
{
	return;
}

ostream& operator<<(ostream& out, cHospital& hospital)
{
	out << hospital.To_stringhospital();

	return out;
}

string cHospital::To_stringhospital()
{
	string auxhos;

	vector <cPaciente> aux1 = this->getvectorpaciente();

	for (int i = 0; i < this->getvectorpaciente().size(); i++)
	{
		auxhos += aux1[i].To_stringpaciente();
	}

	vector <cMedico> aux2 = this->getvectormedico();

	for (int i = 0; i < this->getvectormedico().size(); i++)
	{
		auxhos += aux2[i].To_stringmedico();
	}

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
