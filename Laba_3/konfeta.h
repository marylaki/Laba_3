#pragma once
#include "koditer.h"
#include <string>
using namespace std;

class Konfeta:public Konditer_Izdel
{
	string forma;
	class Karamel
	{
		int massa;
	public:
		void setMassa(int);
		int getMassa();
		Karamel();
		~Karamel();
	}k;
public:
	void set_Karamel(int);
	int get_Karamel();
	void setForma(string);
	string getForma();
	Konfeta();
	~Konfeta();
};