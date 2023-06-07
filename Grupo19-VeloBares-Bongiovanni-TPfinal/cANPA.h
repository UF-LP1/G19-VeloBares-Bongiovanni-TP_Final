#pragma once
#include <string>
#include "cHospital.h"
#include "cOrtopedia.h"
using namespace std;

class cANPA
{
public:
	cANPA(vector <cOrtopedia> ortopediaa_,  vector <cHospital> hospitall_);
	~cANPA();
	vector <cOrtopedia> getlistao();
	vector <cHospital>  getlistah();
	string To_string();
	void buscarprotesis();

private:
	vector< cOrtopedia> ortopediaa;
    vector< cHospital> hospitall;
};

ostream& operator << (ostream& out, cANPA& anpa);


