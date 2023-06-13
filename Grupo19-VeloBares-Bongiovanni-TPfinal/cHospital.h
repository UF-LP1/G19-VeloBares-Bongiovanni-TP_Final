#pragma once
#include <string> 
#include <vector>
#include "cMedico.h"//medico y hospital se tiene ambos 
using namespace std;
#ifndef _CHOSPITAL_H
#define _CHOSPITAL_H*

class cHospital
{
public:
	cHospital(string nombrehoispital_, string direccionhospital_, vector <cMedico> vectorm_, vector <cPaciente> vectorpa_);
	~cHospital();
	string getnombrehospital();
	void setdireccionhospital(string direccionhospital);
	vector<cMedico> getvectormedico();
	vector <cPaciente> getvectorpaciente();
	//void agregarpaciente(cPaciente p, cHospital h); ya tenemos la sobregarga
	void eliminarpaciente(unsigned int codigo__, cPaciente p);
	string To_stringhospital();
	cPaciente buscarpaciente(unsigned int codigopaciente__);

private:
	string nombrehospital;
	string direccionhospital;
	vector <cMedico> vectorm;
	vector <cPaciente> vectorpa;

};

ostream& operator <<(ostream& out, cHospital& hospital);
void operator + (const cPaciente& p, cHospital h);
void operator - (cHospital h);

#endif