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

string cMedico::getnombremedico() 
{
	return this->nombremedico;
}

string cMedico::getapellidomedico() 
{
	return this->apellidomedico;
}

string cMedico::getmatricula() 
{
	return this->matricula;
}

vector<cProtesis> cMedico::getlista()
{
	return vector<cProtesis>();
}

vector<cProtesis> cMedico::recetarprotesis(cPaciente pte, cOrtopedia o)//necesitamos que devuleva uno no toda la lista
{
	string radio = pte.getradio();
	bool alergia = pte.getalergias();
	vector<cProtesis> posiblesprotesis; //meto aca las protesis que cumplen con las condiciones del if.

	for ( cProtesis& p: vectorpr ) //SINTAXIS DEL FOR PARA LOS VECTOR.
	{
		if ((p.getdimensiones() == radio) && !alergia && (o.getstock() !=0) )
			{
			posiblesprotesis.push_back(p);

			}
	}

	if (!posiblesprotesis.empty()) //si es que se agregaron, agarrame alguna random total es lo mismo
	{
		int M = rand() % posiblesprotesis.size();
		return { posiblesprotesis[M] };
	}

	else
	{
		cout << "no hay tal protesis." << endl;
		return{ posiblesprotesis }; //sino, devuelvo la lista que debería estar vacia si llego hasta acá
	}
		
}

void cMedico::imprimirmedico()
{
	return;
}

string cMedico::to_string()
{
	return string();
}

