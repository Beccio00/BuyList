//
// Created by Riccardo Becciolini on 15/09/20.
//

#ifndef UNTITLED_PRODUCT_H
#define UNTITLED_PRODUCT_H

#include <iostream>

using namespace std;

class Product {
public:
    Product(string n, string t, int q, bool a = false) : name(n), type(t), quantity(q), acquired(a) {};

private:
    string name;
    string type;
    int quantity;
    bool acquired;

};


#endif //UNTITLED_PRODUCT_H
