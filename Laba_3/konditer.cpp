#include "stdafx.h"
#include "koditer.h"
#include <iostream>

void Konditer_Izdel::setCost(int c)
{
	cost = c;
}

int Konditer_Izdel::getCost()
{
	std::cout << "���� " << cost<<" ���.";
	return cost;

}

Konditer_Izdel::Konditer_Izdel()
{
	std::cout << "����������� ������������� �������\n";
}

Konditer_Izdel::~Konditer_Izdel()
{
	std::cout << "���������� ������������� �������\n";
}