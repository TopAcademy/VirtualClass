/******************************************
 Проект VirtualClass
 Практическая реализация темы урока
 "Виртуальные функции и абстрактные классы"
 03 авг 2022
 ******************************************/

#include <iostream>
#include <string>
#include "footwear.h"
using std::string;
using std::cout;
using std::endl;

int main(int argc, char** argv)
{
	ForSale* p = new Footwear("Shoes", 44, MEN, 5);
	p->set_price(1000, 0);
	p->sell(5);
}
