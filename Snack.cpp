#include "Snack.h"

Snack::Snack(const string& tittle, int quant) : tittle(tittle), quant(quant) {}

Snack& Snack::operator--()
{
	--quant;
	return* this;
}

string Snack::getName() const
{
	return tittle;
}

int Snack::stock()
{
	return quant;
}
