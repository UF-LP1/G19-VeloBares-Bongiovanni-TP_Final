#pragma once
#include <string>
#include "cHospital.h"
#include "cOrtopedia.h"
using namespace std;

class cANPA
{
public:
	cANPA(cOrtopedia* ortopediaa_, cHospital* hospitall_);
	~cANPA();
	cOrtopedia getlistao();
	cHospital getlistah();
	void imprimirANPPA();
	string to_string();

private:
	cOrtopedia *ortopediaa;
    cHospital *hospitall;
};

