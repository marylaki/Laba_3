#include "stdafx.h"
#include "pechenie.h"
#include <iostream>

void Pechenie::setTip(string t)
{
	tip = t;
}

string Pechenie::getTip()
{
	std::cout << "Тип печенья: "<<tip<<std::endl;
	return tip;
}

Pechenie::Pechenie()
{
	std::cout << "Конструктор печенья\n";
}

Pechenie::~Pechenie()
{
	std::cout << "Деструтор печенья\n";
}