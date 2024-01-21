#include <iostream>
#include <Windows.h>
#include "SnackSlot.h"

using std::cout;

SnackSlot::SnackSlot(const int size) : size(size)
{
	stockSnack = new Snack * [size];
	for (int i = 0; i < size; ++i)
	{
		stockSnack[i] = nullptr;
	}
}

void SnackSlot::addSnack(Snack* snack)
{
	stockSnack[numSlot] = snack;
	numSlot++;
}
void SnackSlot::addSnack(Snack* snack, int num)
{
	stockSnack[num] = snack;
}


void SnackSlot::show() const
{
	for (int i = 0; i < numSlot; ++i)
	{
		cout << "| " << i + 1 << ":" << stockSnack[i]->getName() << " |";
	}
}

void SnackSlot::show(int num) const
{
	cout << " " << stockSnack[num]->getName();
}

void SnackSlot::ext(int num)
{
	stockSnack[num]->operator--();
}

int SnackSlot::testempty()
{
	int test{ 0 };

	for (int i = 0; i < numSlot; ++i)
	{
		test += stockSnack[i]->stock();
	}
	return test;
}
int SnackSlot::testempty(int num)
{
	if (stockSnack[num]->stock() == 0)
	{
		cout << " Данная ячейка пуста!";
		Sleep(1500);
	}
	return stockSnack[num]->stock();

}
