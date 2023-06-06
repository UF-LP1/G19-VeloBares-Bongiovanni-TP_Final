#pragma once
#include <string>
#include "cProtesis.h"
#include "cPaciente.h"
#include "cMedico.h"
#include "cHospital.h"//si esto esta aca, el friend no hay que sacar? 
using namespace std;

class cRegistro
{
public:
	friend class cHospital;
	cRegistro(cHospital *hospital_, cMedico *medico_,time_t fechasolicitud_, time_t fechaentrega_,  cProtesis *protesis_, cPaciente *paciente_); 
	~cRegistro();
	cHospital gethospital();
	cMedico getmedico();
	time_t getfechasolicitud();
	void setfechaentrega(time_t fechaentrega);
	cProtesis getprotesis();
	cPaciente getpaciente();
	void imprimirregistro();
	string to_string();

private:
	cHospital *hospital;
	cMedico *medico;
	time_t fechadesolicitud;
	time_t fechaentrega;
	cProtesis *protesis;
	cPaciente *paciente;

};

