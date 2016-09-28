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
	std::cout << "Форма конфеты: " << forma << std::endl;
	return forma;
}

Konfeta::Konfeta()
{
	std::cout << "Конструктор конфеты\n";
}

Konfeta::~Konfeta()
{
	std::cout << "Деструктор конфеты\n";
}

void Konfeta::Karamel::setMassa(int m)
{
	massa = m;
}

int Konfeta::Karamel::getMassa()
{
	std::cout << "Macca карамели: "<<massa<<" гр.\n";
	return massa;
}

Konfeta::Karamel::Karamel()
{
	std::cout << "Конструктор карамели\n";
}

Konfeta::Karamel::~Karamel()
{
	std::cout << "Деструктор карамели\n";
}
void Konfeta::set_Karamel(int m)
{
	k.setMassa(m);
}

int Konfeta::get_Karamel()
{
	return k.getMassa();
}