#include "exception.h"

const char* NoSeEncontro::what() const throw()
{
	return "No se encontró al paciente que buscaba";
}