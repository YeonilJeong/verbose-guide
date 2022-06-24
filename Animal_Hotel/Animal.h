#pragma once
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Animal
{
private:
	char* name;
	int age;
	char* species;

public:

	Animal(char* _name, int _age, char* _species)
	{
		int length1 = strlen(_name) + 1;
		name = new char[length1];
		strcpy(name, _name);

		age = _age;

		int length2 = strlen(_species) + 1;
		species = new char[length2];
		strcpy(species, _species);
	}

	char* getname()
	{
		return name;
	}

	char* getspecies()
	{
		return species;
	}

	int getage()
	{
		return age;
	}

	~Animal()
	{
		delete[] name;
		cout << "destructor completed!" << endl;
	}
};