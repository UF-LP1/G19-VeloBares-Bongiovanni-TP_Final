#pragma once
#include <string> 
#include <vector>
using namespace std;

class cHospital
{
public:
	friend class cRegistro;
	cHospital(string nombrehoispital_, string direccionhospital_);
	~cHospital();
	string getnombrehospital(string nombrehospital);
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

