#include "cMedico.h"
using namespace std;

cMedico::cMedico(vector <cProtesis> vectorpr_, string nombremedico_, string apellidomedico_, const string matricula_):  matricula(matricula_)//inicializo matricula con lista de inicializacion
{
	this->vectorpr = vectorpr_; 
	this->nombremedico = nombremedico_;
	this->apellidomedico = apellidomedico_;
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

vector<cProtesis> cMedico::recetarprotesis()//necesitamos que devuleva uno no toda la lista
{
	bool getalergias();//void norechazo(bool alergias);
	unsigned int getradio();// void ajustardimensiones();
	
	return vector<cProtesis>();
}

void cMedico::imprimirmedico()
{
	return;
}

string cMedico::to_string()
{
	return string();
}

