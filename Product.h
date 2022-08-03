#pragma once
#include <iostream>
#include <string>
using std::string;

enum UNITS { PIECE, KG, PACK, PAIR };

class Product {
protected:
    UNITS unit;
    string prod_name;
    int amount;
public:
    // constructors
    Product(const string& _name, UNITS _unit, int _amount = 0);
    // getters
    virtual void show_details();
    // setters
    void set_amount(int _amount);
};

// Construct & Destruct


Product::Product(const string& _name, UNITS _unit, int _amount) {
    prod_name = _name;
    unit = _unit;
    amount = _amount;
}

// Getters

void Product::show_details() {
    std::cout << "-------------------" << std::endl;
    std::cout << "Details of product:" << std::endl;
    std::cout << " Name:  \t" << prod_name << std::endl;
    std::cout << " Amount:\t" << amount << std::endl;
    std::cout << "-------------------" << std::endl;
}

// Setters

void Product::set_amount(int _amount) {
    amount = _amount;
}
