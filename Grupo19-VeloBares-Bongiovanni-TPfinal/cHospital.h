#pragma once
#include <string> 
#include <vector>
#include "cMedico.h"
#include "cPaciente.h"
using namespace std;

class cHospital
{
public:
	cHospital(string nombrehoispital_, string direccionhospital_, vector <cMedico*> vectorm_, vector <cPaciente*> vectorpa_);
	~cHospital();
	string getnombrehospital();
	void setdireccionhospital(string direccionhospital1);
	vector<cMedico> getvectormedico();
	vector <cPaciente> getvectorpaciente();
	void agregarpaciente (cHospital h, cPaciente p);
	void eliminarpaciente(unsigned int codigo__, cPaciente p);
	string To_stringhospital();
	cPaciente buscarpaciente(unsigned int codigopaciente__);

private:
	string nombrehospital;
	string direccionhospital;
	vector <cMedico*> vectorm;
	vector <cPaciente*> vectorpa;

};

ostream& operator <<(ostream& out, cHospital& hospital);
void operator + (cHospital h, const cPaciente& p);
void operator - (cHospital h);

