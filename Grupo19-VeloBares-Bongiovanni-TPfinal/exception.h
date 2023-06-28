#pragma once
#include <exception>
#include<string>
using namespace std;

class Agregadox2 : public exception
{
	const char* what() const throw ();
};
