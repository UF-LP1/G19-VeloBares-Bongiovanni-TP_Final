#pragma once
#include <string>
#include "cRegistro.h"
#include "cOrtopedia.h"

using namespace std;

class cANPA
{
public:
	cANPA(vector <cOrtopedia*> ortopediaa_,  vector <cHospital*> hospitall_);
	~cANPA();
	vector <cOrtopedia> getlistao();
	vector <cHospital>  getlistah();
	string To_stringanpa();
	void tenerregistros(cRegistro registro, cProtesis protesis, cMedico m, cPaciente pte, cOrtopedia o, cFabricante fabricante, int solicitud);

private:
	vector< cOrtopedia*> ortopediaa;
    vector< cHospital*> hospitall;
};

ostream& operator << (ostream& out, cANPA& anpa);

