#pragma once
#include <string>
using namespace std;

class cMedico
{
public:
	friend class cRegistro;
	cMedico(string nombremedico_, string apellidomedico_, const string matricula_);
	~cMedico ();

	string getnombremedico( string nombremedico);
	string getapellidomedico( string apellidomedico);
	string getmatricula(const string matricula);

	//cProtesis recetarprotesis();

	void imprimirmedico();
	string to_string;

private:
	string  nombremedico;
	string apellidomedico;
	const string matricula; //no te olivdes de inicializar loca
};

