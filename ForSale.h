#pragma once
#include <iostream>

class ForSale
{
protected:
	int rub;
	short kop;
public:
	ForSale();
	void set_price(int _rub, short _kop);
	float get_price();
	virtual void sell(int how_many);
};

ForSale::ForSale()
{
	rub = 0; kop = 0;
}

void ForSale::set_price(int _rub, short _kop)
{
	rub = _rub;
	if (_kop < 100 && _kop > 0) kop = _kop;
	else kop = 0;
}

float ForSale::get_price()
{
	float res = rub + (float)kop / 100;
	return res;
}

void ForSale::sell(int how_many)
{
	std::cout << "--- Cell items ---" << std::endl;
	std::cout << "Amount: " << how_many << std::endl;
	std::cout << "[+] Announce the price: " << get_price() << std::endl;
}