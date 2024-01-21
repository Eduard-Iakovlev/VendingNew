#pragma once
#include "Snack.h"
#include <xkeycheck.h>

class SnackSlot
{
public:
	SnackSlot(const int);
	void addSnack(Snack*);
	void addSnack(Snack*, int);
	void show() const;
	void show(int) const;
	void ext(int);
	int testempty();
	int testempty(int);

private:
	int size{ 0 };
	int numSlot{ 0 };
	Snack** stockSnack{ nullptr };
};


