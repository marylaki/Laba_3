#include "stdafx.h"
#include "koditer.h"
#include "konfeta.h"
#include <iostream>

void Konfeta::setForma(string f)
{
	forma = f;
}

string Konfeta::getForma()
{
	std::cout << "����� �������: " << forma << std::endl;
	return forma;
}

Konfeta::Konfeta()
{
	std::cout << "����������� �������\n";
}

Konfeta::~Konfeta()
{
	std::cout << "���������� �������\n";
}

void Konfeta::Karamel::setMassa(int m)
{
	massa = m;
}

int Konfeta::Karamel::getMassa()
{
	std::cout << "Macca ��������: "<<massa<<" ��.\n";
	return massa;
}

Konfeta::Karamel::Karamel()
{
	std::cout << "����������� ��������\n";
}

Konfeta::Karamel::~Karamel()
{
	std::cout << "���������� ��������\n";
}
void Konfeta::set_Karamel(int m)
{
	k.setMassa(m);
}

int Konfeta::get_Karamel()
{
	return k.getMassa();
}