//
// Created by Riccardo Becciolini on 15/09/20.
//

#ifndef UNTITLED_SHOPPINGLIST_H
#define UNTITLED_SHOPPINGLIST_H
#include <iostream>
#include "Product.h"
#include <map>

using namespace std;

class ShoppingList {
public:
    ShoppingList() : total(0) {};
    explicit ShoppingList(map<string, Product*> l);

    void add(Product& p);

    void remove(string n);

    void modify(string pr, string ty, int q, bool a);

    int getTotal() const {
        return total;
    }

    const map<string, Product *> &getList() const {
        return list;
    }

private:
    map<string, Product*> list;
    int total;

};


#endif //UNTITLED_SHOPPINGLIST_H
