#pragma once
#include <sstream>		
#include <string>
#include <iostream>
using namespace std;

class cPaciente
{
public:
	//friend class cRegistro; //asi el registro tiene como atributo a paciente
	//friend class cHospital;
	//friend class cProtesis;
	//friend class cMedico; //asi me receta la protesis
	//friend class cFabricante; //para que me haga la protesis si la ortopedia no tiene stock
    cPaciente(string nombrepaciente_, string apellidopaciente_, time_t fechanacimiento_,  bool alergias_, bool problema_, unsigned int telefonocontacto_, string radio_, unsigned int codigopaciente_);
	~cPaciente();
	string getnombrepaciente();
	string getapellidopaciente();
	bool getalergias();
	string getradio();
	int getproblema();
	void settelefonocontacto(unsigned int telefonocontacto);
	unsigned int getcodigopaciente();
	void setfechanacimiento(time_t fechanacimiento1);
	string To_stringpaciente();

private:

	string nombrepaciente;
	string apellidopaciente; 
	time_t fechadenacimiento;
	bool alergia;
	bool problema;//nos dice si necesita quirurgica o no quirurgica 
	unsigned int telefonocontacto;
	string radio;//en caso de ser 0 el paciente no posee miembro amputado, pero si fuese 0 no vendria al hospital
	unsigned int codigopaciente;

};

ostream& operator << (ostream& out, cPaciente& pac);
