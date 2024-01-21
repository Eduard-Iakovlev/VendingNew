#pragma once
#include <string>

using std::string;

class Snack
{
public:
	Snack(const string&, int);
	Snack& operator--();
	string getName() const;

	int stock();

private:
	string tittle{ 0 };
	int quant{ 0 };

};

