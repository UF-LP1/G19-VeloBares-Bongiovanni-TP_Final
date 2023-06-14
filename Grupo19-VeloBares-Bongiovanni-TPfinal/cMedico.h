#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "cProtesis.h"
#include "cOrtopedia.h"
#include "cFabricante.h"
#include "cHospital.h"//medico y hospital se tiene ambos 
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
	string To_stringmedico();
	cProtesis buscarprotesis(unsigned int codigoprotesisabuscar);
	vector<cProtesis> posibilidades(cPaciente pte, cOrtopedia o, cFabricante fabricante, cProtesis pro, cMedico m);
	cProtesis recetarprotesis(cPaciente pte, cOrtopedia o, cFabricante fabricante, cProtesis pro, cMedico m);
	void llamarfabricante(cFabricante fabricante, cOrtopedia o, cPaciente p, cMedico m, cProtesis pro);
	//cProtesis quetipoes(cProtesis p, vector <cProtesis> vectorpr);

private:
	vector <cProtesis> vectorpr;
	string  nombremedico;
	string apellidomedico;
	const string matricula; 

};

ostream& operator<<(ostream& out, cMedico& medico);
#endif