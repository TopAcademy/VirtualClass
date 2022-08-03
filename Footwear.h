#pragma once
#include <string>
#include "Product.h"
#include "ForSale.h"

enum Gender { MEN, WOMEN, BOYS, GIRLS };

class Footwear : public Product, public ForSale
{
protected:
	static const std::string gender_names[];
protected:
	unsigned shoe_size;
	Gender gender;
public:
	// Constructors
	Footwear(const string& _name, unsigned _size, Gender _gender, int _amount = 0);
	// Getters
	void show_details();
	// Virtual base funcs
	void sell(int how_many);
};

// Statics

const std::string Footwear::gender_names[] = { "MEN", "WOMEN", "BOYS", "GIRLS" };

// Constructors


Footwear::Footwear(const string& _name, unsigned _size, Gender _gender, int _amount)
	: Product(_name, PAIR, _amount)
{
	shoe_size = _size;
	gender = _gender;
}

// Getters

void Footwear::show_details()
{
	Product::show_details();
	std::cout << " Size:  \t" << shoe_size << std::endl;
	std::cout << " Gender:\t" << gender_names[gender] << std::endl;
	std::cout << "-------------------" << std::endl;
}


// Definition of virtual funcs

void Footwear::sell(int how_many)
{
	ForSale::sell(how_many);
	std::cout << "[+] Try on" << std::endl;
	std::cout << "[+] Get money: " << get_price() * how_many;
}