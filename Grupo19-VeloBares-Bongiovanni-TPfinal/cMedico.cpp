#include "cMedico.h"

using namespace std;


cMedico::cMedico(string nombremedico_, string apellidomedico_, const string matricula_)
{
	this->nombremedico = nombremedico_;
	this->apellidomedico = apellidomedico;
	//this->matricula = matricula_; NOOOO, ES UN CONSTANTE.
}

cMedico::~cMedico()
{
}

string cMedico::getnombremedico(string nombremedico) {
	return this->nombremedico;
}

string cMedico::getapellidomedico( string apellidomedico) {
	return this->apellidomedico;

}

string cMedico::getmatricula(const string matricula) {
	return this->matricula;

}

void cMedico::imprimirmedico()
{
}

//cProtesis recetarprotesis();