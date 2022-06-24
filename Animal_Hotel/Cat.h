#pragma once
#include "Animal.h"
#include <iostream>
using namespace std;

class Cat : public Animal
{
public:
	Cat(char* _name, int _age, char* _species)
		: Animal(_name, _age, _species)
	{

	}
};