#pragma once
#include "SnackSlot.h"

class VendingMachine
{
public:
	VendingMachine(const int);
	void addSlot(SnackSlot*);
	void show() const;
	int getEmptySlotsCount() const;

private:
	int size{ 0 };
	int numCell{ 0 };
	SnackSlot** stockSlot{ nullptr };
};
