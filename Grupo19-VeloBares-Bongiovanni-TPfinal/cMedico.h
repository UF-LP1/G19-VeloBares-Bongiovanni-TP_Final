#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "cProtesis.h"
#include "cPaciente.h"
#include "cOrtopedia.h"
using namespace std;

class cMedico
{
public:
	friend class cRegistro;
	friend class cmedico; // para pasarle la lista de protesis cuando haga la nueva protesis
	cMedico(vector <cProtesis> vectorpr_, string nombremedico_, string apellidomedico_, const string matricula_);
	~cMedico();
	string getnombremedico();
	string getapellidomedico();
	string getmatricula();
	vector <cProtesis> getlista();
	vector <cProtesis> recetarprotesis(cPaciente pte, cOrtopedia o);
	void imprimirmedico();
	string to_string();

private:
	vector <cProtesis> vectorpr;
	string  nombremedico;
	string apellidomedico;
	const string matricula; 

};

