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

const string cMedico::getmatricula() 
{
	return this->matricula;
}

vector<cProtesis> cMedico::getlista()
{
	return vector<cProtesis>();
}

vector<cProtesis> cMedico::posibilidades(cPaciente pte, cOrtopedia o, cFabricante fabricante, cProtesis pro, cMedico m)
{
	string radio = pte.getradio();																						 //los primeros son de la funcion recetar y los ultimos son de llamarprot 
	bool alergia = pte.getalergias();
	vector<cProtesis> posiblesprotesis; //meto aca las protesis que cumplen con las condiciones del if.
	int valor = pte.getproblema(); //si es par es quirurgica, pero de que me sirve saber?

	// CHEQUEAR QUE ESTE EN EMPTY EL NUEVO VECTOR Y QUE NO TENGA BASURA.

	for (cProtesis& p : vectorpr) //SINTAXIS DEL FOR PARA LOS VECTOR.
	{
		if ((p.getdimensiones() == radio) && !alergia) //TENDRIAMOS QUE MANDAR POR PARAMETRO UN RADIO!! ASI SIEMPRE SERAN IGUALES?

		{
			posiblesprotesis.push_back(p);
		}
	}

	return posiblesprotesis;
}

cProtesis cMedico::recetarprotesis(cPaciente pte, cOrtopedia o, cFabricante fabricante, cProtesis pro, cMedico m)
{
	cProtesis *posiblesprotesis;
	if (!posibilidades( pte,  o,  fabricante,  pro,  m).empty() && (o.getstock() != 0)) //si es que se agregaron, agarrame alguna random total es lo mismo
	{
		int M = rand() % posibilidades(pte, o, fabricante, pro, m).size();
		return { posiblesprotesis[M] };
	}
	
	else
	{
		m.llamarfabricante(fabricante, o, pte, m, pro);
		pro=fabricante.hacerprotesis( pte,  m,  pro);
		return{ pro }; //devuelvo la protesis nueva recien fabricada por el fabricante
		//tengo que devolver null si no la hizo
	}
		
}

void cMedico::llamarfabricante(cFabricante fabricante, cOrtopedia ortopedia, cPaciente p, cMedico m, cProtesis pro) //lo que tiene tambien la funcion hacerprotesis.
 {
	 if (ortopedia.getstock() = 0) //chequear esto
	 {
		 fabricante.hacerprotesis(p, m, pro);
	 }

	 return;
 }

ostream& operator<<(ostream& out, cMedico& medico)
{
	out << medico.To_stringmedico();

	return out;
}

string cMedico::To_stringmedico()
{
	string auxmedico = this-> getnombremedico()+ this-> getapellidomedico() + this->getmatricula();

	vector <cProtesis> aux1 = this->getlista();

	for (int i = 0; i < this->getlista().size(); i++)
	{
		auxmedico += aux1[i].To_stringprotesis(); 
	}

	return auxmedico;
}

cProtesis cMedico::buscarprotesis(unsigned int codigoprotesisabuscar )
{
	for (int i = 0; i < vectorpr.size(); i++)
	{
		if (codigoprotesisabuscar == vectorpr[i].getcodigo())
			return vectorpr[i];
		break;
	}
	return;
}
