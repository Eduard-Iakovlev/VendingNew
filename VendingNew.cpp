#include <iostream>
#include <Windows.h>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMechine.h"

using std::cout;
using std::cin;



int main(){

	setlocale(LC_ALL, "");

	int num{ 0 };

	Snack* snickers = new Snack("Snickers", 2);
	Snack* mars = new Snack("Mars", 2);
	Snack* bounty = new Snack("Bounty", 2);
	Snack* milkyway = new Snack("MilkyWay", 2);
	Snack* mms = new Snack("M&M's", 2);
	Snack* empty = new Snack("--", 0);

	SnackSlot *slot = new SnackSlot(10);
	slot->addSnack(snickers);
	slot->addSnack(mars);
	slot->addSnack(bounty);
	slot->addSnack(milkyway);
	slot->addSnack(mms);
 
	VendingMachine* machine = new VendingMachine(5);
	machine->addSlot(slot);

	while (true)
	{
		system("cls");

		machine->show();
		//cout << "\n" << " Пустых слотов: " << machine->getEmptySlotsCount() << "\n";

		cout << "\n Выберите номер продукта: ";
		cin >> num;

		if (slot->testempty(num-1) == 0) continue;
		
		cout << "\n\n\n\n\n\n\n\n               ";
		slot->ext(num-1);
		slot->show(num-1);
		cout << " выдан." << "\n\n\n\n\n\n\n\n\n ";
		Sleep(1000);
		
		cout << "\n" << snickers->stock() << "\n";
		if (snickers->stock() == 0)
		{
			slot->addSnack(empty, (num - 1));
			delete snickers;
		}
		cout << "\n" << mars->stock() << "\n";
		if (mars->stock() == 0)
		{
			slot->addSnack(empty, (num - 1));
			delete mars;
		}
		cout << "\n" << bounty->stock() << "\n";
		if (bounty->stock() == 0)
		{
			slot->addSnack(empty, (num - 1));
			delete bounty;
		}
		cout << "\n" << milkyway->stock() << "\n";
		if (milkyway->stock() == 0)
		{
			slot->addSnack(empty, (num - 1));
			delete milkyway;
		}
		cout << "\n" << mms->stock() << "\n";
		if (mms->stock() == 0)
		{
			slot->addSnack(empty, (num - 1));
			delete mms;
		}
		if (slot->testempty() == 0)
		{
			delete slot;
			delete machine;
			delete empty;

			system("cls");
			cout << "\n\n\n                 Необходимо загрузить аппарат! \n\n\n";
			break;
		}


	}
 
	
}