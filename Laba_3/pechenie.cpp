#include "stdafx.h"
#include "pechenie.h"
#include <iostream>

void Pechenie::setTip(string t)
{
	tip = t;
}

string Pechenie::getTip()
{
	std::cout << "��� �������: "<<tip<<std::endl;
	return tip;
}

Pechenie::Pechenie()
{
	std::cout << "����������� �������\n";
}

Pechenie::~Pechenie()
{
	std::cout << "��������� �������\n";
}