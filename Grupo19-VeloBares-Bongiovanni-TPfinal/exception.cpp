#include "exception.h"

const char* NoSeEncontro::what() const throw()
{
	return "No se encontr� al paciente que buscaba";
}