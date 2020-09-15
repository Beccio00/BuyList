//
// Created by Riccardo Becciolini on 15/09/20.
//

#ifndef UNTITLED_USER_H
#define UNTITLED_USER_H
#include "ShoppingList.h"
#include <iostream>
#include <list>

using namespace std;

class User {
public:
    User() = default;
    explicit User(list<ShoppingList*> l) : lists(l) {};

    void addList(ShoppingList* b);

    void removeList(ShoppingList* b);

    void printTotal(ShoppingList* b);

private:
    list<ShoppingList*> lists;


};


#endif //UNTITLED_USER_H
