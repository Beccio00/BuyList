//
// Created by Riccardo Becciolini on 15/09/20.
//

#include "User.h"

void User::addList(ShoppingList *b) {
    lists.push_back(b);
}

void User::removeList(ShoppingList *b) {
    lists.remove(b);
}

void User::printTotal(ShoppingList* b) {
    cout << "Articoli da comprare: " << b->getTotal() << endl;
}

