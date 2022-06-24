#pragma once
#include <iostream>
#include "Animal.h"
#include "cat.h"
#define _CRT_SECURE_NO_WARNINGS

class Handler
{
private:
	Animal* hotel[8];

public:
	void ResetRoom();
	void CheckIn();
	void CheckOut();
	void ViewList();
	void SelectMenu();
};