#ifndef _EXCEPTION_H
#define _EXCEPTION_H
#pragma once
#include <exception>
#include<string>
using namespace std;

class NoSeEncontro : public exception
{
	const char* what() const throw ();
};
//yo ahora donde aparezca la funcion buscar hago el trycatch no?

#endif