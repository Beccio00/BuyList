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

    const string &getName() const {
        return name;
    }

    const string &getType() const {
        return type;
    }

    int getQuantity() const {
        return quantity;
    }

    bool isAcquired() const {
        return acquired;
    }

private:
    string name;
    string type;
    int quantity;
    bool acquired;

};


#endif //UNTITLED_PRODUCT_H
