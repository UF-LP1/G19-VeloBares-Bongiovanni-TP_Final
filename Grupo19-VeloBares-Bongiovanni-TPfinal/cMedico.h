#pragma once
#include <string>
#include <vector>
#include "cProtesis.h"
#include "cPaciente.h"
using namespace std;

class cMedico
{
public:
	friend class cRegistro;
	cMedico(vector <cProtesis> vectorpr_, string nombremedico_, string apellidomedico_, const string matricula_);
	~cMedico();
	string getnombremedico();
	string getapellidomedico();
	string getmatricula();
	vector <cProtesis> recetarprotesis();
	void imprimirmedico();
	string to_string();

private:
	vector <cProtesis> vectorpr;
	string  nombremedico;
	string apellidomedico;
	const string matricula; 

};

