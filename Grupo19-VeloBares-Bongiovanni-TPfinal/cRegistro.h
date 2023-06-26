#pragma once
#include <string>
#include "cHospital.h"

class cRegistro
{
public:
	cRegistro(cHospital *hospital_, cMedico *medico_,time_t fechasolicitud_, time_t fechaentrega_,  cProtesis *protesis_, cPaciente *paciente_, bool entregado_); 
	~cRegistro();
	cHospital* gethospital();
	cMedico* getmedico();
	time_t getfechasolicitud();
	void setfechaentrega(time_t fechaentrega1);
	cProtesis* getprotesis();
	cPaciente* getpaciente();
	string To_stringregistro();
	void crearregistro(cPaciente pte, cOrtopedia o, cFabricante fabricante, cProtesis pro, cMedico m, int solicitud);

private:
	cHospital *hospital;
	cMedico *medico;
	time_t fechadesolicitud;
	time_t fechaentrega;
	cProtesis *protesis;
	cPaciente *paciente;
	bool entregado;

};



