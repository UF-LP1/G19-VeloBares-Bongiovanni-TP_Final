#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "cProtesis.h"
// no explota si no pongo el .h de paciente porque en el.h de
#include "cOrtopedia.h"
#include "cHospital.h"
using namespace std;
#ifndef _CQMEDICO_H
#define _CMEDICO_H*
class cMedico
{
public:
	friend class cRegistro;
	friend class cmedico;//para pasarle la lista de protesis cuando haga la nueva protesis
	cMedico(vector <cProtesis> vectorpr_, string nombremedico_, string apellidomedico_, const string matricula_);
	~cMedico();
	string getnombremedico();
	string getapellidomedico();
	string getmatricula();
	vector <cProtesis> getlista();
	vector <cProtesis> recetarprotesis(cPaciente pte, cOrtopedia o);
	void imprimirmedico();
	string To_stringmedico();

private:
	vector <cProtesis> vectorpr;
	string  nombremedico;
	string apellidomedico;
	const string matricula; 

};

ostream& operator<<(ostream& out, cMedico& medico);
#endif