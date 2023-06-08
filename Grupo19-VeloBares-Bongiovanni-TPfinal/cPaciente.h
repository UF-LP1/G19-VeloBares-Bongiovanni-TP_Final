#pragma once
#include "cMedico.h"
#include <sstream>		
#include <string>
#include <iostream>
using namespace std;
#ifndef _CPACIENTE_H
#define _CPACIENTE_H*

class cPaciente
{
public:
	friend class cRegistro; //asi el registro tiene como atributo a paciente
	friend class cHospital;
	friend class cProtesis;
	friend class cMedico; //asi me receta la protesis
	friend class cFabricante; //para que me haga la protesis si la ortopedia no tiene stock
    cPaciente(string nombrepaciente_, string apellidopaciente_, time_t fechanacimiento_,  bool alergias_, string problema_, unsigned int telefonocontacto_, string radio_, unsigned int codigopaciente_);
	~cPaciente();
	string getnombrepaciente();
	string getapellidopaciente();
	bool getalergias();
	string getradio();
	string getproblema();
	void settelefonocontacto(unsigned int telefonocontacto);
	unsigned int getcodigopaciente();
	void setfechanacimiento(time_t fechanacimiento);
	string To_stringpaciente();

private:

	string nombrepaciente;
	string apellidopaciente;
	time_t fechadenacimiento;
	bool alergia;
	string problema;
	unsigned int telefonocontacto;
	string radio;
	unsigned int codigopaciente;

};
ostream& operator << (ostream& out, cPaciente& pac);
#endif