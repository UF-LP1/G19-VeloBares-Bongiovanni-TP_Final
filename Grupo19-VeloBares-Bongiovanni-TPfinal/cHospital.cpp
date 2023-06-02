#include "cHospital.h"

cHospital::cHospital(string nombrehoispital_, string direccionhospital_)
{
	this->nombrehospital = nombrehoispital_;
	this->direccionhospital = direccionhospital_;

}

cHospital::~cHospital()
{
}

string cHospital::getnombrehospital(string nombrehospital)
{
	return this->nombrehospital;
}

void cHospital::setdireccionhospital(string direccionhospital)
{
}

void cHospital::agregarpaciente()
{
}

void cHospital::eliminarpaciente()
{
}

void cHospital::imprimirhospital()
{
}

string cHospital::to_string()
{
	return string();
}
