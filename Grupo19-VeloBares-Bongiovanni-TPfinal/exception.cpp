#include "exception.h"

const char* Agregadox2::what() const throw()
{
	return "Se agregó dos veces el paciente";
}