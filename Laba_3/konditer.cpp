#include "stdafx.h"
#include "koditer.h"
#include <iostream>

void Konditer_Izdel::setCost(int c)
{
	cost = c;
}

int Konditer_Izdel::getCost()
{
	std::cout << "Цена " << cost<<" коп.";
	return cost;

}

Konditer_Izdel::Konditer_Izdel()
{
	std::cout << "Конструктор кондитерского изделия\n";
}

Konditer_Izdel::~Konditer_Izdel()
{
	std::cout << "Деструктор кондитерского изделия\n";
}