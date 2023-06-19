#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "cProtesis.h"
#include "cOrtopedia.h"
#include "cFabricante.h"
using namespace std;

class cMedico
{
public:
	friend class cRegistro;
	friend class cmedico;//para pasarle la lista de protesis cuando haga la nueva protesis
	cMedico(vector <cProtesis*> vectorpr_, string nombremedico_, string apellidomedico_, const string matricula_);
	~cMedico();
	string getnombremedico();
	string getapellidomedico();
	const string getmatricula();
	vector <cProtesis*> getlista();
	string To_stringmedico();
	cProtesis buscarprotesis(unsigned int codigoprotesisabuscar);
	vector<cProtesis> posibilidades(cPaciente pte, cOrtopedia o, cFabricante fabricante, cProtesis pro, cMedico m);
	cProtesis recetarprotesis(cPaciente pte, cOrtopedia o, cFabricante &fabricante, cProtesis pro, cMedico m);
	void llamarfabricante (cFabricante fabricante, cOrtopedia ortopedia, cPaciente p, cMedico m, cProtesis pro);

private:
	vector <cProtesis*> vectorpr;
	string  nombremedico;
	string apellidomedico;
	const string matricula; 

};

ostream& operator<<(ostream& out, cMedico& medico);
