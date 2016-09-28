#pragma once
#include "konfeta.h"

class Pechenie: public Konditer_Izdel
{
	string tip;
public:
	void setTip(string);
	string getTip();
	Pechenie();
	~Pechenie();
};