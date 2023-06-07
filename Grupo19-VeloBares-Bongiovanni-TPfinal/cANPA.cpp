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
	out << anpa.To_string();

	return out;
}

string cANPA::To_string()
{
	string auxanpa = "\0";

	for (int i = 0; i < this->getlistao().size(); i++)
	{
	    auxanpa = to_string(this->getlistao()[i].getstock()) +"\n" + this->getlistao()[i].getnombreortopedia();
	}

	vector <cHospital> aux1 = this->getlistah();
	
	for (int i = 0; i < this->getlistah().size(); i++)
	{
		auxanpa += aux1[i].To_stringh()+"\n";
	}

	return auxanpa;
}

void cANPA::buscarprotesis()
{
	return;
}

