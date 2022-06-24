#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(char* _name, int _age, char* _species) : Animal(_name, _age, _species)
	{

	}
};
