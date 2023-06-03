#include "cHospital.h"

cHospital::cHospital(string nombrehoispital_, string direccionhospital_)
{
	this->nombrehospital = nombrehoispital_;
	this->direccionhospital = direccionhospital_;
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

void cHospital::agregarpaciente()
{
	return;
}

void cHospital::eliminarpaciente()
{
	return;
}

void cHospital::imprimirhospital()
{
	return;
}

string cHospital::to_string()
{
	return string();
}
