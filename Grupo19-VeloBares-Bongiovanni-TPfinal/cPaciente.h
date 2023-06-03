#pragma once
#include "cHospital.h"
using namespace std;

class cPaciente
{
public:
	friend class cRegistro; //asi el registro tiene como atributo a paciente
	friend class cHospital;
	friend class cProtesis;
    cPaciente(string nombrepaciente_, string apellidopaciente_, time_t fechanacimiento_, cHospital *hospital_, bool alergias_, string problema_, unsigned int telefonocontacto_, unsigned int radio_);
	~cPaciente();
	string getnombrepaciente();
	string getapellidopaciente();
	cHospital gethospital(); 
	bool getalergias();
	unsigned int getradio();
	string getproblema();
	void setfechanacimiento(time_t fechanacimiento);
	void imprimirpaciente();
	string to_string();

private:
	string nombrepaciente;
	string apellidopaciente;
	time_t fechadenacimiento;
	cHospital *hospital;
	bool alergia;
	string problema;
	unsigned int telefonocontacto;
	unsigned int radio;

};

