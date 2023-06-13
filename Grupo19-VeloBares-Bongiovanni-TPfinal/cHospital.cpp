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

/*void cHospital::agregarpaciente(cPaciente p, cHospital h)
{ 
	vector <cPaciente> nuevovectorpa = operator + (p, h);
	return;
}*/

void cHospital::eliminarpaciente(unsigned int codigo__, cPaciente p)
{
		cPaciente eliminado= buscarpaciente(codigo__); // llamo funcion buscar para encontrar el paciente que quiero eliminar.
		for (int i = 0; i < vectorpa.size(); i++)
		{
			if (eliminado.codigopaciente == vectorpa.at(i).codigopaciente)
			{
				vectorpa.erase(vectorpa.begin() + i); //elimino desde el principio, Is posiciones mas de ahi
				break;
			}
			i++;
		}  
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

cPaciente cHospital::buscarpaciente(unsigned int codigopaciente__) 
{
	for (int i = 0; i < vectorpa.size(); i++) // recorro el vector pacientes...
	{
		if (vectorpa[i].getcodigopaciente() == codigopaciente__) // si el codigo de x paciente coincide con el que me dan...
		{
			return vectorpa.at(i); // devuelvo el paciente en esa posicion...
		}
		else
		{
			return; // ver q devuelve
		}
	}
	
}

void operator + (const cPaciente& p, cHospital h)
{
	h.getvectorpaciente().push_back(p);
	
	return;
}

void operator - (cHospital h)
{
	h.getvectorpaciente().pop_back();

	return;
}

