#pragma once
#include <string>
#include "cRegistro.h"
using namespace std;
#ifndef _CANPA_H
#define _CANPA_H*

class cANPA
{
public:
	cANPA(vector <cOrtopedia> ortopediaa_,  vector <cHospital> hospitall_);
	~cANPA();
	vector <cOrtopedia> getlistao();
	vector <cHospital>  getlistah();
	string To_stringanpa();
	void buscarprotesis();

private:
	vector< cOrtopedia> ortopediaa;
    vector< cHospital> hospitall;
};

ostream& operator << (ostream& out, cANPA& anpa);
#endif
