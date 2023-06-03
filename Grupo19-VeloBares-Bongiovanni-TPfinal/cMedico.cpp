#include "cMedico.h"
using namespace std;

cMedico::cMedico(string nombremedico_, string apellidomedico_, const string matricula_)
{
	this->nombremedico = nombremedico_;
	this->apellidomedico = apellidomedico_;
	//this->matricula = matricula_; NOOOO, ES UN CONSTANTE.
}

cMedico::~cMedico()
{
}

string cMedico::getnombremedico() {
	return this->nombremedico;
}

string cMedico::getapellidomedico() {
	return this->apellidomedico;
}

string cMedico::getmatricula() {
	return this->matricula;
}

void cMedico::imprimirmedico()
{
	return;
}

//cProtesis recetarprotesis();