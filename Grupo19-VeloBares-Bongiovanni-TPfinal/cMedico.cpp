#include "cMedico.h"
using namespace std;

cMedico::cMedico(vector <cProtesis*> vectorpr_, string nombremedico_, string apellidomedico_, const string matricula_):  matricula(matricula_)//inicializo matricula con lista de inicializacion
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

vector <cProtesis*> cMedico::getlista()
{
	return this->vectorpr;
}

vector<cProtesis*> cMedico::posibilidades(cPaciente pte, cProtesis* pro)
{
	string radio = pte.getradio(); //los primeros son de la funcion recetar y los ultimos son de llamarprot 
	bool alergia = pte.getalergias();
	vector<cProtesis*> posiblesprotesis; //meto aca las protesis que cumplen con las condiciones del if.
	int valor = pte.getproblema(); //si es par es quirurgica, pero de que me sirve saber?

	if (!posiblesprotesis.empty()) 
	{
		for (int i = 0; i < vectorpr.size(); i++) 
		{
			if ((pro->getdimensiones() == radio) && !alergia) //TENDRIAMOS QUE MANDAR POR PARAMETRO UN RADIO!! ASI SIEMPRE SERAN IGUALES?

			{
				posiblesprotesis.push_back(pro);
			}
		}
	}
	else
		posiblesprotesis.clear();

	return { posiblesprotesis };
}

cProtesis* cMedico::recetarprotesis(cPaciente pte, cOrtopedia o,  cProtesis pro, int solicitud, cFabricante *fabricc)
{ 
	 cProtesis* protesisfinal= nullptr;
	 int M = rand() % posibilidades(pte, &pro).size();
	 if (!posibilidades(pte, &pro).empty() && (o.getstock() != 0)) //si la lista de posibilidades no esta vacia y hay stock
	 {
		 protesisfinal= posibilidades(pte, &pro)[M]; //dame una random total es lo mismo
	 }
	
	else
	{
		cProtesis* prot = fabricc->hacerprotesis(pte, pro, solicitud); 
		if (prot != nullptr)
		{
			protesisfinal = prot;
			
		}	
	}
	 return protesisfinal;
}
	
ostream& operator<<(ostream& out, cMedico& medico)
{
	out << medico.To_stringmedico();

	return out;
}

string cMedico::To_stringmedico()
{
	string auxmedico = this-> getnombremedico()+ this-> getapellidomedico() + this->getmatricula();

	vector <cProtesis*> aux1 = this->getlista();

	for (int i = 0; i < this->getlista().size(); i++)
	{
		auxmedico += (*aux1[i]).To_stringprotesis();//ahora es un puntero
	}

	return auxmedico;
}

cProtesis* cMedico::buscarprotesis(unsigned int codigoprotesisabuscar)
{
	int i = 0;
	while (i < vectorpr.size())
	{
		if (codigoprotesisabuscar == vectorpr[i]->getcodigo())
		{
			return vectorpr[i];
			break;
		}
		i++;
	}
	return nullptr;
}

void cMedico::tiemporecuperacion(time_t tiemporecup)
{
	for (int i = 0; i < vectorpr.size(); i++)
	{
		cNoquirurgica* auxNQ = dynamic_cast<cNoquirurgica*>(vectorpr.at(i));
		if (auxNQ != nullptr)
		{
			auxNQ->recuperacionNOquirurgica(tiemporecup);
		}
	}

	for (int i = 0; i < vectorpr.size(); i++)
	{
		cQuirurgica* auxQ = dynamic_cast<cQuirurgica*>(vectorpr.at(i));
		if (auxQ != nullptr)
		{
			auxQ->recuperacionquirurgica(tiemporecup);
		}
	}
	return;
}