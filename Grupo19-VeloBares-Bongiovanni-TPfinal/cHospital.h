#pragma once
#include <string> 
#include <vector>
#include "cPaciente.h"
#include "cRegistro.h"
using namespace std;

class cHospital
{
public:
	//friend class cRegistro; //lo mismo que con paciente
	//friend class cPaciente; //le doy permiso a la clase cPaciente a que acceda a mis cosas (siendo cHospital), incluyo el .h en cPaciente además
	//cambie y lo puse en paciente porque sino el constructor de paciente no tomaba
	cHospital(string nombrehoispital_, string direccionhospital_);
	~cHospital();
	string getnombrehospital();
	void setdireccionhospital(string direccionhospital);
	//get vector medico
	//get vector paciente
	void agregarpaciente();
	void eliminarpaciente();
	void imprimirhospital();
	string to_string();

private:
	string nombrehospital;
	string direccionhospital;
	//vector cMedico;
	//vector cMedico;

};

