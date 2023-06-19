#pragma once
#include <string>
#include "cProtesis.h"
#include "cPaciente.h" //medico que esta en hospital, tiene a paciente, esta bien que este aca?
#include "cHospital.h"//si esto esta aca, el friend no hay que sacar? 
#include "cMedico.h"//si no pngo, no toma cMedico en los atributos
using namespace std;
#ifndef _CREGISTRO_H
#define _CREGISTRO_H*

class cRegistro
{
public:
	friend class cHospital;
	cRegistro(cHospital *hospital_, cMedico *medico_,time_t fechasolicitud_, time_t fechaentrega_,  cProtesis *protesis_, cPaciente *paciente_, bool entregado_); 
	~cRegistro();
	cHospital* gethospital();
	cMedico* getmedico();
	time_t getfechasolicitud();
	void setfechaentrega(time_t fechaentrega1);
	cProtesis* getprotesis();
	cPaciente* getpaciente();
	string To_stringregistro();
	void crearregistro(cProtesis protesisquetiene, cPaciente pte, cOrtopedia o, cFabricante& fabricante, cProtesis pro, cMedico m);

private:
	cHospital *hospital;
	cMedico *medico;
	time_t fechadesolicitud;
	time_t fechaentrega;
	cProtesis *protesis;
	cPaciente *paciente;
	bool entregado;

};

ostream& operator<<(ostream& out, cRegistro& registro);
#endif

