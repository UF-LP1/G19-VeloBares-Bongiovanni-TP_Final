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
	void imprimirANPPA();
	string to_string();
	2222
	void buscarprotesis();
	..
private:
	vector< cOrtopedia> ortopediaa;
    vector< cHospital> hospitall;
};

