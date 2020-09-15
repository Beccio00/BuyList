//
// Created by Riccardo Becciolini on 15/09/20.
//

#ifndef UNTITLED_BUYLIST_H
#define UNTITLED_BUYLIST_H
#include <iostream>
#include "Product.h"
#include <map>

using namespace std;

class BuyList {
public:
    BuyList() = default;
    explicit BuyList(map<string, Product*> l) : list(l) {};

    void add(Product& p);

    void remove(Product& p);


private:
    map<string, Product*> list;
    int total = 0;

};


#endif //UNTITLED_BUYLIST_H
