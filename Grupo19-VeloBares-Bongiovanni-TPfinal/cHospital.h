#pragma once
#include <string> 
#include <vector>
#include "cPaciente.h"
#include "cRegistro.h"
using namespace std;

class cHospital
{
public:
	cHospital(string nombrehoispital_, string direccionhospital_, vector <cMedico> vectorm_, vector <cPaciente> vectorpa_);
	~cHospital();
	string getnombrehospital();
	void setdireccionhospital(string direccionhospital);
	vector<cMedico> getvectormedico();
	vector <cPaciente> getvectorpaciente();
	void agregarpaciente(cPaciente p);
	void eliminarpaciente();
	void imprimirhospital();
	string To_stringh();
	void buscarpaciente();

private:
	string nombrehospital;
	string direccionhospital;
	vector <cMedico> vectorm;
	vector <cPaciente> vectorpa;

};

void  operator ++ (const cPaciente& p);