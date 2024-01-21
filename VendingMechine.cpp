#include "VendingMechine.h"
#include <iostream>
#include "Snack.h"

using std::cout;

VendingMachine::VendingMachine(const int size) : size(size)
{
	
	stockSlot = new SnackSlot* [size];
	for (int i = 0; i < size; ++i)
	{
		stockSlot[i] = nullptr;
	}
}

void VendingMachine::addSlot(SnackSlot* slot)
{
	stockSlot[numCell] = slot;
	++numCell;
}




void VendingMachine::show() const
{
	for (int i = 0; i < numCell; ++i)
	{
		cout << "Слот " << i + 1;
		stockSlot[i]->show();
	}
}

int VendingMachine::getEmptySlotsCount() const
{
	return size - numCell;
}
