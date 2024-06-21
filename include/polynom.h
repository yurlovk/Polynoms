#pragma once
#include <iostream>
#include "monom.h"
#include "list.h"
using namespace std;
class poly
{
private:
	Tlist<monom> pol;

public:
	poly() { Tlist<monom> pol; };
	poly(string& s);
	poly(const poly& p);
	size_t size();
	poly& operator = (const poly& p);
	poly operator + (poly& p);
	poly operator * (int k);
	poly operator * (poly& p);
	poly& conv();
	poly& der(char c);
	void print();
};


