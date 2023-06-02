#pragma once

#include "cHospital.h"
using namespace std;
class cPaciente
{
private:
	string nombrepaciente;
	string apellidopaciente;
	time_t fechadenacimiento;
	cHospital hospital;
	bool alergia;
	string problema;
	unsigned int telefonocontacto;
	unsigned int radio;
public:
	friend class cRegistro; //asi el registro tiene como atributo a paciente.
	cPaciente(string nombrepaciente_, string apellidopaciente_, time_t fechanacimiento_, cHospital hospital_, bool alergias_, string problema_, unsigned int telefonocontacto_, unsigned int radio_);
	~cPaciente();
	string getnombrepaciente(string nombrepaciente);
	string getapellidopaciente(string apellidopaciente);
	cHospital gethospital(cHospital hospital);
	bool getalergias(bool alergias);
	unsigned int getradio(unsigned int radio);
	string getproblema(string problema);
	void setfechanacimiento(time_t fechanacimiento);
	void imprimirpaciente();
	string to_string();

};

