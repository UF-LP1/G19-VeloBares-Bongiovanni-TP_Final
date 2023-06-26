#include "cFabricante.h"

cFabricante::cFabricante(string nombrefabricante_, string direccionfabricante_, unsigned int nhabilitacion_, vector<cProtesis*> vectorprfab_)
{
	this->nombrefabricante = nombrefabricante_;
	this->direccionfabricante = direccionfabricante_;
	this->nhabilitacion = nhabilitacion_;
	this->vectorprfab = vectorprfab_;
}

cFabricante::~cFabricante()
{
}

string cFabricante::getnombredefabricante()
{
	return this->nombrefabricante;
}

string cFabricante::getdirecciondefabricante()
{
	return this->direccionfabricante;

}

vector<cProtesis*> cFabricante::getvectorprotesisfab()
{
	return this->vectorprfab;
}

cProtesis* cFabricante::hacerprotesis(cPaciente pte, cProtesis p, int solicitud)
{ 
	cProtesis* protesisfinal=nullptr;
	bool rechazo = recibirsolicitud(solicitud); //si es par no la rechaza
	string radio = pte.getradio(); //guardo el radio
	bool alergia = pte.getalergias(); //guardo las alergias
	
	for (int i =0; i<vectorprfab.size(); i++)
	{
		if ((p.getdimensiones() == radio) && !alergia && rechazo==true) //si yo recorro la lista de protesis y las dimensiones y el radio coinciden, me quedo con esa protesis.
		{
			protesisfinal = vectorprfab.at(i); // si todos los datos que el medico le manda al fabricante coinciden Y acepta la solicitud, entonces se la da
			break;
		}

			return protesisfinal; // ASUMIMOS QUE EL FABRICANTE SE LA DA SI O SI
	}

}
	
ostream& operator<<(ostream& out, cFabricante& fabricante)
{
	out << fabricante.To_stringfabricante();

	return out;
}

string cFabricante::To_stringfabricante()
{
	string auxpaciente = this->getnombredefabricante() + this->getdirecciondefabricante();
	
	return auxpaciente;	
}

bool cFabricante::recibirsolicitud (int solicitud)
{
	if (solicitud % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
