#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "cPaciente.h"
#include "cProtesis.h"
#include "cOrtopedia.h"
#include "cNoquirurgica.h"
#include "cQuirurgica.h"
#include "cFabricante.h" // NO DEBERIA ESTAR ACA ESTE PERO SINO COMO HAGO PARA QUE LO TOME? bueno lo borre de fabricante y lo tomo(?

using namespace std;

class cMedico
{
public:
	cMedico(vector <cProtesis*> vectorpr_, string nombremedico_, string apellidomedico_, const string matricula_);
	~cMedico();
	string getnombremedico();
	string getapellidomedico();
	const string getmatricula();
	vector <cProtesis*> getlista();
	string To_stringmedico();
	cProtesis* buscarprotesis(unsigned int codigoprotesisabuscar);
	vector<cProtesis*> posibilidades(cPaciente pte, cProtesis* pro);
	cProtesis* recetarprotesis(cPaciente pte, cOrtopedia o, cFabricante fabricante, cProtesis pro, int solicitud);
	//void llamarfabricante (cFabricante fabricante, cOrtopedia ortopedia);
	void tiemporecuperacion(time_t tiemporecup);

private:
	vector <cProtesis*> vectorpr;
	string  nombremedico;
	string apellidomedico;
	const string matricula; 

};

ostream& operator<<(ostream& out, cMedico& medico);
