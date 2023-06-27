#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "cPaciente.h"
#include "cOrtopedia.h"
#include "cNoquirurgica.h"
#include "cQuirurgica.h"
#include "cFabricante.h"
using namespace std;

class cMedico
{
public:
	//friend class cFabricante;
	cMedico(vector <cProtesis*> vectorpr_, string nombremedico_, string apellidomedico_, const string matricula_);
	~cMedico();
	string getnombremedico();
	string getapellidomedico();
	const string getmatricula();
	vector <cProtesis*> getlista();
	string To_stringmedico();
	cProtesis* buscarprotesis(unsigned int codigoprotesisabuscar);
	vector<cProtesis*> posibilidades(cPaciente pte, cProtesis* pro);
	cProtesis* recetarprotesis(cPaciente pte, cOrtopedia o, cProtesis pro, int solicitud, cFabricante *fabricc);
	void tiemporecuperacion(time_t tiemporecup);

private:
	vector <cProtesis*> vectorpr;
	string  nombremedico;
	string apellidomedico;
	const string matricula; 

};

ostream& operator<<(ostream& out, cMedico& medico);
