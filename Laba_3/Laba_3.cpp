// Laba_3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "koditer.h"
#include "konfeta.h"
#include "chocolate_konf.h"
#include "pechenie.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int choise = 0, temp; string tmp;
	cout << "*******Menu******\n\n";
	cout << "0-�����\n";
	cout << "1-������������ �������\n";
	cout << "2-�������\n";
	cout << "3-���������� �������\n";
	cout << "4-�������\n";
	do{
		cin >> choise;
		switch (choise)
		{
		case 1:
		{cout << "\n*������������ �������*\n\n";
		Konditer_Izdel k_i;
		cout << "������� ���� "; cin >> temp;
		cout << "\n������������ �������\n";
		k_i.setCost(temp);
		k_i.getCost(); 
		cout << endl;
		}
			break;
		case 2:
		{cout << "*\n�������*\n\n";
		Konfeta konf;
		cout << "������� ���� "; cin >> temp;
		konf.setCost(temp);
		cout << "������� ����� "; cin >> tmp;
		konf.setForma(tmp);
		cout << "������� ����� �������� "; cin >> temp;
		konf.set_Karamel(temp);
		cout << "\n�������\n";
		konf.getCost();
		konf.getForma();
		konf.get_Karamel(); 
		cout << endl;
		}
			break;
		case 3:
		{cout << "\n*���������� �������*\n\n";
		Chocolate_konfeta ch_konf;
		cout << "������� ���� "; cin >> temp;
		ch_konf.setCost(temp);
		cout << "������� ����� "; cin >> tmp;
		ch_konf.setForma(tmp);
		cout << "������� ��� �������� "; cin >> tmp;
		ch_konf.setVid(tmp);
		cout << "������� ����� �������� "; cin >> temp;
		cout << "\n���������� �������\n";
		ch_konf.set_Karamel(temp);
		ch_konf.getCost();
		ch_konf.getForma();
		ch_konf.getVid();
		ch_konf.get_Karamel();
		cout << endl;
		}
			break;
		case 4:
		{cout << "\n*�������*\n\n";
		Pechenie cookis;
		cout << "������� ���� "; cin >> temp;
		cookis.setCost(temp);
		cout << "������� ��� ������� "; cin >> tmp;
		cout << "\n�������\n";
		cookis.setTip(tmp);
		cookis.getCost();
		cookis.getTip(); 
		cout << endl;
		}
			break;
		}
	} while (choise != 0);
	return 0;
}

