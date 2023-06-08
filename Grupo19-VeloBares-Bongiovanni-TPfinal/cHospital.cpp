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

void cHospital::eliminarpaciente(unsigned int codigo__, cPaciente p)
{
		cPaciente eliminado= buscarpaciente(codigo__, p);// llamo funcion buscar para encontrar el paciente que quiero eliminar.
		vectorpa.erase(eliminado);// donde esta eliminado deberia ir una posicion
		return;
}

ostream& operator<<(ostream& out, cHospital& hospital)
{
	out << hospital.To_stringhospital();

	return out;
}

string cHospital::To_stringhospital()
{
	string auxhos; //que tiene?

	vector <cPaciente> aux1 = this->getvectorpaciente(); // igual el vector de pacientes que tiene el hospital

	for (int i = 0; i < this->getvectorpaciente().size(); i++)
	{
		auxhos += aux1[i].To_stringpaciente(); // concateno los string (primero paso a string el de ptes)
	}

	vector <cMedico> aux2 = this->getvectormedico(); // lo mismo con el vector de medicos que tiene el hospital

	for (int i = 0; i < this->getvectormedico().size(); i++)
	{
		auxhos += aux2[i].To_stringmedico();
	}

	return auxhos; // este tiene en modo string a los vectores de pacientes y medicos con toda su info adentro
}

cPaciente cHospital::buscarpaciente(unsigned int codigopaciente__, cPaciente p) 
{
	for(int i=0; i< vectorpa.size(); i++) // recorro el vector pacientes...
	{
		if (p.getcodigopaciente() == codigopaciente__) // si el codigo de x paciente coincide con el que me dan...
		{
			return vectorpa.at(i); // devuelvo el paciente en esa posicion...
		}
		else
		{
			cout << "No se encontr� al paciente" << endl; // va o no va?
		}
	}

	return ;
}

void cHospital::operator++(const cPaciente& p)
{
	vectorpa.push_back(p);
	return;
}

void cHospital::operator++()
{
	cPaciente p;
	vectorpa.push_back(p);
	return;
}