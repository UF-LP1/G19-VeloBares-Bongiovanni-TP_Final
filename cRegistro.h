#pragma once
#include <string>
#include "cProtesis.h"
#include "cPaciente.h"
#include "cMedico.h"
#include "cHospital.h"
using namespace std;
class cRegistro
{
private:
	cHospital hospital;
	cMedico medico;
	time_t fechadesolicitud;
	time_t fechaentrega;
	cProtesis protesis;
	cPaciente paciente;
public:
	cRegistro(cHospital hospital_, cMedico medico_,time_t fechasolicitud_, time_t fechaentrega_,  cProtesis protesis_, cPaciente paciente_); //INICIALIZAR LOS OTRBUTOS DE PACIENTE Y PROTESIS
	~cRegistro();
	cHospital gethospital(cHospital hospital);
	cMedico getmedico(cMedico medico);
	time_t getfechasolicitud(time_t fechasolicitud);
	void setfechaentrega(time_t fechaentrega);
	cProtesis getprotesis(cProtesis protesis);
	cPaciente getpaciente(cPaciente paciente);
	void imprimirregistro();
	string to_string();

	
};

