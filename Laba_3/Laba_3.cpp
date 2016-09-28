// Laba_3.cpp: определяет точку входа для консольного приложения.
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
	cout << "0-Выход\n";
	cout << "1-Кондитерское изделие\n";
	cout << "2-Конфета\n";
	cout << "3-Шоколадная конфета\n";
	cout << "4-Печенье\n";
	do{
		cin >> choise;
		switch (choise)
		{
		case 1:
		{cout << "\n*Кондитерское изделие*\n\n";
		Konditer_Izdel k_i;
		cout << "Введите цену "; cin >> temp;
		cout << "\nКондитерское изделие\n";
		k_i.setCost(temp);
		k_i.getCost(); 
		cout << endl;
		}
			break;
		case 2:
		{cout << "*\nКонфета*\n\n";
		Konfeta konf;
		cout << "Введите цену "; cin >> temp;
		konf.setCost(temp);
		cout << "Введите форму "; cin >> tmp;
		konf.setForma(tmp);
		cout << "Введите массу карамели "; cin >> temp;
		konf.set_Karamel(temp);
		cout << "\nКонфета\n";
		konf.getCost();
		konf.getForma();
		konf.get_Karamel(); 
		cout << endl;
		}
			break;
		case 3:
		{cout << "\n*Шоколадная конфета*\n\n";
		Chocolate_konfeta ch_konf;
		cout << "Введите цену "; cin >> temp;
		ch_konf.setCost(temp);
		cout << "Введите форму "; cin >> tmp;
		ch_konf.setForma(tmp);
		cout << "Введите вид шоколада "; cin >> tmp;
		ch_konf.setVid(tmp);
		cout << "Введите массу карамели "; cin >> temp;
		cout << "\nШоколадная конфета\n";
		ch_konf.set_Karamel(temp);
		ch_konf.getCost();
		ch_konf.getForma();
		ch_konf.getVid();
		ch_konf.get_Karamel();
		cout << endl;
		}
			break;
		case 4:
		{cout << "\n*Печенье*\n\n";
		Pechenie cookis;
		cout << "Введите цену "; cin >> temp;
		cookis.setCost(temp);
		cout << "Введите вид печенья "; cin >> tmp;
		cout << "\nПеченье\n";
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

