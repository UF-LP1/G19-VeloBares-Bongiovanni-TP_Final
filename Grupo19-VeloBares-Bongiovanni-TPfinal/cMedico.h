#pragma once
#include <string>
using namespace std;

class cMedico
{
public:
	friend class cRegistro;
	cMedico(string nombremedico_, string apellidomedico_, const string matricula_);
	~cMedico ();
	string getnombremedico();
	string getapellidomedico();
	string getmatricula();
	//cProtesis recetarprotesis();
	void imprimirmedico();
	string to_string;

private:
	string  nombremedico;
	string apellidomedico;
	const string matricula; //no te olivdes de inicializar loca

};

