//
// Created by Riccardo Becciolini on 15/09/20.
//

#include "User.h"

void User::addList(BuyList *b) {
    lists.push_back(b);
}

void User::removeList(BuyList *b) {
    lists.remove(b);
}

void User::printTotal(BuyList* b) {
    cout << "Articoli da comprare" << b->getTotal() << endl;
}

