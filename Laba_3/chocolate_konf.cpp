#include "stdafx.h"
#include "chocolate_konf.h"
#include <iostream>

void Chocolate_konfeta::setVid(string v)
{
	vid = v;
}

string Chocolate_konfeta::getVid()
{
	std::cout << "��� ��������: "<<vid<<std::endl;
	return vid;
}

Chocolate_konfeta::Chocolate_konfeta()
{
	std::cout << "����������� ���������� �������\n";
}

Chocolate_konfeta::~Chocolate_konfeta()
{
	std::cout << "���������� ���������� �������\n";
}