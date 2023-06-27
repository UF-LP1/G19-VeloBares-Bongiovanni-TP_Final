#pragma once
#include <exception>
#include<string>
using namespace std;

class NoSeEncontro : public exception
{
	const char* what() const throw ();
};
