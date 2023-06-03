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
	vector <cMedico> getvectormedico();
	vector <cPaciente> getvectorpaciente();
	void agregarpaciente();
	void eliminarpaciente();
	void imprimirhospital();
	string to_string();

private:
	string nombrehospital;
	string direccionhospital;
	vector <cMedico> vectorm;
	vector <cPaciente> vectorpa;

};

