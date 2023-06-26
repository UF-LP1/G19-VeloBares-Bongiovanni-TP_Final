#include "cRegistro.h"

cRegistro::cRegistro(cHospital *hospital_, cMedico *medico_, time_t fechasolicitud_, time_t fechaentrega_, cProtesis *protesis_, cPaciente *paciente_, bool entregado_)
{
	this->hospital = hospital_;
	this->medico = medico_;
	this->fechadesolicitud = fechasolicitud_;
	this->fechaentrega = fechaentrega_;
	this->protesis = protesis_;
	this->paciente = paciente_;
	this->entregado = entregado_;
}

cRegistro::~cRegistro()
{
}

cHospital* cRegistro::gethospital()
{
	return this->hospital; 
}

cMedico* cRegistro::getmedico()
{
	return this->medico;
}

time_t cRegistro::getfechasolicitud()
{
	return this->fechadesolicitud;
}

void cRegistro::setfechaentrega(time_t fechaentrega1)
{
	this->fechaentrega = fechaentrega1;
	return;
}

cProtesis* cRegistro::getprotesis()
{
	return this->protesis;
}

cPaciente* cRegistro::getpaciente()
{
	return this->paciente;
}

ostream& operator<<(ostream& out, cRegistro& registro)
{
	out << registro.To_stringregistro();

	return out;
}

string cRegistro::To_stringregistro()
{
	string auxregistro;
	
	time_t getfechasolicitud();

	cHospital *aux1 =  gethospital();

	cMedico *aux2 = getmedico();

	cPaciente *aux3 = getpaciente();

	cProtesis *aux4 = getprotesis();

	auxregistro += aux1->To_stringhospital() + aux2->To_stringmedico() + aux3->To_stringpaciente() + aux4->To_stringprotesis();

	return auxregistro;
}

void cRegistro::crearregistro(cPaciente pte, cOrtopedia o, cFabricante fabricante, cProtesis pro, cMedico m, int solicitud)
{
	string nombrepaciente = paciente->getnombrepaciente();
	string nombremedico = medico->getnombremedico();
	cProtesis* protesisquetiene = medico->recetarprotesis( pte,  o,  fabricante,  pro, solicitud);
	string nombrehospital = hospital->getnombrehospital();

	return;
}
