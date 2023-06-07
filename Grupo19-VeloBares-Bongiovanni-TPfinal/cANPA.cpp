#include "cANPA.h"
using namespace std;

cANPA::cANPA(vector <cOrtopedia> ortopediaa_, vector <cHospital> hospitall_)
{
	this-> ortopediaa= ortopediaa_;
	this-> hospitall= hospitall_;
}

cANPA::~cANPA()
{
}

vector<cOrtopedia> cANPA::getlistao()
{
	return vector<cOrtopedia>();
}

vector<cHospital> cANPA::getlistah()
{
	return vector<cHospital>();
}

ostream& operator<<(ostream& out, cANPA &anpa)
{
	int i = 0;
	vector <cOrtopedia> aux = anpa.getlistao();

    for (i=0; i<anpa.getlistao().size(); i++)
    {
		out << aux[i].getstock() << endl;
		out<< aux[i].getnombreortopedia() << endl;
    }

	vector <cHospital> aux1 = anpa.getlistah();
	vector <cMedico> aux2 = aux1.getvectormedico();
	vector <cPaciente> aux3 = aux1.getvectorpaciente();


	for (i = 0; i < anpa.getlistah().size(); i++)
	{
		out << aux1[i].getnombrehospital() << endl;
		out << aux2[i].vectorm<< endl;
		out << aux3[i].vectorpa<< endl;
	}

	return out;
}

string cANPA::to_string()
{
	return string();
}

void cANPA::buscarprotesis()
{
	return;
}

